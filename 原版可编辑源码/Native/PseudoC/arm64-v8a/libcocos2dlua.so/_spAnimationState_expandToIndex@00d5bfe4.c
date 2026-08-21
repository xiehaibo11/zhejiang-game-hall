
undefined8 _spAnimationState_expandToIndex(long param_1,int param_2)

{
  undefined8 uVar1;
  void *__dest;
  
  if (param_2 < *(int *)(param_1 + 8)) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8);
                    /* try { // try from 00d5c00c to 00e5c017 has its CatchHandler @ 00d5c1b0 */
  }
  else {
                    /* try { // try from 00d5c020 to 00e5c033 has its CatchHandler @ 00d5c1ac */
    __dest = (void *)_spCalloc((long)(param_2 + 1),8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x2f3);
    memcpy(__dest,*(void **)(param_1 + 0x10),(long)*(int *)(param_1 + 8) << 3);
    _spFree(*(void **)(param_1 + 0x10));
    uVar1 = 0;
    *(void **)(param_1 + 0x10) = __dest;
    *(int *)(param_1 + 8) = param_2 + 1;
  }
  return uVar1;
}

