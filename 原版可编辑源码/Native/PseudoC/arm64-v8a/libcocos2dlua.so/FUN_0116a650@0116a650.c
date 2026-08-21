
void FUN_0116a650(float param_1,long param_2)

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
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x74);
  fVar7 = *(float *)(param_2 + 0x68);
  param_1 = *(float *)(param_2 + 0x30) * param_1;
  fVar5 = (float)*(undefined8 *)(param_2 + 0x6c);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x6c) >> 0x20);
  dVar12 = (double)CONCAT44(*(float *)(lVar1 + 0x44) * fVar7,*(float *)(lVar2 + 0x44) * fVar4) -
           (double)CONCAT44(*(float *)(lVar2 + 0x44) * fVar6,*(float *)(lVar1 + 0x44) * fVar5);
  fVar3 = *(float *)(param_2 + 0x88);
  fVar8 = *(float *)(param_2 + 0x8c);
  fVar9 = ((float)*(undefined8 *)(lVar1 + 0x30) - (float)*(undefined8 *)(lVar2 + 0x30)) +
          (float)*(undefined8 *)(param_2 + 0x90) + SUB84(dVar12,0);
  fVar10 = ((float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) -
           (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20)) +
           (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20) + (float)((ulong)dVar12 >> 0x20);
  fVar11 = fVar9 * (float)*(undefined8 *)(param_2 + 0x78) +
           fVar10 * (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20) + fVar3;
  fVar9 = (float)*(undefined8 *)(param_2 + 0x80) * fVar9 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20) * fVar10 + fVar8;
  fVar10 = fVar11 * fVar11 + fVar9 * fVar9;
  if (param_1 * param_1 < fVar10) {
    fVar10 = 1.0 / (SQRT(fVar10) + 1.1754944e-38);
    fVar11 = param_1 * fVar11 * fVar10;
    fVar9 = param_1 * fVar9 * fVar10;
  }
  *(float *)(param_2 + 0x88) = fVar11;
  *(float *)(param_2 + 0x8c) = fVar9;
  *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) + (fVar3 - fVar11) * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) + (fVar8 - fVar9) * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x44) =
       *(float *)(lVar1 + 0x44) +
       (fVar7 * (fVar8 - fVar9) - (fVar3 - fVar11) * fVar5) * *(float *)(lVar1 + 0x1c);
  *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) + (fVar11 - fVar3) * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) + (fVar9 - fVar8) * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x44) =
       *(float *)(lVar2 + 0x44) +
       ((fVar9 - fVar8) * fVar6 - (fVar11 - fVar3) * fVar4) * *(float *)(lVar2 + 0x1c);
  return;
}

