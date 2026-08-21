
void jpeg_idct_4x4(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  
  piVar12 = *(int **)(param_2 + 0x58);
  lVar17 = ((long)piVar12[0x18] * (long)param_3[0x18] + (long)piVar12[8] * (long)param_3[8]) *
           0x1151 + 0x400;
  iVar3 = (piVar12[0x10] * (int)param_3[0x10] + *piVar12 * (int)*param_3) * 4;
  iVar4 = (*piVar12 * (int)*param_3 - piVar12[0x10] * (int)param_3[0x10]) * 4;
  iVar18 = (int)((ulong)(lVar17 + (long)piVar12[8] * (long)param_3[8] * 0x187e) >> 0xb);
  iVar14 = (int)((ulong)(lVar17 + (long)piVar12[0x18] * (long)param_3[0x18] * -0x3b21) >> 0xb);
  lVar17 = ((long)piVar12[0x19] * (long)param_3[0x19] + (long)piVar12[9] * (long)param_3[9]) *
           0x1151 + 0x400;
  iVar5 = (piVar12[0x11] * (int)param_3[0x11] + piVar12[1] * (int)param_3[1]) * 4;
  iVar6 = (piVar12[1] * (int)param_3[1] - piVar12[0x11] * (int)param_3[0x11]) * 4;
  iVar19 = (int)((ulong)(lVar17 + (long)piVar12[9] * (long)param_3[9] * 0x187e) >> 0xb);
  iVar1 = iVar19 + iVar5;
  iVar5 = iVar5 - iVar19;
  iVar15 = (int)((ulong)(lVar17 + (long)piVar12[0x19] * (long)param_3[0x19] * -0x3b21) >> 0xb);
  iVar19 = iVar15 + iVar6;
  iVar6 = iVar6 - iVar15;
  lVar17 = ((long)piVar12[0x1a] * (long)param_3[0x1a] + (long)piVar12[10] * (long)param_3[10]) *
           0x1151 + 0x400;
  iVar23 = (piVar12[0x12] * (int)param_3[0x12] + piVar12[2] * (int)param_3[2]) * 4;
  iVar7 = (piVar12[2] * (int)param_3[2] - piVar12[0x12] * (int)param_3[0x12]) * 4;
  iVar15 = (int)(lVar17 + (long)piVar12[10] * (long)param_3[10] * 0x187e >> 0xb);
  iVar16 = iVar15 + iVar23;
  iVar23 = iVar23 - iVar15;
  iVar21 = (int)((ulong)(lVar17 + (long)piVar12[0x1a] * (long)param_3[0x1a] * -0x3b21) >> 0xb);
  iVar15 = iVar21 + iVar7;
  iVar7 = iVar7 - iVar21;
  lVar17 = *(long *)(param_1 + 0x1b8) + -0x180;
  uVar13 = (ulong)param_5;
  lVar22 = ((long)piVar12[0x1b] * (long)param_3[0x1b] + (long)piVar12[0xb] * (long)param_3[0xb]) *
           0x1151 + 0x400;
  iVar10 = (piVar12[0x13] * (int)param_3[0x13] + piVar12[3] * (int)param_3[3]) * 4;
  iVar20 = (piVar12[3] * (int)param_3[3] - piVar12[0x13] * (int)param_3[0x13]) * 4;
  iVar21 = (int)(lVar22 + (long)piVar12[0xb] * (long)param_3[0xb] * 0x187e >> 0xb);
  iVar24 = iVar21 + iVar10;
  iVar10 = iVar10 - iVar21;
  iVar21 = (int)(lVar22 + (long)piVar12[0x1b] * (long)param_3[0x1b] * -0x3b21 >> 0xb);
  iVar11 = iVar21 + iVar20;
  iVar20 = iVar20 - iVar21;
  iVar21 = iVar18 + iVar3 + 0x4010;
  iVar9 = (iVar24 + iVar1) * 0x1151;
  iVar8 = iVar9 + iVar1 * 0x187e;
  iVar9 = iVar9 + iVar24 * -0x3b21;
  iVar1 = (iVar21 + iVar16) * 0x2000;
  puVar2 = (undefined1 *)(*param_4 + uVar13);
  *puVar2 = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar8 + iVar1) >> 0x12) & 0x3ff));
  iVar21 = (iVar21 - iVar16) * 0x2000;
  puVar2[3] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar1 - iVar8) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar9 + iVar21) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar21 - iVar9) >> 0x12) & 0x3ff));
  iVar1 = iVar14 + iVar4 + 0x4010;
  iVar8 = (iVar11 + iVar19) * 0x1151;
  iVar21 = iVar8 + iVar19 * 0x187e;
  iVar19 = (iVar1 + iVar15) * 0x2000;
  puVar2 = (undefined1 *)(param_4[1] + uVar13);
  *puVar2 = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar21 + iVar19) >> 0x12) & 0x3ff));
  iVar8 = iVar8 + iVar11 * -0x3b21;
  iVar1 = (iVar1 - iVar15) * 0x2000;
  puVar2[3] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar19 - iVar21) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar8 + iVar1) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar1 - iVar8) >> 0x12) & 0x3ff));
  iVar1 = (iVar4 - iVar14) + 0x4010;
  iVar21 = (iVar20 + iVar6) * 0x1151;
  iVar15 = iVar21 + iVar6 * 0x187e;
  iVar19 = (iVar1 + iVar7) * 0x2000;
  puVar2 = (undefined1 *)(param_4[2] + uVar13);
  *puVar2 = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar15 + iVar19) >> 0x12) & 0x3ff));
  iVar21 = iVar21 + iVar20 * -0x3b21;
  iVar1 = (iVar1 - iVar7) * 0x2000;
  puVar2[3] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar19 - iVar15) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar21 + iVar1) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar1 - iVar21) >> 0x12) & 0x3ff));
  puVar2 = (undefined1 *)(param_4[3] + uVar13);
  iVar1 = (iVar3 - iVar18) + 0x4010;
  iVar21 = (iVar10 + iVar5) * 0x1151;
  iVar15 = iVar21 + iVar5 * 0x187e;
  iVar19 = (iVar1 + iVar23) * 0x2000;
  *puVar2 = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar15 + iVar19) >> 0x12) & 0x3ff));
  iVar21 = iVar21 + iVar10 * -0x3b21;
  iVar1 = (iVar1 - iVar23) * 0x2000;
  puVar2[3] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar19 - iVar15) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar21 + iVar1) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar1 - iVar21) >> 0x12) & 0x3ff));
  return;
}

