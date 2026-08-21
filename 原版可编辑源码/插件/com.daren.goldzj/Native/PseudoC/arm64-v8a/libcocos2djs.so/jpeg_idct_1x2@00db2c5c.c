
void jpeg_idct_1x2(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1b8) + -0x180;
  iVar1 = **(int **)(param_2 + 0x58) * (int)*param_3 + 0x1004;
  iVar2 = (*(int **)(param_2 + 0x58))[8] * (int)param_3[8];
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)(lVar3 + (ulong)((uint)(iVar2 + iVar1) >> 3 & 0x3ff));
  *(undefined1 *)(param_4[1] + (ulong)param_5) =
       *(undefined1 *)(lVar3 + (ulong)((uint)(iVar1 - iVar2) >> 3 & 0x3ff));
  return;
}

