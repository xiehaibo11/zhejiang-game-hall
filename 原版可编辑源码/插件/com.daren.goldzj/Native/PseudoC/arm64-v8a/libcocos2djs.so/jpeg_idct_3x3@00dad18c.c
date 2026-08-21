
void jpeg_idct_3x3(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  
  piVar11 = *(int **)(param_2 + 0x58);
  sVar4 = param_3[0x10];
  sVar5 = param_3[8];
  iVar6 = piVar11[0x10];
  iVar7 = piVar11[8];
  uVar3 = (long)(*piVar11 * (int)*param_3) << 0xd | 0x400;
  lVar15 = uVar3 + (long)iVar6 * (long)sVar4 * 0x16a1;
  uVar9 = (long)(piVar11[1] * (int)param_3[1]) << 0xd | 0x400;
  lVar16 = uVar9 + (long)piVar11[0x11] * (long)param_3[0x11] * 0x16a1;
  iVar18 = (int)((ulong)((long)piVar11[9] * (long)param_3[9] * 0x2731 + lVar16) >> 0xb);
  iVar13 = (int)((ulong)(lVar16 + (long)piVar11[9] * (long)param_3[9] * -0x2731) >> 0xb);
  iVar17 = (int)(uVar9 + (long)piVar11[0x11] * (long)param_3[0x11] * -0x2d42 >> 0xb);
  uVar9 = (long)(piVar11[2] * (int)param_3[2]) << 0xd | 0x400;
  lVar16 = uVar9 + (long)piVar11[0x12] * (long)param_3[0x12] * 0x16a1;
  iVar1 = (int)((ulong)((long)iVar7 * (long)sVar5 * 0x2731 + lVar15) >> 0xb) * 0x2000 + 0x8020000;
  iVar14 = (int)((ulong)((long)piVar11[10] * (long)param_3[10] * 0x2731 + lVar16) >> 0xb);
  iVar8 = iVar1 + iVar14 * 0x16a1;
  iVar10 = (int)((ulong)(lVar16 + (long)piVar11[10] * (long)param_3[10] * -0x2731) >> 0xb);
  iVar12 = (int)(uVar9 + (long)piVar11[0x12] * (long)param_3[0x12] * -0x2d42 >> 0xb);
  lVar16 = *(long *)(param_1 + 0x1b8) + -0x180;
  uVar9 = (ulong)param_5;
  puVar2 = (undefined1 *)(*param_4 + uVar9);
  *puVar2 = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar8 + iVar18 * 0x2731) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar8 + iVar18 * -0x2731) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar1 + iVar14 * -0x2d42) >> 0x12) & 0x3ff));
  iVar1 = (int)(uVar3 + (long)iVar6 * (long)sVar4 * -0x2d42 >> 0xb) * 0x2000 + 0x8020000;
  iVar6 = iVar1 + iVar12 * 0x16a1;
  puVar2 = (undefined1 *)(param_4[1] + uVar9);
  *puVar2 = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar6 + iVar17 * 0x2731) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar6 + iVar17 * -0x2731) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar1 + iVar12 * -0x2d42) >> 0x12) & 0x3ff));
  iVar1 = (int)((ulong)(lVar15 + (long)iVar7 * (long)sVar5 * -0x2731) >> 0xb) * 0x2000 + 0x8020000;
  iVar6 = iVar1 + iVar10 * 0x16a1;
  puVar2 = (undefined1 *)(param_4[2] + uVar9);
  *puVar2 = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar6 + iVar13 * 0x2731) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar6 + iVar13 * -0x2731) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar1 + iVar10 * -0x2d42) >> 0x12) & 0x3ff));
  return;
}

