#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

#ifndef __cplusplus
#define __cplusplus 01
#endif//__cplusplus

#ifndef __cplusplus
#error A Compiler error. A standard ANSI C macro has not being defined
#line 6 "main.c"
#endif// __cplusplus

#ifndef __start_main
  typedef int int32_t;
  typedef char *pchar, **ptchar;
  typedef int *pint32_t;
#else 
  typedef int (*func_pointer)();
#endif//__cplusplus

#define PRINT printf
#define BEGIN_CODE {
#define END_CODE }
#define THEN_OPEN {
#define THEN_CLOSE }


#undef __cplusplus
#undef __start_main

#define __start_main main
#define status_exit_code ~(!(0x00U))
#define __callback_main
#define __stdcel
#define __codecl __callback_main

#ifdef __start_main
typedef struct __STACK__{

}stack, *Stack, **PSTACK, STACK;
#endif//__start_main

int32_t __start_main(int argc, pchar argv[]){
  


  return 0x00;
}
