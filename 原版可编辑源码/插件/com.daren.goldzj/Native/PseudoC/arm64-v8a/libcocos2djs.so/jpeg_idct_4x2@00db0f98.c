
void jpeg_idct_4x2(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  puVar3 = *(undefined8 **)(param_2 + 0x58);
  iVar8 = (int)*puVar3 * (int)*param_3;
  iVar9 = (int)((ulong)*puVar3 >> 0x20) * (int)param_3[1];
  iVar10 = (int)puVar3[4] * (int)param_3[8];
  iVar12 = (int)((ulong)puVar3[4] >> 0x20) * (int)param_3[9];
  iVar5 = iVar12 + iVar9;
  lVar4 = *(long *)(param_1 + 0x1b8) + -0x180;
  iVar9 = iVar9 - iVar12;
  iVar11 = (int)puVar3[1] * (int)param_3[2];
  iVar13 = (int)((ulong)puVar3[1] >> 0x20) * (int)param_3[3];
  iVar14 = (int)puVar3[5] * (int)param_3[10];
  iVar15 = (int)((ulong)puVar3[5] >> 0x20) * (int)param_3[0xb];
  iVar7 = iVar14 + iVar11;
  iVar6 = iVar15 + iVar13;
  iVar12 = iVar10 + iVar8 + 0x1004;
  iVar2 = (iVar6 + iVar5) * 0x1151;
  iVar11 = iVar11 - iVar14;
  iVar13 = iVar13 - iVar15;
  iVar14 = (iVar12 + iVar7) * 0x2000;
  iVar5 = iVar2 + iVar5 * 0x187e;
  puVar1 = (undefined1 *)(*param_4 + (ulong)param_5);
  iVar12 = (iVar12 - iVar7) * 0x2000;
  *puVar1 = *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar5 + iVar14) >> 0x10) & 0x3ff));
  iVar2 = iVar2 + iVar6 * -0x3b21;
  puVar1[3] = *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar14 - iVar5) >> 0x10) & 0x3ff));
  puVar1[1] = *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar2 + iVar12) >> 0x10) & 0x3ff));
  puVar1[2] = *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar12 - iVar2) >> 0x10) & 0x3ff));
  iVar2 = (iVar13 + iVar9) * 0x1151;
  iVar5 = iVar2 + iVar9 * 0x187e;
  puVar1 = (undefined1 *)(param_4[1] + (ulong)param_5);
  iVar12 = (iVar8 - iVar10) + 0x1004;
  iVar14 = (iVar12 + iVar11) * 0x2000;
  *puVar1 = *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar5 + iVar14) >> 0x10) & 0x3ff));
  iVar2 = iVar2 + iVar13 * -0x3b21;
  iVar12 = (iVar12 - iVar11) * 0x2000;
  puVar1[3] = *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar14 - iVar5) >> 0x10) & 0x3ff));
  puVar1[1] = *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar2 + iVar12) >> 0x10) & 0x3ff));
  puVar1[2] = *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar12 - iVar2) >> 0x10) & 0x3ff));
  return;
}

