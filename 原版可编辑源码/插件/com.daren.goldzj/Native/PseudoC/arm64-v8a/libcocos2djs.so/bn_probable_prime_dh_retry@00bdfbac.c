
undefined4 bn_probable_prime_dh_retry(BIGNUM *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = BN_rand(param_1,param_2,0,1);
  if (iVar1 != 0) {
    do {
      lVar3 = 0;
      while( true ) {
        uVar2 = BN_mod_word(param_1,(ulong)(ushort)(&DAT_018d4ece)[lVar3]);
        iVar1 = 3;
        if (uVar2 != 0xffffffffffffffff) {
          iVar1 = (uint)(uVar2 < 2) << 1;
        }
        if (iVar1 != 0) break;
        lVar3 = lVar3 + 1;
        if (0x7fe < lVar3) {
          return 1;
        }
      }
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = BN_rand(param_1,param_2,0,1);
    } while (iVar1 != 0);
  }
  return 0;
}

