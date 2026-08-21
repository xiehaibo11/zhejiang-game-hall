
void spColor_addColor(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)*param_2 + (float)*param_1;
  fVar3 = (float)((ulong)*param_2 >> 0x20) + (float)((ulong)*param_1 >> 0x20);
  fVar4 = (float)param_2[1] + (float)param_1[1];
  fVar5 = (float)((ulong)param_2[1] >> 0x20) + (float)((ulong)param_1[1] >> 0x20);
  uVar2 = 0;
  param_1[1] = CONCAT44(fVar5,fVar4);
  *param_1 = CONCAT44(fVar3,fVar1);
  if ((fVar1 < 0.0) || (uVar2 = 0x3f800000, 1.0 < fVar1)) {
    *(undefined4 *)param_1 = uVar2;
  }
  uVar2 = 0;
  if ((fVar3 < 0.0) || (uVar2 = 0x3f800000, 1.0 < fVar3)) {
    *(undefined4 *)((long)param_1 + 4) = uVar2;
  }
  uVar2 = 0;
  if ((fVar4 < 0.0) || (uVar2 = 0x3f800000, 1.0 < fVar4)) {
    *(undefined4 *)(param_1 + 1) = uVar2;
  }
  uVar2 = 0;
  if ((fVar5 < 0.0) || (uVar2 = 0x3f800000, 1.0 < fVar5)) {
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  }
  return;
}

