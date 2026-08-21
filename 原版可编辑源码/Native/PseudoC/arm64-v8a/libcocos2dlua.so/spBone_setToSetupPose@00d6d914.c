
void spBone_setToSetupPose(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x1c);
  param_1[6] = *(long *)(lVar1 + 0x24);
  param_1[5] = lVar2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar1 + 0x2c);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(lVar1 + 0x30);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 0x34);
  return;
}

