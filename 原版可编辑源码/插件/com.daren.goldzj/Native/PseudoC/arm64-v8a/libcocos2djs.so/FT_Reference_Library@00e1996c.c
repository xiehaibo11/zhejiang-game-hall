
undefined8 FT_Reference_Library(long param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
    return 0;
  }
  return 0x21;
}

