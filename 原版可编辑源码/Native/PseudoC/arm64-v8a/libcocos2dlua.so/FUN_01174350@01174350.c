
void FUN_01174350(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x58) - *(float *)(lVar1 + 0x20);
  fVar6 = *(float *)(param_2 + 0x5c) - *(float *)(lVar1 + 0x24);
  fVar4 = (float)*(undefined8 *)(lVar1 + 0x4c) * fVar3 +
          (float)*(undefined8 *)(lVar1 + 0x54) * fVar6;
  fVar3 = (float)((ulong)*(undefined8 *)(lVar1 + 0x4c) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(lVar1 + 0x54) >> 0x20) * fVar6;
  *(ulong *)(param_2 + 0x70) = CONCAT44(fVar3,fVar4);
  fVar6 = *(float *)(param_2 + 0x60) - *(float *)(lVar2 + 0x20);
  fVar8 = *(float *)(param_2 + 100) - *(float *)(lVar2 + 0x24);
  fVar7 = (float)*(undefined8 *)(lVar2 + 0x4c) * fVar6 +
          (float)*(undefined8 *)(lVar2 + 0x54) * fVar8;
  fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 0x4c) >> 0x20) * fVar6 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x54) >> 0x20) * fVar8;
  *(ulong *)(param_2 + 0x78) = CONCAT44(fVar6,fVar7);
  fVar8 = ((fVar7 + (float)*(undefined8 *)(lVar2 + 0x28)) - (float)*(undefined8 *)(lVar1 + 0x28)) -
          fVar4;
  fVar9 = ((fVar6 + (float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20)) -
          (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20)) - fVar3;
  fVar10 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar10 <= *(float *)(param_2 + 0x6c)) {
    if (*(float *)(param_2 + 0x68) <= fVar10) {
      fVar10 = 0.0;
      fVar8 = 0.0;
      fVar11 = 0.0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined4 *)(param_2 + 0x8c) = 0;
      goto LAB_0117445c;
    }
    fVar11 = *(float *)(param_2 + 0x68) - fVar10;
    fVar10 = 1.0 / (fVar10 + 1.1754944e-38);
    fVar8 = -(fVar8 * fVar10);
    fVar10 = -(fVar9 * fVar10);
  }
  else {
    fVar11 = fVar10 - *(float *)(param_2 + 0x6c);
    fVar10 = 1.0 / (fVar10 + 1.1754944e-38);
    fVar8 = fVar10 * fVar8;
    fVar10 = fVar10 * fVar9;
  }
  *(float *)(param_2 + 0x80) = fVar8;
  *(float *)(param_2 + 0x84) = fVar10;
LAB_0117445c:
  fVar4 = fVar10 * fVar4 - fVar8 * fVar3;
  fVar3 = fVar10 * fVar7 - fVar8 * fVar6;
  fVar6 = *(float *)(param_2 + 0x38);
  *(float *)(param_2 + 0x88) =
       1.0 / (*(float *)(lVar2 + 0x14) + *(float *)(lVar1 + 0x14) +
              fVar4 * *(float *)(lVar1 + 0x1c) * fVar4 + fVar3 * *(float *)(lVar2 + 0x1c) * fVar3);
  fVar3 = powf(*(float *)(param_2 + 0x34),param_1);
  param_1 = (fVar3 * fVar11 - fVar11) / param_1;
  fVar3 = -fVar6;
  if (param_1 <= fVar3) {
    param_1 = fVar3;
  }
  uVar5 = NEON_fminnm(param_1,fVar6);
  *(undefined4 *)(param_2 + 0x90) = uVar5;
  return;
}

