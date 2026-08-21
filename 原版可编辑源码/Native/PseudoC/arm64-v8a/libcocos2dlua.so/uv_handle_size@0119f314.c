
undefined8 uv_handle_size(int param_1)

{
  if (param_1 - 1U < 0x10) {
    return *(undefined8 *)(&DAT_014a1060 + (long)(int)(param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}

