
undefined4 png_get_y_pixels_per_inch(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (-1 < *(char *)(param_2 + 8))) ||
     (*(char *)(param_2 + 0xe8) != '\x01')) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xe4);
    if (iVar2 < 0) {
      return 0;
    }
  }
  iVar2 = png_muldiv(&local_14,iVar2,0x7f,5000);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = local_14;
  }
  return uVar1;
}

