
void FUN_01165bb0(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x90);
  fVar6 = *(float *)(param_2 + 0x84);
  fVar4 = (float)*(undefined8 *)(param_2 + 0x88);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
  dVar12 = (double)CONCAT44(*(float *)(lVar1 + 0x44) * fVar6,*(float *)(lVar2 + 0x44) * fVar3) -
           (double)CONCAT44(*(float *)(lVar2 + 0x44) * fVar5,*(float *)(lVar1 + 0x44) * fVar4);
  fVar7 = *(float *)(param_2 + 0xa4);
  fVar8 = *(float *)(param_2 + 0xa8);
  fVar9 = ((float)*(undefined8 *)(lVar1 + 0x30) - (float)*(undefined8 *)(lVar2 + 0x30)) +
          (float)*(undefined8 *)(param_2 + 0xac) + SUB84(dVar12,0);
  fVar11 = ((float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) -
           (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20)) +
           (float)((ulong)*(undefined8 *)(param_2 + 0xac) >> 0x20) + (float)((ulong)dVar12 >> 0x20);
  fVar13 = *(float *)(param_2 + 0x78);
  fVar14 = *(float *)(param_2 + 0x7c);
  fVar10 = (float)*(undefined8 *)(param_2 + 0x9c) * fVar9 +
           (float)((ulong)*(undefined8 *)(param_2 + 0x9c) >> 0x20) * fVar11 + fVar8;
  fVar9 = fVar9 * (float)*(undefined8 *)(param_2 + 0x94) +
          fVar11 * (float)((ulong)*(undefined8 *)(param_2 + 0x94) >> 0x20) + fVar7;
  if ((fVar14 * fVar9 - fVar13 * fVar10) * *(float *)(param_2 + 0x80) <= 0.0) {
    fVar10 = (fVar13 * fVar9 + fVar10 * fVar14) / (fVar13 * fVar13 + fVar14 * fVar14);
    fVar9 = fVar10 * fVar13;
    fVar10 = fVar10 * fVar14;
  }
  param_1 = *(float *)(param_2 + 0x30) * param_1;
  fVar11 = fVar10 * fVar10 + fVar9 * fVar9;
  if (param_1 * param_1 < fVar11) {
    fVar11 = 1.0 / (SQRT(fVar11) + 1.1754944e-38);
    fVar9 = param_1 * fVar9 * fVar11;
    fVar10 = param_1 * fVar10 * fVar11;
  }
  *(float *)(param_2 + 0xa4) = fVar9;
  *(float *)(param_2 + 0xa8) = fVar10;
  *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) + (fVar7 - fVar9) * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) + (fVar8 - fVar10) * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x44) =
       *(float *)(lVar1 + 0x44) +
       (fVar6 * (fVar8 - fVar10) - (fVar7 - fVar9) * fVar4) * *(float *)(lVar1 + 0x1c);
  *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) + (fVar9 - fVar7) * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) + (fVar10 - fVar8) * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x44) =
       *(float *)(lVar2 + 0x44) +
       ((fVar10 - fVar8) * fVar5 - (fVar9 - fVar7) * fVar3) * *(float *)(lVar2 + 0x1c);
  return;
}

