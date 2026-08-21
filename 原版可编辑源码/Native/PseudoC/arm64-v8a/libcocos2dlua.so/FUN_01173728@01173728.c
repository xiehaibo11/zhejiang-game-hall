
void FUN_01173728(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(*(long *)(param_2 + 0x18) + 0x40) -
          *(float *)(*(long *)(param_2 + 0x10) + 0x40);
  if (fVar1 <= *(float *)(param_2 + 0x5c)) {
    fVar2 = 0.0;
    if (fVar1 < *(float *)(param_2 + 0x58)) {
      fVar2 = *(float *)(param_2 + 0x58) - fVar1;
    }
  }
  else {
    fVar2 = *(float *)(param_2 + 0x5c) - fVar1;
  }
  fVar3 = *(float *)(param_2 + 0x38);
  *(float *)(param_2 + 0x60) =
       1.0 / (*(float *)(*(long *)(param_2 + 0x18) + 0x1c) +
             *(float *)(*(long *)(param_2 + 0x10) + 0x1c));
  fVar1 = powf(*(float *)(param_2 + 0x34),param_1);
  param_1 = (fVar1 * fVar2 - fVar2) / param_1;
  fVar1 = -fVar3;
  if (param_1 <= fVar1) {
    param_1 = fVar1;
  }
  fVar1 = (float)NEON_fminnm(param_1,fVar3);
  *(float *)(param_2 + 100) = fVar1;
  if (fVar1 == 0.0) {
    *(undefined4 *)(param_2 + 0x68) = 0;
  }
  return;
}

