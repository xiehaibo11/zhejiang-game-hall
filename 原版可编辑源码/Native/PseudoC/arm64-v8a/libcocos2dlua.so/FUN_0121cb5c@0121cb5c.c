
void FUN_0121cb5c(undefined4 param_1,long param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_40;
  undefined4 *puStack_38;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  local_40 = *(undefined8 *)(param_2 + 0x38);
  puStack_38 = &local_18;
  local_30 = *(float *)(param_2 + 0x48) * fVar1 + *(float *)(param_2 + 0x4c) * fVar2 +
             *(float *)(param_2 + 0x50) * fVar3;
  fStack_2c = fVar1 * *(float *)(param_2 + 0x58) + fVar2 * *(float *)(param_2 + 0x5c) +
              fVar3 * *(float *)(param_2 + 0x60);
  local_28 = fVar1 * *(float *)(param_2 + 0x68) + fVar2 * *(float *)(param_2 + 0x6c) +
             fVar3 * *(float *)(param_2 + 0x70);
  local_24 = 0;
  local_20 = param_1;
  local_18 = param_4;
  uStack_14 = param_5;
  (**(code **)(**(long **)(param_2 + 0x30) + 0x18))(*(long **)(param_2 + 0x30),&local_40,1);
  return;
}

