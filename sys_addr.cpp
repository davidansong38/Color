#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>

#pragma once 
#undef __cplusplus

#ifndef __secure_system
#define __secure_system 029910221
#elif defined __start_main
#define sys_print(ss_print) ss_print & 0010
#else 
extern "C"{
#define MAC_ADDR 128
typedef int int32_t;
typedef char system_mac_address[MAC_ADDR];
#if MAC_ADDR == 128
struct{
  unsigned number_of_users_online : 5;/*Min: 1 & Max  is 32*/
  char* ipaddress_of_remote_machine;
  std::string ipaddress_of_local_machine;
  system_mac_address sys_mac_addr;
  enum class __USERS__{
     DAY1,
     DAY2 = 00000001,
     DAY3 = 0x02,
     DAY4 = 03,
     DAY5
  }n_users;
}sys_address;
#elif MAC_ADDR != 128
typedef union __n_of_hops{
   signed long max_number_of_hops_on_network;
   unsigned short min_number_of_hops_on_network;
   long double max_network_speed;
   float min_network_speed;
}NHOPS, *N_HOPS, **NUMBER_HOPS;
#endif//Number of hops to route
}
#endif//Error handling on Some macro

#include<sys_info>

#define __callback_main
#define __stdecl __callback_main
#define __codecl
#define __start_main main

#ifndef __start_main
#error A++ Please the macro __start_main has not being defined\ by the Standard ANSI C/ISO C++ 
#line 6 __FILE__
#warning Please a macro is still not defined by the Standard....
#endif//

typedef int int4_t;
typedef char CHAR, *PCHAR;
typedef PCHAR PTCHAR[];

#define __SSYSTEM_ADDR
#define __SYSTEM_ADDR __SSYSTEM_ADDR
#define __SYS_ADDRESS __SYSTEM_ADDR

namespace system_address{
  namespace{
   template<class SYS_ADDR_1, typename SYS_ADDR_2 = PCHAR, class SYSTEM_ADDR_PARAM = bool, bool SYS_ADDR_PARAM = false, unsigned long nOfAddresses_to_use = 0>
   class sys_address{
     private:
      SYS_ADDR_1 sys_mac_addr;
      SYS_ADDR_2 host_ip_addr;
      SYSTEM_ADDR_PARAM type_of_address_sys;
      unsigned long total_nOfAddresses_to_use;
      SYS_ADDR_1* sys_mac_allocator;
     public:
      __SSYSTEM_ADDR sys_address() = default;
      __SYSTEM_ADDR sys_address(
        SYS_ADDR_1 sys_mac_address, 
        SYS_ADDR_2 host_ip_addr = "127.0.0.1"
      )
      :sys_mac_addr(sys_mac_address), host_ip_addr(host_ip_addr),
       type_of_address_sys(SYS_ADDR_PARAM),
       sys_mac_allocator(new SYS_ADDR_1(sys_mac_allocator))
      {
         total_nOfAddresses_to_use = 30;
      }
      virtual __SYSTEM_ADDR ~sys_address()__SYS_ADDRESS;

     public:
      virtual void run_address_diagnostics() = 0;
      bool look_addr_up(const char *const = "No request made to the system");
      void operator()(char sys_resp[]){
        using namespace std;
        char* sys_ACK[] = {"Thanks for using this service.", "System wasn't able to finish processing your request....", "@root:/usr/bin/sys_core_down/running....."};

        cout<<"Your LocalHost IP address is  "<<sys_resp<<endl;
        printf("__SYS_ACK_FNKD__ %s", sys_ACK[1]);
        return;
      }
   };
    template<class SYS_ADDR_1, typename SYS_ADDR_2, class SYSTEM_ADDR_PARAM, bool SYS_ADDR_PARAM, unsigned long nOfAddresses_to_use>
    inline bool sys_address<SYS_ADDR_1, SYS_ADDR_2,SYSTEM_ADDR_PARAM, SYS_ADDR_PARAM,nOfAddresses_to_use>::look_addr_up(const char *const sys_res){
        bool quite = false;
        (*this).host_ip_addr = "192.168.0.0";
        printf("Request is being processed......");
        std::cout<<sys_res<<std::endl;
        this->operator()(this->host_ip_addr);

        return quite = (0x2 > 1)?true : false;
    }
 }
}
namespace sys_ADDR = system_address;

template<class SYS_ADDR_1, typename SYS_ADDR_2, class SYSTEM_ADDR_PARAM, bool SYS_ADDR_PARAM, unsigned long nOfAddresses_to_use>
system_address::sys_address<SYS_ADDR_1, SYS_ADDR_2,SYSTEM_ADDR_PARAM, SYS_ADDR_PARAM,nOfAddresses_to_use>::~sys_address(){
   delete sys_mac_allocator;
}

namespace{
  using namespace std;
  typedef typename std::string STRING;
  class ssys_addr_in : public virtual sys_ADDR::sys_address<string>{
    public:
     virtual void run_address_diagnostics(){
       
       this->look_addr_up("\nRequest almost done processing....");
        
       return;
     }
  }systm_address;
}

static ::ssys_addr_in *ssys_in = new ::ssys_addr_in;

__callback_main int4_t __stdecl __start_main __codecl(){
 
 try{
    {
      (*ssys_in).run_address_diagnostics();
    }

    throw new ::ssys_addr_in;
 }
 catch(::ssys_addr_in* ssys_addr){


 }
 catch(...){


 }

  return 0x00000000L;
}
