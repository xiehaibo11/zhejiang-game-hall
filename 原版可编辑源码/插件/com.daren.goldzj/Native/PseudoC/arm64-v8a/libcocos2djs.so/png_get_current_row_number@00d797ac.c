
undefined4 png_get_current_row_number(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x24c);
  }
  return 0xffffffff;
}

