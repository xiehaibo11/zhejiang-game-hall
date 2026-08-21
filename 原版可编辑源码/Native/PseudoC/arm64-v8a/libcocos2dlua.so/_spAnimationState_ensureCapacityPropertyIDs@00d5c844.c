
void _spAnimationState_ensureCapacityPropertyIDs(long param_1,int param_2)

{
  void *__dest;
  
  if (*(int *)(param_1 + 0x5c) < param_2) {
    __dest = (void *)_spCalloc((long)(param_2 << 1),4,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x344);
    memcpy(__dest,*(void **)(param_1 + 0x50),(long)*(int *)(param_1 + 0x58) << 2);
    _spFree(*(void **)(param_1 + 0x50));
    *(void **)(param_1 + 0x50) = __dest;
    *(int *)(param_1 + 0x5c) = param_2 << 1;
  }
  return;
}

