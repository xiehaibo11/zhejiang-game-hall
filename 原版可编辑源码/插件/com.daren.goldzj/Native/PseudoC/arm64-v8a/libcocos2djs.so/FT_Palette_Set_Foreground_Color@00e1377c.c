
undefined8 FT_Palette_Set_Foreground_Color(long param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x451) = param_2;
  *(undefined1 *)(param_1 + 0x450) = 1;
  return 0;
}

