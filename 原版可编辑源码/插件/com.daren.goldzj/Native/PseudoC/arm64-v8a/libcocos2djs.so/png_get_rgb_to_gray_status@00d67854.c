
undefined1 png_get_rgb_to_gray_status(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x448);
  }
  return uVar1;
}

