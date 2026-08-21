
undefined4 png_get_image_width(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = *param_2;
  }
  return uVar1;
}

