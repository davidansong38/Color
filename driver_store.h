#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>
#include<exception>

#pragma once 

#undef __cplusplus
#define __cplusplus 1

#undef __cplusplus

#ifdef __cplusplus
#line 9 "driver_store.h"
#error A++ Please a macro has not being defined by the Standard\ ANSI C or ISO C++
#warning Please define a macro now
#elif defined __start_main
#define __drv_store
#else
#define send_req_to_driver
#endif//Error handling for __cplusplus

#ifndef __main_entry_start 
#define __main_entry_start main
#define __callback_main
#define __codecl __callback_main
#define __stdcel
#define send_drv_respond "Please wait whiles the system process install the drivers......"
#define MessageBox(send_drv_respond)
#endif//

#define SYSTEM_IN(sys_in) sys_in & 01000111

#ifndef __cplusplus
extern "C"{
#endif//__cplusplus

  typedef int sys_int32_t, int4_t;
  typedef char CHAR;
  typedef CHAR *PCHAR, *PTCHAR[];
  
  #define status_main_exit 0x00000000u;
  #define sys_boot 01
  #define sys_reboot 02
  #define sys_shutdown 0xB00001deff
  
  struct sys_display_;

  enum class SCREEN_COLOR{
       WHITE,
       RED,
       BLUE = 01001001,
       GREEN = 0xaFFbe2,
       GREY,
       LIGHT_BLUE = 01211,
       LIGHT_GREEN,
       LIGHT_RED = 255
  };

  struct sys_display_{
    char* screen_resolution;
    unsigned screen_resolution_size : 5;
    int : 0;
    union{
        std::string screen_manufacturer;
        char* screen_model;
    }screen_m;
  };

  namespace{
     union sound_driver{
       bool active_sound_in_system;
       char* initialize_sound_driver;
       float sound_rate;
       std::string uninitialize_sound_drv;
     }sound_drv, *snd_drv, **sdriver;
   
}

#ifndef __cplusplus
}
#endif/*__cplusplus*/

