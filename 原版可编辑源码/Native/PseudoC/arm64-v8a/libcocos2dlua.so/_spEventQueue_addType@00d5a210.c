
void _spEventQueue_addType(long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  void *__dest;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < *(int *)(param_1 + 0x14)) {
    __dest = *(void **)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) << 1;
                    /* try { // try from 00d5a24c to 00e5a267 has its CatchHandler @ 00d5a584 */
    *(int *)(param_1 + 0x14) = iVar2;
    __dest = (void *)_spCalloc((long)iVar2,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(__dest,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
                    /* try { // try from 00d5a270 to 00e5a29f has its CatchHandler @ 00d5a57c */
    _spFree(*(void **)(param_1 + 8));
    uVar1 = *(uint *)(param_1 + 0x10);
    *(void **)(param_1 + 8) = __dest;
  }
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  *(undefined4 *)((long)__dest + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3))
       = param_2;
  return;
}

