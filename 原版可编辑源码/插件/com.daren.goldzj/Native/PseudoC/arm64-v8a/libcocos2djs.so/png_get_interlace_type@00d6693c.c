
undefined1 png_get_interlace_type(long param_1,long param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(undefined1 *)(param_2 + 0x28);
  }
  return uVar1;
}

