
void jpeg_fdct_ifast(int *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  
  lVar15 = 0;
  do {
    plVar1 = (long *)(param_2 + lVar15);
    piVar6 = param_1 + lVar15;
    lVar15 = lVar15 + 8;
    pbVar7 = (byte *)(*plVar1 + (param_3 & 0xffffffff));
    iVar14 = (uint)pbVar7[7] + (uint)*pbVar7;
    iVar8 = (uint)*pbVar7 - (uint)pbVar7[7];
    iVar2 = (uint)pbVar7[6] + (uint)pbVar7[1];
    iVar9 = (uint)pbVar7[1] - (uint)pbVar7[6];
    iVar3 = (uint)pbVar7[5] + (uint)pbVar7[2];
    iVar10 = (uint)pbVar7[2] - (uint)pbVar7[5];
    iVar13 = (uint)pbVar7[4] + (uint)pbVar7[3];
    iVar4 = iVar13 + iVar14;
    iVar14 = iVar14 - iVar13;
    uVar5 = iVar3 + iVar2;
    iVar13 = ((uint)pbVar7[3] - (uint)pbVar7[4]) + iVar10;
    iVar16 = iVar9 + iVar8;
    iVar9 = (iVar10 + iVar9) * 0xb5 >> 8;
    iVar10 = ((iVar2 - iVar3) + iVar14) * 0xb5 >> 8;
    iVar2 = iVar9 + iVar8;
    iVar8 = iVar8 - iVar9;
    iVar9 = (iVar13 - iVar16) * 0x62 >> 8;
    iVar3 = iVar9 + (iVar13 * 0x8b >> 8);
    iVar9 = iVar9 + (iVar16 * 0x14e >> 8);
    piVar6[4] = iVar4 - uVar5;
    piVar6[5] = iVar3 + iVar8;
    piVar6[2] = iVar10 + iVar14;
    piVar6[3] = iVar8 - iVar3;
    *piVar6 = (uVar5 | 0xfffffc00) + iVar4;
    piVar6[1] = iVar9 + iVar2;
    piVar6[6] = iVar14 - iVar10;
    piVar6[7] = iVar2 - iVar9;
  } while (lVar15 != 0x40);
  iVar14 = 8;
  do {
    iVar2 = param_1[0x38] + *param_1;
    iVar11 = *param_1 - param_1[0x38];
    iVar3 = param_1[0x30] + param_1[8];
    iVar8 = param_1[8] - param_1[0x30];
    iVar13 = param_1[0x28] + param_1[0x10];
    iVar12 = param_1[0x10] - param_1[0x28];
    iVar4 = param_1[0x20] + param_1[0x18];
    iVar16 = iVar4 + iVar2;
    iVar2 = iVar2 - iVar4;
    iVar4 = iVar13 + iVar3;
    iVar9 = (param_1[0x18] - param_1[0x20]) + iVar12;
    iVar10 = iVar8 + iVar11;
    *param_1 = iVar16 + iVar4;
    param_1[0x20] = iVar16 - iVar4;
    iVar16 = (int)((ulong)((long)(iVar12 + iVar8) * 0xb5) >> 8);
    iVar4 = iVar11 + iVar16;
    iVar11 = iVar11 - iVar16;
    iVar16 = (int)((ulong)((long)((iVar3 - iVar13) + iVar2) * 0xb5) >> 8);
    iVar13 = (int)((ulong)((long)(iVar9 - iVar10) * 0x62) >> 8);
    iVar3 = iVar13 + (int)((ulong)((long)iVar9 * 0x8b) >> 8);
    iVar13 = iVar13 + (int)((ulong)((long)iVar10 * 0x14e) >> 8);
    iVar14 = iVar14 + -1;
    param_1[0x30] = iVar2 - iVar16;
    param_1[0x10] = iVar2 + iVar16;
    param_1[0x28] = iVar3 + iVar11;
    param_1[0x18] = iVar11 - iVar3;
    param_1[8] = iVar13 + iVar4;
    param_1[0x38] = iVar4 - iVar13;
    param_1 = param_1 + 1;
  } while (0 < iVar14);
  return;
}

