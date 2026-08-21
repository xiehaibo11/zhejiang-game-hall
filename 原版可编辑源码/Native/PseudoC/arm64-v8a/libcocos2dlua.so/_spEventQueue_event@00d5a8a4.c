
void _spEventQueue_event(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < *(int *)(param_1 + 0x14)) {
    pvVar3 = *(void **)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) << 1;
    *(int *)(param_1 + 0x14) = iVar2;
    pvVar3 = (void *)_spCalloc((long)iVar2,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(pvVar3,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
    _spFree(*(void **)(param_1 + 8));
    uVar1 = *(uint *)(param_1 + 0x10);
    *(void **)(param_1 + 8) = pvVar3;
  }
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  *(undefined4 *)((long)pvVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3))
       = 5;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < *(int *)(param_1 + 0x14)) {
    pvVar3 = *(void **)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) << 1;
    *(int *)(param_1 + 0x14) = iVar2;
    pvVar3 = (void *)_spCalloc((long)iVar2,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(pvVar3,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
    _spFree(*(void **)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x10);
    *(void **)(param_1 + 8) = pvVar3;
  }
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  *(undefined8 *)((long)pvVar3 + (long)iVar2 * 8) = param_2;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < *(int *)(param_1 + 0x14)) {
    pvVar3 = *(void **)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) << 1;
    *(int *)(param_1 + 0x14) = iVar2;
    pvVar3 = (void *)_spCalloc((long)iVar2,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(pvVar3,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
    _spFree(*(void **)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x10);
    *(void **)(param_1 + 8) = pvVar3;
  }
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  *(undefined8 *)((long)pvVar3 + (long)iVar2 * 8) = param_3;
  return;
}

