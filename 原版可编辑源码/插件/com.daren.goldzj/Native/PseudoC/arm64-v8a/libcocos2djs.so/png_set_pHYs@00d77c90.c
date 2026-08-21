
void png_set_pHYs(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
                 )

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0xe0) = param_3;
    *(undefined4 *)(param_2 + 0xe4) = param_4;
    *(undefined1 *)(param_2 + 0xe8) = param_5;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
  }
  return;
}

