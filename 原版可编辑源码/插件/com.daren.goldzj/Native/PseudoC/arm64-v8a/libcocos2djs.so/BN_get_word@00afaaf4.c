
ulong BN_get_word(BIGNUM *a)

{
  if (1 < a->top) {
    return 0xffffffffffffffff;
  }
  if (a->top == 1) {
    return *a->d;
  }
  return 0;
}

