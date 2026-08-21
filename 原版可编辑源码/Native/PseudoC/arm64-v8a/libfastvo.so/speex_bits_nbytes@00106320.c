
int speex_bits_nbytes(long param_1)

{
  return *(int *)(param_1 + 8) + 7 >> 3;
}

