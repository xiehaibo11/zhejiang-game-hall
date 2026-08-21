
void _spEventQueue_ensureCapacity(long param_1,int param_2)

{
  int iVar1;
  void *__dest;
  
                    /* try { // try from 00d5a1b8 to 00e5a233 has its CatchHandler @ 00d5a580 */
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10) + param_2) {
    iVar1 = *(int *)(param_1 + 0x14) << 1;
    *(int *)(param_1 + 0x14) = iVar1;
    __dest = (void *)_spCalloc((long)iVar1,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(__dest,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
    _spFree(*(void **)(param_1 + 8));
    *(void **)(param_1 + 8) = __dest;
  }
  return;
}

