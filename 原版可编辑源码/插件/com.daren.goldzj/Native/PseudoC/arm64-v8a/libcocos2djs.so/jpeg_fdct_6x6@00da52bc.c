
void jpeg_fdct_6x6(void *param_1,long param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  
  memset(param_1,0,0x100);
  lVar9 = 0;
  do {
    plVar1 = (long *)(param_2 + lVar9);
    piVar2 = (int *)((long)param_1 + lVar9 * 4);
    lVar9 = lVar9 + 8;
    pbVar3 = (byte *)(*plVar1 + (ulong)param_3);
    lVar4 = (ulong)pbVar3[5] + (ulong)*pbVar3;
    lVar14 = (ulong)*pbVar3 - (ulong)pbVar3[5];
    iVar5 = (uint)pbVar3[1] - (uint)pbVar3[4];
    lVar7 = (ulong)pbVar3[3] + (ulong)pbVar3[2];
    lVar11 = (ulong)pbVar3[2] - (ulong)pbVar3[3];
    lVar8 = (ulong)pbVar3[4] + (ulong)pbVar3[1];
    lVar12 = lVar7 + lVar4;
    iVar13 = (int)lVar14;
    iVar10 = (int)lVar11;
    iVar6 = (int)((lVar11 + lVar14) * 0xbb6 + 0x400U >> 0xb);
    piVar2[2] = (int)((lVar4 - lVar7) * 0x2731 + 0x400U >> 0xb);
    piVar2[3] = ((iVar13 - iVar5) - iVar10) * 4;
    *piVar2 = ((int)lVar12 + (int)lVar8) * 4 + -0xc00;
    piVar2[1] = iVar6 + (iVar5 + iVar13) * 4;
    piVar2[4] = (int)((lVar12 + lVar8 * -2) * 0x16a1 + 0x400U >> 0xb);
    piVar2[5] = iVar6 + (iVar10 - iVar5) * 4;
  } while (lVar9 != 0x30);
  lVar9 = 0;
  do {
    piVar2 = (int *)((long)param_1 + lVar9);
    iVar5 = piVar2[0x20] + piVar2[8];
    lVar15 = (long)(piVar2[0x28] + *piVar2);
    lVar7 = (long)(piVar2[0x18] + piVar2[0x10]);
    lVar12 = (long)(*piVar2 - piVar2[0x28]);
    lVar11 = (long)(piVar2[8] - piVar2[0x20]);
    lVar14 = (long)(piVar2[0x10] - piVar2[0x18]);
    lVar4 = lVar7 + lVar15;
    lVar8 = (lVar14 + lVar12) * 0x14d3;
    lVar9 = lVar9 + 4;
    piVar2[0x10] = (int)((lVar15 - lVar7) * 0x45ad + 0x4000U >> 0xf);
    *piVar2 = (int)((lVar4 + iVar5) * 0x38e4 + 0x4000U >> 0xf);
    piVar2[0x18] = (int)(((lVar12 - lVar11) - lVar14) * 0x38e4 + 0x4000U >> 0xf);
    piVar2[0x20] = (int)((lVar4 + (long)iVar5 * -2) * 0x283a + 0x4000U >> 0xf);
    piVar2[8] = (int)(lVar8 + (lVar11 + lVar12) * 0x38e4 + 0x4000U >> 0xf);
    piVar2[0x28] = (int)(lVar8 + (lVar14 - lVar11) * 0x38e4 + 0x4000U >> 0xf);
  } while ((int)lVar9 != 0x18);
  return;
}

