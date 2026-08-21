
void jpeg_idct_2x2(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  
  piVar6 = *(int **)(param_2 + 0x58);
  iVar4 = *piVar6 * (int)*param_3 + 0x1004;
  iVar1 = piVar6[8] * (int)param_3[8] + iVar4;
  iVar4 = iVar4 - piVar6[8] * (int)param_3[8];
  iVar2 = piVar6[9] * (int)param_3[9] + piVar6[1] * (int)param_3[1];
  lVar7 = *(long *)(param_1 + 0x1b8) + -0x180;
  puVar3 = (undefined1 *)(*param_4 + (ulong)param_5);
  iVar5 = piVar6[1] * (int)param_3[1] - piVar6[9] * (int)param_3[9];
  *puVar3 = *(undefined1 *)(lVar7 + (ulong)((uint)(iVar2 + iVar1) >> 3 & 0x3ff));
  puVar3[1] = *(undefined1 *)(lVar7 + (ulong)((uint)(iVar1 - iVar2) >> 3 & 0x3ff));
  puVar3 = (undefined1 *)(param_4[1] + (ulong)param_5);
  *puVar3 = *(undefined1 *)(lVar7 + (ulong)((uint)(iVar5 + iVar4) >> 3 & 0x3ff));
  puVar3[1] = *(undefined1 *)(lVar7 + (ulong)((uint)(iVar4 - iVar5) >> 3 & 0x3ff));
  return;
}

