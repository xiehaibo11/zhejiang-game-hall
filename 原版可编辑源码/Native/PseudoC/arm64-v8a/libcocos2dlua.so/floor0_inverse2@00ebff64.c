
undefined8 floor0_inverse2(long *param_1,int *param_2,long param_3,void *param_4)

{
  ulong uVar1;
  
  if (param_3 != 0) {
                    /* catch() { ... } // from try @ 00ebffa8 with catch @ 00ebff7c */
    uVar1 = *(ulong *)(*(long *)(*param_1 + 0x30) + param_1[0xb] * 8);
    if ((long)uVar1 < 0) {
      uVar1 = uVar1 + 1;
    }
                    /* try { // try from 00ebffa0 to 00fbffa7 has its CatchHandler @ 00ebffec */
                    /* try { // try from 00ebffa8 to 00fc0007 has its CatchHandler @ 00ebff7c */
    vorbis_lsp_to_curve(param_4,uVar1 >> 1,param_2[4],param_3,(long)*param_2,
                        *(undefined4 *)(param_3 + (long)*param_2 * 4),param_2[7],
                        *(ulong *)(param_2 + 2) >> 1);
    return 1;
  }
  memset(param_4,0,
         (*(ulong *)(*(long *)(*param_1 + 0x30) + param_1[0xb] * 8) & 0x3fffffffffffffff) << 1);
  return 0;
}

