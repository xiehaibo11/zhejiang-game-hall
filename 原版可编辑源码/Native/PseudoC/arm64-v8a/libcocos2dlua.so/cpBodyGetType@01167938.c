
undefined1 cpBodyGetType(long param_1)

{
  if (*(float *)(param_1 + 0xb0) == INFINITY) {
    return 2;
  }
  return *(float *)(param_1 + 0x10) == INFINITY;
}

