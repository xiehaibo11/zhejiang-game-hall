
int X509_check_ca(X509 *x)

{
  uint uVar1;
  
  uVar1 = *(uint *)&x[1].sig_alg;
  if ((uVar1 >> 8 & 1) == 0) {
    CRYPTO_THREAD_write_lock(x[1].policy_cache);
    FUN_00b73bdc(x);
    CRYPTO_THREAD_unlock(x[1].policy_cache);
    uVar1 = *(uint *)&x[1].sig_alg;
  }
  if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)((long)&x[1].sig_alg + 4) >> 2 & 1) != 0)) {
    if ((uVar1 & 1) != 0) {
      return uVar1 >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return 4;
    }
    if (((uVar1 >> 3 & 1) != 0) && (((ulong)x[1].signature & 0x700000000) != 0)) {
      return 5;
    }
  }
  return 0;
}

