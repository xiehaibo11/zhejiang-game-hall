
void _spEventQueue_addEvent(long param_1,undefined8 param_2)

{
  int iVar1;
  void *__dest;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < *(int *)(param_1 + 0x14)) {
    __dest = *(void **)(param_1 + 8);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) << 1;
    *(int *)(param_1 + 0x14) = iVar1;
    __dest = (void *)_spCalloc((long)iVar1,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(__dest,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
    _spFree(*(void **)(param_1 + 8));
    iVar1 = *(int *)(param_1 + 0x10);
    *(void **)(param_1 + 8) = __dest;
  }
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  *(undefined8 *)((long)__dest + (long)iVar1 * 8) = param_2;
  return;
}

