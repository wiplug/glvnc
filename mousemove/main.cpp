#include "vnclib.h"

int
main(int argc,char** argv){
  VNC_Client vnc;
  vnc.init(argv[1],atoi(argv[2]),argv[3]);
  for(int i=0;i<1024;i+=128){
    sleep(1);
    vnc.set_point(i,i,0);
  }
  vnc.close();
  return 0;
}
