
void png_get_x_offset_inches_fixed(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (((*(byte *)(param_2 + 9) & 1) == 0) || (*(char *)(param_2 + 0xdc) != '\x01')) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xd4);
    }
  }
  png_muldiv_warn(param_1,uVar1,500,0x7f);
  return;
}

