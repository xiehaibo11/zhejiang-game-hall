
void _spSkeletonBinary_setError(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  char *__dest;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  _spFree(*(void **)(param_1 + 0x10));
  __strcpy_chk(acStack_148,param_2,0x100);
  sVar2 = strlen(param_2);
  if (param_3 != (char *)0x0) {
                    /* try { // try from 00d614ec to 00e614f3 has its CatchHandler @ 00d6153c */
    strncat(acStack_148 + (int)sVar2,param_3,(long)(0xff00000000 - (sVar2 << 0x20)) >> 0x20);
  }
                    /* try { // try from 00d614f4 to 00e615df has its CatchHandler @ 00d610ac */
                    /* catch() { ... } // from try @ 00d61438 with catch @ 00d614f8 */
  lVar3 = __strlen_chk(acStack_148,0x100);
                    /* catch() { ... } // from try @ 00d613f4 with catch @ 00d614fc */
                    /* catch() { ... } // from try @ 00d61414 with catch @ 00d61500 */
  __dest = (char *)_spMalloc(lVar3 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                             ,0x5d);
  *(char **)(param_1 + 0x10) = __dest;
                    /* catch() { ... } // from try @ 00d613cc with catch @ 00d61518
                       catch() { ... } // from try @ 00d61458 with catch @ 00d61518 */
  strcpy(__dest,acStack_148);
                    /* catch() { ... } // from try @ 00d612e8 with catch @ 00d6151c */
                    /* catch() { ... } // from try @ 00d612d0 with catch @ 00d61520 */
                    /* catch() { ... } // from try @ 00d61398 with catch @ 00d61524 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00d611cc with catch @ 00d6153c
                       catch() { ... } // from try @ 00d614ec with catch @ 00d6153c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00d612bc with catch @ 00d61544 */
  __stack_chk_fail();
}

