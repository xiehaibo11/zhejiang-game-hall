
undefined4 png_get_x_pixels_per_meter(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (-1 < *(char *)(param_2 + 8)) {
      return 0;
    }
    if (*(char *)(param_2 + 0xe8) != '\x01') {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_2 + 0xe0);
  }
  return uVar1;
}

