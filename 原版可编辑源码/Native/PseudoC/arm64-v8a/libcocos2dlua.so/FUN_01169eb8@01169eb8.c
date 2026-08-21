
void FUN_01169eb8(float param_1,long param_2)

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
  fVar6 = (float)((ulong)*(undefined8 *)(lVar1 + 0x4c) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(lVar1 + 0x54) >> 0x20) * fVar6;
  *(ulong *)(param_2 + 0x6c) = CONCAT44(fVar6,fVar4);
  fVar3 = *(float *)(param_2 + 0x60) - *(float *)(lVar2 + 0x20);
  fVar8 = *(float *)(param_2 + 100) - *(float *)(lVar2 + 0x24);
  fVar7 = (float)*(undefined8 *)(lVar2 + 0x4c) * fVar3 +
          (float)*(undefined8 *)(lVar2 + 0x54) * fVar8;
  fVar8 = (float)((ulong)*(undefined8 *)(lVar2 + 0x4c) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x54) >> 0x20) * fVar8;
  *(ulong *)(param_2 + 0x74) = CONCAT44(fVar8,fVar7);
  fVar9 = ((fVar7 + (float)*(undefined8 *)(lVar2 + 0x28)) - (float)*(undefined8 *)(lVar1 + 0x28)) -
          fVar4;
  fVar10 = ((fVar8 + (float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20)) -
           (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20)) - fVar6;
  fVar11 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  fVar3 = 1.0 / fVar11;
  if (fVar11 == 0.0) {
    fVar3 = fVar11;
  }
  fVar9 = fVar3 * fVar9;
  fVar3 = fVar3 * fVar10;
  *(float *)(param_2 + 0x7c) = fVar9;
  *(float *)(param_2 + 0x80) = fVar3;
  fVar4 = fVar3 * fVar4 - fVar9 * fVar6;
  fVar3 = fVar3 * fVar7 - fVar9 * fVar8;
  fVar6 = *(float *)(param_2 + 0x38);
  *(float *)(param_2 + 0x84) =
       1.0 / (*(float *)(lVar2 + 0x14) + *(float *)(lVar1 + 0x14) +
              fVar4 * *(float *)(lVar1 + 0x1c) * fVar4 + fVar3 * *(float *)(lVar2 + 0x1c) * fVar3);
  fVar3 = powf(*(float *)(param_2 + 0x34),param_1);
  param_1 = ((*(float *)(param_2 + 0x68) - fVar11) + (fVar11 - *(float *)(param_2 + 0x68)) * fVar3)
            / param_1;
  fVar3 = -fVar6;
  if (param_1 <= fVar3) {
    param_1 = fVar3;
  }
  uVar5 = NEON_fminnm(param_1,fVar6);
  *(undefined4 *)(param_2 + 0x8c) = uVar5;
  return;
}

