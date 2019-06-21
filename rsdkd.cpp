#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<typeinfo>
#include<new>
#include<exception>
#include"sys"

typedef int int32_t, int4_t;
typedef char* PCHAR;
typedef PCHAR PTCHAR[];

typedef void (*func_p)(int&, unsigned&, ...);

static inline const void add(int&, unsigned&, ...);

namespace{
 namespace process_pcb{
   class prscb{
    private: 
     unsigned long pid;
     long double process_size;
     std::string* ptime;
     std::string ptime_t;
     char* pruntm_error;
    public:
     prscb() = default;
     prscb(unsigned long pid, 
     long double p_size = 0.0000000, std::string ptime_t= "UnAvailabe" )
     :pid(pid), ptime(new std::string(ptime_t)){
       pruntm_error = (char*)malloc(100*sizeof(pruntm_error));
       pruntm_error = "Runtime -- Successful";
     }
     prscb(const prscb&) = delete;
     char* operator()(const char* = "");
    public:
    virtual ~prscb();
    virtual void process() = 0;
   };
 }
 namespace pcb = process_pcb;
}

::pcb::prscb::~prscb(){delete ptime; free(pruntm_error);}
using namespace ::pcb;

inline char* prscb::operator()(const char* auto_run){

  return const_cast<char*>(auto_run);
}

namespace err{
  namespace error_h{
    struct error;
  }
}

namespace err{
  namespace error_h{
    typedef struct error{
      union{
        char* error_name;
        unsigned int err_value : 2;
        int : 0;
      }err_sys_check;
      struct error* errs;
    }Error_Printer, *ERR_PRINTER, **ERR_PRINT;
  }
  namespace error_1 = error_h;
}
namespace errror = err;

enum class SYSTEM_ERR{
   SYS_ERR1,
   SYS_ERR2 = 00010011L,
   SYS_ERR3 = 0x001123u,
   SYS_ERR4 = 001234113U 
};

namespace std{
  struct __SYS_CORE_DUMP : public virtual ::pcb::prscb, err::error_h::Error_Printer{
    public:
    __SYS_CORE_DUMP() = default;
     __SYS_CORE_DUMP(char* const s_run);
     void process(){
       std::cout<<"Almost done...."<<std::endl;
       printf("%s", this->operator()("Auto running this program...."));

     }
  public:
    unsigned long err_finder(){

      static err::error_1::ERR_PRINTER err_printer = new err::error_1::Error_Printer;

      err_printer->errs = new struct error;

      (*err_printer).errs->err_sys_check.error_name = "SYS_ERR_EXCEPTION_VALUE_D";
      (*err_printer).errs->err_sys_check.err_value = 1;

      printf("%s", err_printer->errs->err_sys_check.error_name);
     
      delete err_printer->errs;
      delete err_printer;
  
      return 00112;
    }
  public:
   static long double wait;
   int& why()throw(){}
   const long water()const{

   }
   static const int waiter(){
     
     return 00;
   }
   friend enum SYSTEM_ERR sys_r(enum SYSTEM_ERR, struct std::__SYS_CORE_DUMP**, ...);
   friend err::error_1::Error_Printer;
  };
}

long double std::__SYS_CORE_DUMP::wait = 90.000;


inline enum SYSTEM_ERR sys_r(enum SYSTEM_ERR sys_err, struct std::__SYS_CORE_DUMP** core_dump1, ...){
   static struct std::__SYS_CORE_DUMP* core_dump, *core;
   core_dump = new struct std::__SYS_CORE_DUMP;
   core_dump1 = &core_dump;
   
   core = *core_dump1;

   core->err_finder();
   sys_err = SYSTEM_ERR::SYS_ERR2;

   delete core;
   if(core_dump == 0){
      printf("Null on first pointer.");
   }
   else{
     delete core_dump;
     printf("Null on second pointer.");
   }
   return sys_err;
}

std::__SYS_CORE_DUMP::__SYS_CORE_DUMP(char* const s_run){
  *s_run = 'a';
  std::cout<<*s_run<<std::endl;
}

static struct std::__SYS_CORE_DUMP sys_core;

enum SYSTEM_ERR sys_err;
static struct std::__SYS_CORE_DUMP* core;

static const void *bdisplay(void){
   
   void* check;
   sys_r(sys_err, &core);

   return check;
}


typedef struct _OS_{
  signed os_id : 5;
  int : 0;
  char *os_name;
  std::string os_version;
  char os_manufacturer[255];
}OS_KERNEL, *OS_Kernel, **os_kernel;

static OS_KERNEL os_kern = {.os_id = 12, .os_name = "ZO12332 - OS", "ZO12332 version 1.10.12"};

static inline const void snd_error()throw(){

  return;
} 
__callback_main int32_t __codecl  __start_main __stdecl(int4_t argc, PTCHAR argv){
try{
  unsigned n2;
  int n1;
  int err0r = 404;
  func_p fun_p;

  fun_p = (func_p)add;
  
  fun_p(n1, n2);
  
  std::cout<<os_kern.os_version<<std::endl;
  
  throw new int;
  throw err0r;
}
catch(int& err){

}
catch(...){

}
  return 0x0000l;
}


const void add(int& n1, unsigned& n2, ...){
  n1 = 12, n2 = 99;
  using namespace std;
  
  char sys_l;
  cout<<"ADD of N1 + N2 = "<<n1 + n2<<endl;
  sys_core(&sys_l);
  sys_core.process();

  return;
}
