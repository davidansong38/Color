#include<ddrv_store>

using namespace mdevice::mdriver;

extern mouse_driver<char*> *mouse_0x00001;

static keyboard_driver keyboard = {.kybd_name = "Qwerty Keyboard", "Dell System Keyboard version 2.0", 
.kybd_class = "0DII39JIDIDJ02FF", .kybd_id = 0010032};

static struct KEYBOARD_DRIVER* kdriver_messenger(struct KEYBOARD_DRIVER, signed int kyd_value = 0, ...);

static unsigned short ckyb_driver;

unsigned short& check_on_kyb_driver(unsigned short kybd_id, ...);
static inline const void new_task(char* key = 0x000, ...);

__callback_main sys_int32_t __codecl  
__main_entry_start __stdcel(int4_t argc, PTCHAR argv)
{

  char *send_req = send_drv_respond;
  
  printf("%s", send_req);
  printf("%c", '\n');

  (*mouse_0x00001).send_request_to_system(true);
   kdriver_messenger(keyboard);
  
  delete mouse_0x00001;

  return status_main_exit;
}

inline struct KEYBOARD_DRIVER* kdriver_messenger(struct KEYBOARD_DRIVER kydriver, signed int kyd_value,  ...){
  kyd_value = 1;
  if(kyd_value == 1){
  std::cout<<"Device Details : "<<std::endl;
  printf("\tKeyboard Name : %s. \n\tKeyboard Manufacturer : %s.", kydriver.kybd_name, kydriver.kybd_maufacturer);
  
   check_on_kyb_driver(kydriver.kybd_id) = 0;
}
 else if(kyd_value == 2){
   do{
      #define KEY_PRESS 12
      char KEY = 0;
      cout<<"\nPress any key to GOTO NEW TASK  ";
      cin>>KEY;
      goto NEW_TASK;

      NEW_TASK:
        new_task(&KEY);
   }while(1 > 0);
 }
 else{
       cout<<"System crashed!!!"<<endl;
 }
  return &keyboard;
}


unsigned short& check_on_kyb_driver(unsigned short kybd_id, ...){

  switch(kybd_id){
    case 0010032:
      std::cout<<"\nYour device successfully installed..."<<endl;
    break;
    default:
      puts("System failure.");
  }
  return ckyb_driver;
}

#define KEY_IN 'I'
#define KEY_In 'i'
#define KEY_OUT 'O'
#define KEY_Out 'o'
#define KEY_RUN 'R'
#define KEY_Run 'r'

static inline const void new_task(char* key, ...){
   char services_out[255] = "Services started successfully.....";
   if(*key != KEY_IN | *key != KEY_In | *key != KEY_OUT | *key != KEY_Out| *key != KEY_RUN | *key != KEY_Run ){
      printf("\nPress the key again to GOTO NEW TASK  ");
      scanf("%c", &(*key));
   }
   
  switch(*key){
     case KEY_IN:
     case KEY_In:
       puts("Starting all services....");
       break;
     case KEY_OUT:
     case KEY_Out:
       printf("%s", services_out);
       break;
     case KEY_RUN:
     case KEY_Run:
      std::cout<<"Terminating Services...."<<endl;
      break;
     default:
      return new_task(key);
  }
}
