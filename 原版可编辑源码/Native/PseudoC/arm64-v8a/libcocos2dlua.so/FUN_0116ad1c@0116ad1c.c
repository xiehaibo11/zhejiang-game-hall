
void FUN_0116ad1c(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  float local_58;
  long local_50;
  long lStack_48;
  code *local_40;
  code *pcStack_38;
  
  pcStack_38 = FUN_0116c280;
  local_40 = FUN_0116c274;
  local_50 = param_1;
  lStack_48 = param_2;
  FUN_0116b360(&local_70,&local_50,param_3 + 0x10);
  if (local_58 <= *(float *)(param_2 + 0x88) + *(float *)(param_1 + 0x98)) {
    *(undefined8 *)(param_3 + 0x14) = local_60;
    fVar3 = *(float *)(param_1 + 0x98);
    fVar2 = (float)((ulong)local_60 >> 0x20);
    fVar4 = *(float *)(param_2 + 0x88);
    pfVar1 = (float *)(*(long *)(param_3 + 0x20) + (long)*(int *)(param_3 + 0x1c) * 0x38);
    *pfVar1 = local_70 + (float)local_60 * fVar3;
    pfVar1[1] = fStack_6c + fVar2 * fVar3;
    pfVar1[0xc] = 0.0;
    pfVar1[0xd] = 0.0;
    pfVar1[2] = local_68 + (float)local_60 * fVar4;
    pfVar1[3] = fStack_64 + fVar2 * fVar4;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  }
  return;
}

