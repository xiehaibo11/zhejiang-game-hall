
undefined4 png_get_user_width_max(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x494);
  }
  return uVar1;
}

