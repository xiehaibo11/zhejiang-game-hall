
/* cocos2d::Console::Utility::sendPrompt(int) */

void cocos2d::Console::Utility::sendPrompt(int param_1)

{
  char *__s;
  size_t __n;
  
  __s = DAT_0178fc08;
  if ((_prompt & 1) == 0) {
    __s = &DAT_0178fbf9;
  }
  __n = strlen(__s);
  sendto(param_1,__s,__n,0,(sockaddr *)0x0,0);
  return;
}

