
void _spEventQueue_end(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  uVar1 = *(uint *)(param_1 + 2);
  if ((int)uVar1 < *(int *)((long)param_1 + 0x14)) {
    pvVar3 = (void *)param_1[1];
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x14) << 1;
    *(int *)((long)param_1 + 0x14) = iVar2;
    pvVar3 = (void *)_spCalloc((long)iVar2,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(pvVar3,(void *)param_1[1],(long)(int)param_1[2] << 3);
    _spFree((void *)param_1[1]);
    uVar1 = *(uint *)(param_1 + 2);
    param_1[1] = (long)pvVar3;
  }
  *(uint *)(param_1 + 2) = uVar1 + 1;
  *(undefined4 *)((long)pvVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3))
       = 2;
  iVar2 = (int)param_1[2];
  if (iVar2 < *(int *)((long)param_1 + 0x14)) {
    pvVar3 = (void *)param_1[1];
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x14) << 1;
    *(int *)((long)param_1 + 0x14) = iVar2;
    pvVar3 = (void *)_spCalloc((long)iVar2,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(pvVar3,(void *)param_1[1],(long)(int)param_1[2] << 3);
    _spFree((void *)param_1[1]);
    iVar2 = (int)param_1[2];
    param_1[1] = (long)pvVar3;
  }
  *(int *)(param_1 + 2) = iVar2 + 1;
  *(undefined8 *)((long)pvVar3 + (long)iVar2 * 8) = param_2;
  *(undefined4 *)(*param_1 + 0x60) = 1;
  return;
}

