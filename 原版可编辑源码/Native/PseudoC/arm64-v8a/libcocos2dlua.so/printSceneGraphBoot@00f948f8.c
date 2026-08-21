
/* cocos2d::Console::printSceneGraphBoot(int) */

void __thiscall cocos2d::Console::printSceneGraphBoot(Console *this,int param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  size_t __n;
  
  uVar3 = (ulong)(Utility::_prompt >> 1);
  if ((Utility::_prompt & 1) != 0) {
    uVar3 = DAT_0178fc00;
  }
  if (uVar3 == 1) {
    pcVar1 = DAT_0178fc08;
    if ((Utility::_prompt & 1) == 0) {
      pcVar1 = &DAT_0178fbf9;
    }
    if (*pcVar1 == '\n') {
      fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
             (FILE *)pthread_rwlock_tryrdlock);
      goto LAB_00f94990;
    }
  }
  sendto(param_1,&DAT_013c61e6,1,0,(sockaddr *)0x0,0);
LAB_00f94990:
  lVar2 = Director::getInstance();
  uVar3 = printSceneGraph(this,param_1,*(Node **)(lVar2 + 0x158),0);
  Utility::mydprintf(param_1,"Total Nodes: %d\n",uVar3 & 0xffffffff);
  pcVar1 = DAT_0178fc08;
  if ((Utility::_prompt & 1) == 0) {
    pcVar1 = &DAT_0178fbf9;
  }
  __n = strlen(pcVar1);
  sendto(param_1,pcVar1,__n,0,(sockaddr *)0x0,0);
  return;
}

