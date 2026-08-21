
undefined4
bn_probable_prime_dh(BIGNUM *param_1,int param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  BIGNUM *rem;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  BN_CTX_start(param_5);
  rem = BN_CTX_get(param_5);
  if ((((rem != (BIGNUM *)0x0) && (iVar1 = BN_rand(param_1,param_2,0,1), iVar1 != 0)) &&
      (iVar1 = BN_div((BIGNUM *)0x0,rem,param_1,param_3,param_5), iVar1 != 0)) &&
     (iVar1 = BN_sub(param_1,param_1,rem), iVar1 != 0)) {
    if (param_4 == (BIGNUM *)0x0) {
      iVar1 = BN_add_word(param_1,1);
    }
    else {
      iVar1 = BN_add(param_1,param_1,param_4);
    }
    if (iVar1 != 0) {
      do {
        lVar4 = 0;
        while( true ) {
          uVar2 = BN_mod_word(param_1,(ulong)(ushort)(&DAT_018d4ece)[lVar4]);
          if (uVar2 == 0xffffffffffffffff) goto LAB_00bdf5d8;
          if (uVar2 < 2) break;
          lVar4 = lVar4 + 1;
          if (0x7fe < lVar4) {
            uVar3 = 1;
            goto LAB_00bdf5dc;
          }
        }
        iVar1 = BN_add(param_1,param_1,param_3);
        uVar3 = 0;
      } while (iVar1 != 0);
      goto LAB_00bdf5dc;
    }
  }
LAB_00bdf5d8:
  uVar3 = 0;
LAB_00bdf5dc:
  BN_CTX_end(param_5);
  return uVar3;
}

