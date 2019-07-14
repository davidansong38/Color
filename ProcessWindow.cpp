#include"ipaddr/ipaddress.h"

extern class SchoolManagementSystemForStudents;

SchoolManagementSystemForStudents *ss;

static const char cmdline[] = "At least one internal and one external argument on the commandline...";

#define WM_CLOSE 0x0001
#define WM_DESTROY 0x3

#define WM_QUIT 0x0002
#define WM_Q 0x00000004

extern inline const unsigned ::WM_Message::PostQuiteMessage(unsigned QuiteProcess, ...){

  return QuiteProcess;
}

static void* destroy;

void** destroyCurrentProcess(char[] = "No Process to Destroy", ...);

static const void inline DestroyMessage(const char* MesageDestroy, ...){
  
  std::cout<<std::endl;
  printf("%s", MesageDestroy);
}

#define CLOSE_MESSAGE DestroyMessage
#define CLOSE destroyCurrentProcess

static inline bool displayMessage(bool = false);

using namespace ::WM_PROCESSING;

using VOID = void;

VOID QUIT(const char* const);

struct _PROCESS_;

typedef struct _PROCESS_{
   unsigned long ProcessWindowDescriptor;
 union{
   long ProcessID : 12;
   int : 0;
 }processID;
 struct _PROCESS_* process;
}PROCESS, *CURPROCESS, **CURRENT_PROCESS;

static CURPROCESS curProcess = new struct _PROCESS_[sizeof(struct _PROCESS_)];

static const char RunCurProcess[] = "Running Current Process";
static const char* RunChildProcess = "Running Child Process of the Current Process";

namespace DEFMESS{
  template<typename DefMess, class DefProcessID>
  const DefMess* DefaultWindowMessage(DefProcessID defProcessID){
    
    return (defProcessID == 1l || defProcessID < 2l)?RunCurProcess:RunChildProcess;
  }
}
static const void selector(unsigned select){
   
  switch(select){
    case WM_QUIT:
    case WM_Q:
      static unsigned  short quitProcessID;
      using namespace std;
      cout<<"Enter one of the following optional command line arguments to successfully quit the current Process Window....."<<endl;
      cout<<"\t0\t Used to Quit the Current running Window Process Handler\n\t01\t Used to Stop the Current running Window Process Handler from Quitting\n\tExternal Values Used to still maintain the Current Window Process. Hence no quit message sent to the Current Window Process Handler"<<endl;
      std::cin>>quitProcessID;
    if(PostQuiteMessage(quitProcessID) == 0){
       goto QuitCurrentProcess;
    }
    else if(PostQuiteMessage(quitProcessID) == 01){
        goto NoQuitCurrentProcess;
    }
    else{
        goto CurrentProcessWindowInSession;
    }
     QuitCurrentProcess:
        QUIT("Quiting Current Process....\nDone Closing the Process Window");
        goto breakProcess;

     NoQuitCurrentProcess:
       QUIT("Stopped Current Process from Quitting...");
       goto breakProcess;
     CurrentProcessWindowInSession:
       QUIT("No Quit Message Sent. Current Process still in Session");
       goto breakProcess;

     breakProcess:
             break;
 case WM_CLOSE:
 case WM_DESTROY:
    {
     char* getDestroyMessage = (char*)*CLOSE("Please wait while the current Process gets destroyed....\nAlmost done......\nCurrent Process Terminated Successfully");
     CLOSE_MESSAGE(getDestroyMessage);
    }
     break;
 default:
     char* defWM;
     (*curProcess).process = new struct _PROCESS_;
     defWM = const_cast<char*>(DEFMESS::DefaultWindowMessage<char, long>(static_cast<long>(curProcess->process->processID.ProcessID)));
     QUIT(defWM);
     delete curProcess->process;
  }
    
  return;
}

static inline FILE readTextInFile(FILE* = NULL);

unsigned long QuitDestroySelector(void**);
//ProcessWindowDescriptor
int main(int argc, char* argv[]){
try{
   bool quite;
   int eCode = 0;
   static const char* cmdline[] = {"\n\t-n\tAllow you to run multiple number of exploit arguments on the commandline without any damage to the remote machine...", "\n\tLoading..................."};
  
  quite = true;
 {
  using namespace std;
  static struct _PROCESS_* cProcess = (struct _PROCESS_*)malloc(sizeof(struct _PROCESS_));
  cout<<"The following arguments will be used to determine the status of the Current Process Window after an argument has being Passed..."<<endl;
  cout<<"\t-0x0001\t This argument is the Closing Current Process Window value\n\t-0x0002\t Used to Quit the Current Process Window\n\t-0x0003\t Destroy the Current Process Window"<<endl;
  scanf("%lu", &cProcess->ProcessWindowDescriptor);
  selector(QuitDestroySelector((void**)&cProcess));
 }
  printf("\n");

  if(argc < 2 | argc == 1){
    printf("%s", "Please enter at least one commandline argument");
    goto exit_1;
  }
  else if(argc == 2){
    goto cmdline2;
  }
  else{
    puts(cmdline[1]);
    puts(cmdline[0]);
  }

cmdline2: 
  std::cout<<::cmdline<<std::endl;

exit_1:
 throw eCode;
}
catch(int& erCodeProcess){
  FILE fileRead;

  erCodeProcess = 40404;
  std::cout<<"Current running process was unable to terminate because another process is currently using this process or application. Please use this error code to technical force the current running process to terminate successfully.For technical support contact us with Error code 0x00ADFFed92882"<<erCodeProcess<<std::endl;
  readTextInFile(&fileRead);
  
  goto exit_2;
}
catch(...){

}
exit_2:
  delete[] curProcess;
  return 0x00U;
}

bool displayMessage(bool exitSuccess){
  
  showmessage();

  return (exitSuccess == true)?true:false;
}

VOID inline QUIT(const char* const quiteProcess){
 
  puts(quiteProcess);

}

inline void** destroyCurrentProcess(char destroyProcess[], ...){
   
   destroy = destroyProcess;

   return &destroy;
}

unsigned long QuitDestroySelector(void** processWM){

  CURRENT_PROCESS curprocess = reinterpret_cast<CURRENT_PROCESS>(processWM);
  CURPROCESS curProcess = *curprocess;
  struct _PROCESS_ processWndM;
  processWndM = *curProcess;

  return processWndM.ProcessWindowDescriptor;
}

#define FileToServe __FILE__
#define ReadMode "r"
//#define NULL 0

FILE readTextInFile(FILE* fileReader){

  fileReader = (FILE*)malloc(sizeof(fileReader));
  fileReader = fopen(FileToServe, ReadMode);
  
  char fileContainer[1024], ch;
  char* filePlayer;
  FILE* file = NULL;
  file = (FILE*)malloc(sizeof(fileReader));
  file = fopen("readMe.dav", "w");
  while( (ch = getc(fileReader)) != EOF) {
  /*getc() function reads a character and its value is stored in variable 'ch' until EOF is encountered*/

   fprintf(file, "%c", ch);
  }
  
  fclose(fileReader);
  fclose(file);
  free(fileReader);
  free(file);
  
  return *fileReader;
}
