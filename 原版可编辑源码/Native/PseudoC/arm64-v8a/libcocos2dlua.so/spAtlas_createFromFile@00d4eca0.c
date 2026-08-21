
undefined8 spAtlas_createFromFile(char *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  void *__dest;
  void *__ptr;
  undefined8 uVar5;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar3 = strrchr(param_1,0x2f);
                    /* try { // try from 00d4ecd8 to 00e4edbf has its CatchHandler @ 00d4ee48 */
  pcVar4 = strrchr(param_1,0x5c);
  if (pcVar3 <= pcVar4) {
    pcVar3 = pcVar4;
  }
  if (pcVar3 == param_1) {
    pcVar3 = pcVar3 + 1;
  }
  iVar1 = 0;
  if (pcVar3 != (char *)0x0) {
    iVar1 = (int)pcVar3 - (int)param_1;
  }
  __dest = (void *)_spMalloc((long)(iVar1 + 1),
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                             ,0x141);
  memcpy(__dest,param_1,(long)iVar1);
  *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  __ptr = (void *)_spUtil_readFile(param_1,&local_4c);
  if (__ptr == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = spAtlas_create(__ptr,local_4c,__dest,param_2);
  }
  _spFree(__ptr);
  _spFree(__dest);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

