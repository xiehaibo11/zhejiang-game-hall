
void FUN_01165940(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar13 = *(float *)(lVar1 + 0x4c);
  fVar10 = *(float *)(lVar1 + 0x50);
  fVar11 = *(float *)(lVar1 + 0x54);
  fVar12 = *(float *)(lVar1 + 0x58);
  fVar15 = *(float *)(lVar1 + 0x5c);
  fVar14 = *(float *)(lVar1 + 0x60);
  fVar9 = *(float *)(param_2 + 0x58) * fVar13 + fVar11 * *(float *)(param_2 + 0x5c);
  fVar7 = *(float *)(param_2 + 0x58) * fVar10 + fVar12 * *(float *)(param_2 + 0x5c);
  *(float *)(param_2 + 0x78) = fVar9;
  *(float *)(param_2 + 0x7c) = fVar7;
  fVar16 = *(float *)(param_2 + 0x74) - *(float *)(lVar2 + 0x24);
  fVar3 = *(float *)(param_2 + 0x70) - *(float *)(lVar2 + 0x20);
  fVar4 = (float)*(undefined8 *)(lVar2 + 0x4c) * fVar3 +
          (float)*(undefined8 *)(lVar2 + 0x54) * fVar16;
  fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 0x4c) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x54) >> 0x20) * fVar16;
  *(ulong *)(param_2 + 0x8c) = CONCAT44(fVar5,fVar4);
  fVar3 = fVar15 + fVar13 * *(float *)(param_2 + 0x60) + fVar11 * *(float *)(param_2 + 100);
  fVar16 = fVar14 + fVar10 * *(float *)(param_2 + 0x60) + fVar12 * *(float *)(param_2 + 100);
  fVar17 = (fVar4 + *(float *)(lVar2 + 0x28)) * fVar7 - (*(float *)(lVar2 + 0x2c) + fVar5) * fVar9;
  if (fVar17 <= fVar7 * fVar3 - fVar9 * fVar16) {
    *(undefined4 *)(param_2 + 0x80) = 0x3f800000;
  }
  else {
    fVar11 = fVar15 + fVar13 * *(float *)(param_2 + 0x68) + fVar11 * *(float *)(param_2 + 0x6c);
    fVar10 = fVar14 + fVar10 * *(float *)(param_2 + 0x68) + fVar12 * *(float *)(param_2 + 0x6c);
    if (fVar7 * fVar11 - fVar9 * fVar10 <= fVar17) {
      *(undefined4 *)(param_2 + 0x80) = 0xbf800000;
      fVar3 = fVar11;
      fVar16 = fVar10;
    }
    else {
      fVar16 = fVar7 * fVar16 + fVar3 * fVar9;
      *(undefined4 *)(param_2 + 0x80) = 0;
      fVar3 = fVar16 * fVar9 + fVar7 * fVar17;
      fVar16 = fVar16 * fVar7 - fVar17 * fVar9;
    }
  }
  fVar3 = fVar3 - (float)*(undefined8 *)(lVar1 + 0x28);
  fVar16 = fVar16 - (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20);
  *(ulong *)(param_2 + 0x84) = CONCAT44(fVar16,fVar3);
  fVar11 = *(float *)(lVar1 + 0x1c);
  fVar12 = *(float *)(lVar2 + 0x1c);
  fVar10 = *(float *)(lVar2 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar7 = -(fVar4 * fVar5 * fVar12) - fVar11 * fVar16 * fVar3;
  fVar9 = fVar10 + fVar11 * fVar16 * fVar16 + fVar12 * fVar5 * fVar5;
  fVar10 = fVar10 + fVar11 * fVar3 * fVar3 + fVar12 * fVar4 * fVar4;
  fVar11 = 1.0 / (fVar9 * fVar10 - fVar7 * fVar7);
  *(float *)(param_2 + 0x94) = fVar11 * fVar10;
  *(float *)(param_2 + 0x98) = -(fVar7 * fVar11);
  *(float *)(param_2 + 0x9c) = -(fVar7 * fVar11);
  *(float *)(param_2 + 0xa0) = fVar11 * fVar9;
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar1 + 0x28);
  fVar7 = powf(*(float *)(param_2 + 0x34),param_1);
  fVar9 = *(float *)(param_2 + 0x38);
  param_1 = (fVar7 - 1.0) / param_1;
  fVar3 = (((fVar4 + (float)uVar6) - (float)uVar8) - fVar3) * param_1;
  param_1 = (((fVar5 + (float)((ulong)uVar6 >> 0x20)) - (float)((ulong)uVar8 >> 0x20)) - fVar16) *
            param_1;
  uVar6 = CONCAT44(param_1,fVar3);
  fVar16 = param_1 * param_1 + fVar3 * fVar3;
  if (fVar9 * fVar9 < fVar16) {
    fVar16 = 1.0 / (SQRT(fVar16) + 1.1754944e-38);
    uVar6 = CONCAT44(param_1 * fVar9 * fVar16,fVar3 * fVar9 * fVar16);
  }
  *(undefined8 *)(param_2 + 0xac) = uVar6;
  return;
}

