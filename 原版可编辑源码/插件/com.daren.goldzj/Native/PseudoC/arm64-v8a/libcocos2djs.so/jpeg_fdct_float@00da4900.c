
void jpeg_fdct_float(float *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar6 = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar6) + (ulong)param_3);
    iVar5 = (uint)*pbVar1 - (uint)pbVar1[7];
    iVar3 = (uint)pbVar1[1] - (uint)pbVar1[6];
    fVar8 = (float)((uint)pbVar1[6] + (uint)pbVar1[1]);
    iVar4 = (uint)pbVar1[2] - (uint)pbVar1[5];
    fVar7 = (float)((uint)pbVar1[7] + (uint)*pbVar1);
    fVar9 = (float)((uint)pbVar1[5] + (uint)pbVar1[2]);
    fVar11 = (float)((uint)pbVar1[4] + (uint)pbVar1[3]);
    fVar13 = fVar7 + fVar11;
    fVar7 = fVar7 - fVar11;
    fVar12 = fVar8 + fVar9;
    fVar11 = (float)iVar5;
    fVar15 = (float)(iVar3 + iVar5);
    fVar14 = (float)(int)((iVar4 + (uint)pbVar1[3]) - (uint)pbVar1[4]);
    fVar10 = (float)(iVar4 + iVar3) * 0.70710677;
    fVar8 = ((fVar8 - fVar9) + fVar7) * 0.70710677;
    fVar16 = fVar10 + fVar11;
    fVar11 = fVar11 - fVar10;
    fVar9 = (fVar14 - fVar15) * 0.38268343;
    fVar10 = fVar14 * 0.5411961 + fVar9;
    fVar9 = fVar15 * 1.306563 + fVar9;
    pfVar2 = param_1 + lVar6;
    lVar6 = lVar6 + 8;
    pfVar2[4] = fVar13 - fVar12;
    pfVar2[5] = fVar11 + fVar10;
    pfVar2[2] = fVar7 + fVar8;
    pfVar2[3] = fVar11 - fVar10;
    *pfVar2 = fVar12 + fVar13 + -1024.0;
    pfVar2[1] = fVar16 + fVar9;
    pfVar2[6] = fVar7 - fVar8;
    pfVar2[7] = fVar16 - fVar9;
  } while (lVar6 != 0x40);
  iVar5 = 8;
  do {
    fVar14 = *param_1 + param_1[0x38];
    fVar7 = *param_1 - param_1[0x38];
    fVar8 = param_1[8] + param_1[0x30];
    fVar9 = param_1[8] - param_1[0x30];
    fVar10 = param_1[0x10] + param_1[0x28];
    fVar13 = param_1[0x10] - param_1[0x28];
    fVar11 = param_1[0x18] + param_1[0x20];
    fVar15 = fVar14 + fVar11;
    fVar14 = fVar14 - fVar11;
    fVar16 = fVar8 + fVar10;
    fVar12 = fVar13 + (param_1[0x18] - param_1[0x20]);
    fVar11 = fVar7 + fVar9;
    fVar13 = (fVar9 + fVar13) * 0.70710677;
    *param_1 = fVar16 + fVar15;
    fVar8 = ((fVar8 - fVar10) + fVar14) * 0.70710677;
    fVar9 = (fVar12 - fVar11) * 0.38268343;
    param_1[0x20] = fVar15 - fVar16;
    fVar15 = fVar7 + fVar13;
    fVar7 = fVar7 - fVar13;
    fVar10 = fVar12 * 0.5411961 + fVar9;
    fVar9 = fVar11 * 1.306563 + fVar9;
    iVar5 = iVar5 + -1;
    param_1[0x30] = fVar14 - fVar8;
    param_1[0x10] = fVar14 + fVar8;
    param_1[0x28] = fVar7 + fVar10;
    param_1[0x18] = fVar7 - fVar10;
    param_1[8] = fVar15 + fVar9;
    param_1[0x38] = fVar15 - fVar9;
    param_1 = param_1 + 1;
  } while (0 < iVar5);
  return;
}

