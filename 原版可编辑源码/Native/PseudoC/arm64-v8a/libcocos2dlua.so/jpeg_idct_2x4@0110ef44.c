
void jpeg_idct_2x4(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
  piVar8 = *(int **)(param_2 + 0x58);
  iVar9 = (piVar8[0x18] * (int)param_3[0x18] + piVar8[8] * (int)param_3[8]) * 0x1151;
  iVar14 = (piVar8[0x10] * (int)param_3[0x10] + *piVar8 * (int)*param_3) * 0x2000;
  iVar10 = iVar9 + piVar8[8] * (int)param_3[8] * 0x187e;
  iVar5 = (*piVar8 * (int)*param_3 - piVar8[0x10] * (int)param_3[0x10]) * 0x2000;
  iVar9 = iVar9 + piVar8[0x18] * (int)param_3[0x18] * -0x3b21;
  lVar4 = *(long *)(param_1 + 0x1b8) + -0x180;
  uVar2 = (ulong)param_5;
  iVar6 = (piVar8[0x19] * (int)param_3[0x19] + piVar8[9] * (int)param_3[9]) * 0x1151;
  iVar3 = (piVar8[0x11] * (int)param_3[0x11] + piVar8[1] * (int)param_3[1]) * 0x2000;
  iVar7 = (piVar8[1] * (int)param_3[1] - piVar8[0x11] * (int)param_3[0x11]) * 0x2000;
  iVar11 = iVar6 + piVar8[9] * (int)param_3[9] * 0x187e;
  iVar6 = iVar6 + piVar8[0x19] * (int)param_3[0x19] * -0x3b21;
  iVar1 = iVar10 + iVar14 + 0x2008000;
  iVar12 = iVar11 + iVar3;
  iVar3 = iVar3 - iVar11;
  iVar11 = iVar6 + iVar7;
  iVar7 = iVar7 - iVar6;
  lVar13 = *param_4;
  *(undefined1 *)(lVar13 + uVar2) =
       *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar1 + iVar12) >> 0x10) & 0x3ff));
  iVar6 = iVar9 + iVar5 + 0x2008000;
  ((undefined1 *)(lVar13 + uVar2))[1] =
       *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar1 - iVar12) >> 0x10) & 0x3ff));
  lVar13 = param_4[1];
  *(undefined1 *)(lVar13 + uVar2) =
       *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar6 + iVar11) >> 0x10) & 0x3ff));
  iVar1 = (iVar5 - iVar9) + 0x2008000;
  ((undefined1 *)(lVar13 + uVar2))[1] =
       *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar6 - iVar11) >> 0x10) & 0x3ff));
  lVar13 = param_4[2];
  *(undefined1 *)(lVar13 + uVar2) =
       *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar1 + iVar7) >> 0x10) & 0x3ff));
  ((undefined1 *)(lVar13 + uVar2))[1] =
       *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar1 - iVar7) >> 0x10) & 0x3ff));
  lVar13 = param_4[3];
  iVar1 = (iVar14 - iVar10) + 0x2008000;
  *(undefined1 *)(lVar13 + uVar2) =
       *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar1 + iVar3) >> 0x10) & 0x3ff));
  ((undefined1 *)(lVar13 + uVar2))[1] =
       *(undefined1 *)(lVar4 + ((ulong)((uint)(iVar1 - iVar3) >> 0x10) & 0x3ff));
  return;
}

