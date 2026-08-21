
void _spSkeletonJson_setError(long param_1,long param_2,char *param_3,char *param_4)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  char *__dest;
  char acStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  _spFree(*(void **)(param_1 + 0x10));
                    /* try { // try from 00d67f04 to 00e67f1b has its CatchHandler @ 00d682a4 */
  __strcpy_chk(acStack_158,param_3,0x100);
  sVar2 = strlen(param_3);
  if (param_4 != (char *)0x0) {
    strncat(acStack_158 + (int)sVar2,param_4,(long)(0xff00000000 - (sVar2 << 0x20)) >> 0x20);
  }
  lVar3 = __strlen_chk(acStack_158,0x100);
  __dest = (char *)_spMalloc(lVar3 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                             ,0x58);
  *(char **)(param_1 + 0x10) = __dest;
  strcpy(__dest,acStack_158);
  if (param_2 != 0) {
    Json_dispose(param_2);
  }
                    /* try { // try from 00d67f7c to 00e6805f has its CatchHandler @ 00d68284 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

