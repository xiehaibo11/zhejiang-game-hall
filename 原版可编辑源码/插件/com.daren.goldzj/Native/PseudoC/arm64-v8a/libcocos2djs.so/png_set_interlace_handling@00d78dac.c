
undefined8 png_set_interlace_handling(long param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x2ac) != '\0') {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 2;
    return 7;
  }
  return 1;
}

