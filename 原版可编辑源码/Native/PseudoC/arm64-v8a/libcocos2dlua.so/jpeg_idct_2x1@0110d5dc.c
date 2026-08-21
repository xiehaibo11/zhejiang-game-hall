
void jpeg_idct_2x1(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110d5bc with catch @ 0110d5e4
                        */
  lVar3 = *(long *)(param_1 + 0x1b8) + -0x180;
  iVar1 = **(int **)(param_2 + 0x58) * (int)*param_3 + 0x1004;
  iVar2 = (*(int **)(param_2 + 0x58))[1] * (int)param_3[1];
  lVar4 = *param_4;
                    /* try { // try from 0110d61c to 0120d61f has its CatchHandler @ 0110d660 */
  *(undefined1 *)(lVar4 + (ulong)param_5) =
       *(undefined1 *)(lVar3 + (ulong)((uint)(iVar2 + iVar1) >> 3 & 0x3ff));
  ((undefined1 *)(lVar4 + (ulong)param_5))[1] =
       *(undefined1 *)(lVar3 + (ulong)((uint)(iVar1 - iVar2) >> 3 & 0x3ff));
  return;
}

