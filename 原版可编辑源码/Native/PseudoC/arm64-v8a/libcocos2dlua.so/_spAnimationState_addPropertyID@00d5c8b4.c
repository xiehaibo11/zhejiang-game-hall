
undefined8 _spAnimationState_addPropertyID(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  void *__dest;
  
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar3 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    piVar4 = *(int **)(param_1 + 0x50);
    do {
      if (*piVar4 == param_2) {
        return 0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar2 < *(int *)(param_1 + 0x5c)) {
    __dest = *(void **)(param_1 + 0x50);
  }
  else {
    iVar1 = uVar2 * 2 + 2;
    __dest = (void *)_spCalloc((long)iVar1,4,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x344);
    memcpy(__dest,*(void **)(param_1 + 0x50),(long)*(int *)(param_1 + 0x58) << 2);
    _spFree(*(void **)(param_1 + 0x50));
    uVar2 = *(uint *)(param_1 + 0x58);
    *(void **)(param_1 + 0x50) = __dest;
    *(int *)(param_1 + 0x5c) = iVar1;
  }
  *(int *)((long)__dest + (long)(int)uVar2 * 4) = param_2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return 1;
}

