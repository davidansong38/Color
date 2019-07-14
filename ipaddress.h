#include"ipaddr/ipaddress"

void __declpsec(dllexport) showmessge(const char  messagenger[], ...){
    
    printf("%c", '\n');
    MessageBox(messagenger);

    return;
  }

namespace{
 namespace WM_PROCESSING{
  const unsigned PostQuiteMessage(unsigned = 0, ...);
  }
 namespace WM_Message = WM_PROCESSING;
 }
