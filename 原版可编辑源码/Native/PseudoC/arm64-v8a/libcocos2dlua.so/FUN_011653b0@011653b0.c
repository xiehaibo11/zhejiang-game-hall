
void FUN_011653b0(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar5 = *(float *)(param_2 + 0x5c);
  fVar6 = *(float *)(param_2 + 0x38);
  *(float *)(param_2 + 100) =
       1.0 / (*(float *)(param_2 + 0x60) * *(float *)(lVar1 + 0x1c) +
             fVar5 * *(float *)(lVar2 + 0x1c));
  fVar3 = powf(*(float *)(param_2 + 0x34),param_1);
  fVar5 = fVar5 * *(float *)(lVar2 + 0x40) - *(float *)(lVar1 + 0x40);
  param_1 = ((*(float *)(param_2 + 0x58) - fVar5) + (fVar5 - *(float *)(param_2 + 0x58)) * fVar3) /
            param_1;
  fVar3 = -fVar6;
  if (param_1 <= fVar3) {
    param_1 = fVar3;
  }
  uVar4 = NEON_fminnm(param_1,fVar6);
  *(undefined4 *)(param_2 + 0x68) = uVar4;
  return;
}

