
int BN_is_bit_set(BIGNUM *a,int n)

{
  if (n < 0) {
    return 0;
  }
  if ((int)((uint)n >> 6) < a->top) {
    return (uint)(a->d[(uint)n >> 6] >> (n & 0x3fU)) & 1;
  }
  return 0;
}

