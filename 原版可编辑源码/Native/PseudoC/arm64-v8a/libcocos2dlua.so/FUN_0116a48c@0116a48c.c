
void FUN_0116a48c(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x58) - *(float *)(lVar1 + 0x20);
  fVar4 = *(float *)(param_2 + 0x5c) - *(float *)(lVar1 + 0x24);
  fVar9 = (float)*(undefined8 *)(lVar1 + 0x4c) * fVar3 +
          (float)*(undefined8 *)(lVar1 + 0x54) * fVar4;
  fVar10 = (float)((ulong)*(undefined8 *)(lVar1 + 0x4c) >> 0x20) * fVar3 +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x54) >> 0x20) * fVar4;
  *(ulong *)(param_2 + 0x68) = CONCAT44(fVar10,fVar9);
  fVar3 = *(float *)(param_2 + 0x60) - *(float *)(lVar2 + 0x20);
  fVar4 = *(float *)(param_2 + 100) - *(float *)(lVar2 + 0x24);
  fVar6 = (float)*(undefined8 *)(lVar2 + 0x4c) * fVar3 +
          (float)*(undefined8 *)(lVar2 + 0x54) * fVar4;
  fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x4c) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x54) >> 0x20) * fVar4;
  *(ulong *)(param_2 + 0x70) = CONCAT44(fVar7,fVar6);
  fVar13 = *(float *)(lVar1 + 0x1c);
  fVar4 = *(float *)(lVar2 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar12 = *(float *)(lVar2 + 0x1c);
  fVar3 = -(fVar7 * fVar6 * fVar12) - fVar13 * fVar10 * fVar9;
  fVar11 = fVar4 + fVar13 * fVar10 * fVar10 + fVar12 * fVar7 * fVar7;
  fVar4 = fVar4 + fVar13 * fVar9 * fVar9 + fVar12 * fVar6 * fVar6;
  fVar12 = 1.0 / (fVar11 * fVar4 - fVar3 * fVar3);
  *(float *)(param_2 + 0x78) = fVar12 * fVar4;
  *(float *)(param_2 + 0x7c) = -(fVar3 * fVar12);
  *(float *)(param_2 + 0x80) = -(fVar3 * fVar12);
  *(float *)(param_2 + 0x84) = fVar12 * fVar11;
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar1 + 0x28);
  fVar3 = powf(*(float *)(param_2 + 0x34),param_1);
  fVar4 = *(float *)(param_2 + 0x38);
  param_1 = (fVar3 - 1.0) / param_1;
  fVar3 = (((fVar6 + (float)uVar5) - (float)uVar8) - fVar9) * param_1;
  param_1 = (((fVar7 + (float)((ulong)uVar5 >> 0x20)) - (float)((ulong)uVar8 >> 0x20)) - fVar10) *
            param_1;
  fVar6 = fVar3 * fVar3 + param_1 * param_1;
  if (fVar4 * fVar4 < fVar6) {
    fVar6 = 1.0 / (SQRT(fVar6) + 1.1754944e-38);
    fVar3 = fVar3 * fVar4 * fVar6;
    param_1 = param_1 * fVar4 * fVar6;
  }
  *(ulong *)(param_2 + 0x90) = CONCAT44(param_1,fVar3);
  return;
}

