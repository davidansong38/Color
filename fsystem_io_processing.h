#include<iostream>
#pragma once
#undef __cplusplus 

#define __UNKNOWN_LINE_N 00 
#define __LINUX_SYSTEM
//#define __cplusplus

#ifndef __cplusplus
#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<sys/wait.h>
#ifdef __WIN32
#include<windows.h>
#else
#include <unistd.h>
#endif//
#else
#if __UNKNOWN_LINE_N == 00
#line __UNKNOWN_LINE_N __FILE__
#error A C/C++ Compiler required here to detect a bug in this\ library file("filesystem/fsystem_io_processing.h")
#warning A macro is not supposed to be defined in one of your\ library files("filesystem/fsystem_io_processing.h")
#elif __UNKNOWN_LINE_N == 01
struct{
  char* crash_app;
}crashapp;
#else
#define req_reboot_service 
#endif
#endif//__cplusplus

#define fsys_driver "Installing device driver...... "
#define fsystem_drv_installer(fsys_installer) fsys_installer
#define installer_success "Your device is ready to be used"
