
uint png_get_uint_31(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (-1 < (int)uVar1) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"PNG unsigned integer out of range");
}

