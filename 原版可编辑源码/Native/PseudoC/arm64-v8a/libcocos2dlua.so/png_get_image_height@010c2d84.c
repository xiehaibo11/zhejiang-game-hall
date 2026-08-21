
undefined4 png_get_image_height(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  return uVar1;
}

