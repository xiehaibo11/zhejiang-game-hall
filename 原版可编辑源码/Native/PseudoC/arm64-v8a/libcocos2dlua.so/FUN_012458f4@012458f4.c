
void FUN_012458f4(float param_1,long param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float local_20;
  float fStack_1c;
  float local_18;
  undefined4 local_14;
  
  *(float *)(param_2 + 0x28) = param_1;
  uVar1 = *(undefined8 *)param_3;
  fVar2 = *(float *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  local_20 = *param_4 - *param_3 * fVar2;
  fStack_1c = param_4[1] - fVar2 * param_3[1];
  local_18 = param_4[2] - fVar2 * param_3[2];
  local_14 = 0;
  param_1 = *(float *)(param_2 + 0x20) + fVar2 + param_1;
  *(float *)(param_2 + 0x28) = param_1;
  if (param_1 < 0.0) {
    *(undefined1 *)(param_2 + 0x2c) = 1;
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x20))(*(long **)(param_2 + 8),param_3,&local_20);
  return;
}

