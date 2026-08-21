
void png_set_rgb_to_gray_fixed(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x168) >> 6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x164) & 1) != 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x4000;
      if (2 < param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"invalid error action to rgb_to_gray");
      }
      uVar1 = *(uint *)(param_1 + 0x16c) | (param_2 - 1U) * -0x200000 + 0x600000;
      *(uint *)(param_1 + 0x16c) = uVar1;
      if (*(char *)(param_1 + 0x2af) == '\x03') {
        *(uint *)(param_1 + 0x16c) = uVar1 | 0x1000;
      }
      if ((-1 < (int)(param_4 | param_3)) && ((int)(param_4 + param_3) < 0x186a1)) {
        *(short *)(param_1 + 0x44a) = (short)((param_3 << 0xf) / 100000);
        *(short *)(param_1 + 0x44c) = (short)((param_4 << 0xf) / 100000);
        *(undefined1 *)(param_1 + 0x449) = 1;
        return;
      }
      if (-1 < (int)(param_4 | param_3)) {
        png_app_warning(param_1,"ignoring out of range rgb_to_gray coefficients");
      }
      if (*(short *)(param_1 + 0x44a) != 0) {
        return;
      }
      if (*(short *)(param_1 + 0x44c) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x44a) = 0x5b8a1b38;
      return;
    }
    pcVar2 = "invalid before the PNG header has been read";
  }
  else {
    pcVar2 = "invalid after png_start_read_image or png_read_update_info";
  }
  png_app_error(param_1,pcVar2);
  return;
}

