
undefined4 FUN_00db6da4(int param_1,short param_2,char param_3)

{
  undefined4 uVar1;
  
  if (((param_1 == 2) && (param_2 == -1)) && (param_3 == '\0')) {
    uVar1 = 1;
  }
  else {
    if ((param_2 == 1) && (param_3 == '\0')) {
      if (param_1 - 1U < 0x12) {
        return *(undefined4 *)(&DAT_01952330 + (long)(int)(param_1 - 1U) * 4);
      }
      return 0;
    }
    if ((0 < param_2) && (param_3 == '\0')) {
      if (param_1 - 1U < 0x12) {
        return *(undefined4 *)(&DAT_01952380 + (long)(int)(param_1 - 1U) * 4);
      }
      return 0;
    }
    if ((param_2 == -1) && (param_3 == '\x01')) {
      if (param_1 - 1U < 0x12) {
        return *(undefined4 *)(&DAT_019523d0 + (long)(int)(param_1 - 1U) * 4);
      }
      return 0;
    }
    uVar1 = 0;
    if ((param_2 == -3) && (param_3 == '\x01')) {
      if (param_1 - 1U < 0x12) {
        return *(undefined4 *)(&DAT_01952420 + (long)(int)(param_1 - 1U) * 4);
      }
      return 0;
    }
  }
  return uVar1;
}

