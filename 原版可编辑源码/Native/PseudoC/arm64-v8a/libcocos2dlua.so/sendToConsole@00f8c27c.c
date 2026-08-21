
/* cocos2d::Console::Utility::sendToConsole(int, void const*, unsigned long, int) */

long cocos2d::Console::Utility::sendToConsole(int param_1,void *param_2,ulong param_3,int param_4)

{
  char *__s1;
  int iVar1;
  ssize_t sVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  
  uVar4 = (ulong)(_prompt >> 1);
  if ((_prompt & 1) != 0) {
    uVar4 = DAT_0178fc00;
  }
  if (uVar4 == param_3) {
    __s1 = DAT_0178fc08;
    if ((_prompt & 1) == 0) {
      __s1 = &DAT_0178fbf9;
    }
    iVar1 = strncmp(__s1,param_2,param_3);
    if (iVar1 == 0) {
      fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
             (FILE *)pthread_rwlock_tryrdlock);
      return 0;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar4 = 0;
  lVar3 = 0;
  do {
    __n = param_3 - uVar4;
    if (0x1ff < __n) {
      __n = 0x200;
    }
    sVar2 = sendto(param_1,(void *)((long)param_2 + uVar4),__n,param_4,(sockaddr *)0x0,0);
    uVar4 = __n + uVar4;
    lVar3 = sVar2 + lVar3;
  } while (uVar4 < param_3);
  return lVar3;
}

