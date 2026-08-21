
undefined4 OPENSSL_sk_is_sorted(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 1;
}

