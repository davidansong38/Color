#pragma once 

#define __initialize_mouse__
#define _init_mouse_ __initialize_mouse__
#define __close_init_mouse

extern "C"{
  typedef unsigned short keyboard_id;
  typedef char *keyboard_name, *keyboard_manufacturer;
  typedef typename std::string keyboard_class;

  typedef struct KEYBOARD_DRIVER{
     keyboard_name kybd_name;
     keyboard_manufacturer kybd_maufacturer;
     keyboard_class kybd_class;
     keyboard_id kybd_id;
  }keyboard_driver, *Keyboard_driver, **KeyBoard_Driver;
}

using namespace std;

namespace mouse{
  namespace mouse_drv{
      template<typename MLB_NAME, class MRB_NAME = string, typename MCB_NAME = char*, unsigned long mouse_id = 0>
      class mouse_driver{
        private:
           MLB_NAME mouse_left_name;
           MRB_NAME mouse_right_name;
           MCB_NAME mouse_center_name;
           unsigned long Mouse_ID;
           unsigned long* mouse_id_allocator;
        public:
          mouse_driver() = default;
        public:
         _init_mouse_ __initialize_mouse__ mouse_driver(
          MLB_NAME mln, MRB_NAME mrn = "Right Button", 
          MCB_NAME mcn = "Center/Scroll Button")
          : mouse_left_name(mln), mouse_right_name(mrn),
           Mouse_ID(mouse_id){
             
             mouse_center_name = mcn;
             mouse_id_allocator = new unsigned long[Mouse_ID];
           }
        public:
           virtual __close_init_mouse ~mouse_driver()__close_init_mouse;

        public:
         virtual void send_request_to_system(bool flag = false, ...) = 0;
      };
    }
    namespace mdriver = mouse_drv;
  }
  namespace mdevice = mouse;

  template<typename MLB_NAME, class MRB_NAME, typename MCB_NAME, unsigned long mouse_id>
  mdevice::mdriver::mouse_driver<MLB_NAME, MRB_NAME, MCB_NAME, mouse_id>::~mouse_driver(){

     delete[] mouse_id_allocator;
  }

/*
template<typename MLB_NAME, class MRB_NAME, typename MCB_NAME, unsigned long mouse_id>
inline void mdevice::mdriver::mouse_driver<MLB_NAME, MRB_NAME, MCB_NAME, mouse_id>::send_request_to_system(bool flag, ...){
   
   ostream &ref_cout  = cout;
  
  if(flag == true){
     ref_cout<<"Installing driver for mouse....."<<endl;
  }
  else{
     puts("USB Device not recognized....");
  }

   return; 
}
*/

namespace mouse_Interface{
  using namespace mdevice::mdriver;
  class mInterface : public mouse_driver<char*>{
     public:
      inline void send_request_to_system(bool flag = false, ...){
   
        ostream &ref_cout  = cout;
  
        if(flag == true){
           ref_cout<<"Installing driver for mouse....."<<endl;
         }
       else{
          puts("USB Device not recognized....");
        }

        return; 
    }  
  };
}

using namespace mouse_Interface;
mInterface* minterface = new mInterface;

 //using namespace mouse::mdriver;
 mouse::mouse_drv::mouse_driver<char*> *mouse_0x00001 = 
 &(*minterface);
