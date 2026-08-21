
void jpeg_idct_1x1(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)
        (*(long *)(param_1 + 0x1b8) +
         (ulong)(**(int **)(param_2 + 0x58) * (uint)*param_3 + 0x1004 >> 3 & 0x3ff) + -0x180);
  return;
}

