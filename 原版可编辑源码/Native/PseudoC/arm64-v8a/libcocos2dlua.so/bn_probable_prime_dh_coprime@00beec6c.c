
ulong bn_probable_prime_dh_coprime(BIGNUM *param_1,int param_2,BN_CTX *param_3)

{
  bool bVar1;
  int iVar2;
  int bits;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *a;
  ulong uVar4;
  ulong uVar5;
  
  bits = param_2 + -0xb;
  if (bits == 0 || param_2 < 0xb) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: bits > prime_multiplier_bits","crypto/bn/bn_prime.c",0x155);
  }
  BN_CTX_start(param_3);
  rnd = BN_CTX_get(param_3);
  if ((((rnd == (BIGNUM *)0x0) || (a = BN_CTX_get(param_3), a == (BIGNUM *)0x0)) ||
      (iVar3 = BN_add_word(a,0x1e0), iVar3 == 0)) || (iVar3 = BN_rand(param_1,bits,0,1), iVar3 == 0)
     ) {
LAB_00beedb4:
    uVar5 = 0;
  }
  else {
    do {
      iVar3 = BN_is_bit_set(param_1,param_2);
      if (iVar3 == 0) {
        iVar3 = BN_rand_range(rnd,a);
        if ((iVar3 == 0) || (iVar3 = BN_mul_word(param_1,0x906), iVar3 == 0)) goto LAB_00beedb4;
        uVar5 = BN_get_word(rnd);
        iVar3 = BN_add_word(param_1,(long)*(int *)(&DAT_014043f4 + uVar5 * 4));
        if (iVar3 == 0) goto LAB_00beedb4;
        uVar5 = 5;
        while( true ) {
          uVar4 = BN_mod_word(param_1,(ulong)*(ushort *)(&UNK_014033f4 + uVar5 * 2));
          iVar3 = 3;
          if (1 < uVar4) {
            iVar3 = 0;
          }
          iVar2 = 2;
          if (uVar4 != 0xffffffffffffffff) {
            iVar2 = iVar3;
          }
          if (iVar2 != 0) break;
          bVar1 = 0x7fe < (long)uVar5;
          uVar5 = uVar5 + 1;
          if (bVar1) {
            uVar5 = 1;
            goto LAB_00beedb8;
          }
        }
        if (iVar2 == 2) goto LAB_00beedb4;
        if (iVar2 != 3) goto LAB_00beedc0;
      }
      iVar3 = BN_rand(param_1,bits,0,1);
      uVar5 = 0;
    } while (iVar3 != 0);
  }
LAB_00beedb8:
  BN_CTX_end(param_3);
LAB_00beedc0:
  return uVar5 & 0xffffffff;
}

