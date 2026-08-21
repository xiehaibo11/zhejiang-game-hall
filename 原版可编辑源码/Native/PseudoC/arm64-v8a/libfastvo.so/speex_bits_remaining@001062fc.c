
int speex_bits_remaining(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return -1;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x10)) + *(int *)(param_1 + 0xc) * -8;
}

