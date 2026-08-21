
undefined8 floor0_inverse2(long *param_1,int *param_2,long param_3,void *param_4)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(ulong *)(*(long *)(*param_1 + 0x30) + param_1[0xb] * 8);
    if ((long)uVar1 < 0) {
      uVar1 = uVar1 + 1;
    }
    vorbis_lsp_to_curve(param_4,uVar1 >> 1,param_2[4],param_3,(long)*param_2,
                        *(undefined4 *)(param_3 + (long)*param_2 * 4),param_2[7],
                        *(ulong *)(param_2 + 2) >> 1);
    return 1;
  }
  memset(param_4,0,
         (*(ulong *)(*(long *)(*param_1 + 0x30) + param_1[0xb] * 8) & 0x3fffffffffffffff) << 1);
  return 0;
}

