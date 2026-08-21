
undefined4 png_get_y_offset_microns(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_2 + 9) & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_2 + 0xdc) != '\x01') {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_2 + 0xd8);
  }
  return uVar1;
}

