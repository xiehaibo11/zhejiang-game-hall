
undefined8 FT_Reference_Face(long param_1)

{
  if (param_1 != 0) {
    *(int *)(*(long *)(param_1 + 0xf0) + 0x78) = *(int *)(*(long *)(param_1 + 0xf0) + 0x78) + 1;
    return 0;
  }
  return 0x23;
}

