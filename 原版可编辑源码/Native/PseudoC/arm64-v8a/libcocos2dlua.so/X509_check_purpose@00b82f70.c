
int X509_check_purpose(X509 *x,int id,int ca)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int local_60 [12];
  
  if (((ulong)x[1].sig_alg & 0x100) == 0) {
    CRYPTO_THREAD_write_lock(x[1].policy_cache,id,ca);
    FUN_00b8305c(x);
    CRYPTO_THREAD_unlock(x[1].policy_cache);
  }
                    /* try { // try from 00b82fb0 to 00c82fb7 has its CatchHandler @ 00b83084 */
  if (id == -1) {
    return 1;
  }
  uVar3 = id - 1;
                    /* try { // try from 00b82fbc to 00c82fc3 has its CatchHandler @ 00b8305c */
  if (uVar3 < 9) {
LAB_00b82fc4:
                    /* try { // try from 00b82fc4 to 00c83147 has its CatchHandler @ 00b82d80 */
    puVar2 = &DAT_0176f000 + (long)(int)uVar3 * 0x30;
LAB_00b82fd4:
    iVar1 = (**(code **)(puVar2 + 0x10))(puVar2,x,ca);
  }
  else {
    if (DAT_01784fa8 != 0) {
      local_60[0] = id;
      iVar1 = OPENSSL_sk_find(DAT_01784fa8,local_60);
      if ((iVar1 != -1) && (uVar3 = iVar1 + 9, uVar3 != 0xffffffff)) {
        if ((int)uVar3 < 0) {
          puVar2 = (undefined *)0x0;
        }
        else {
          if ((int)uVar3 < 9) goto LAB_00b82fc4;
          puVar2 = (undefined *)OPENSSL_sk_value(DAT_01784fa8,iVar1);
        }
        goto LAB_00b82fd4;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}

