
void png_set_oFFs(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
                 )

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0xd4) = param_3;
    *(undefined4 *)(param_2 + 0xd8) = param_4;
    *(undefined1 *)(param_2 + 0xdc) = param_5;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
  }
  return;
}

