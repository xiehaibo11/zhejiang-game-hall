
undefined4 srp_generate_client_master_secret(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *a;
  char *__s;
  BIGNUM *a_00;
  BIGNUM *a_01;
  uchar *to;
  size_t sVar4;
  
  iVar2 = SRP_Verify_B_mod_N(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x340));
  if (iVar2 == 0) {
    a = (BIGNUM *)0x0;
LAB_00ae2a1c:
    a_00 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    __s = (char *)0x0;
  }
  else {
    a = (BIGNUM *)
        SRP_Calc_u(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 0x358),
                   *(undefined8 *)(param_1 + 0x340));
    if ((a == (BIGNUM *)0x0) || (*(code **)(param_1 + 0x330) == (code *)0x0)) goto LAB_00ae2a1c;
    __s = (char *)(**(code **)(param_1 + 0x330))(param_1,*(undefined8 *)(param_1 + 0x318));
    if (__s == (char *)0x0) {
      a_00 = (BIGNUM *)0x0;
LAB_00ae2a84:
      a_01 = (BIGNUM *)0x0;
    }
    else {
      a_00 = (BIGNUM *)
             SRP_Calc_x(*(undefined8 *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x338),__s);
      if (a_00 == (BIGNUM *)0x0) goto LAB_00ae2a84;
      a_01 = (BIGNUM *)
             SRP_Calc_client_key(*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x358),
                                 *(undefined8 *)(param_1 + 0x348),a_00,
                                 *(undefined8 *)(param_1 + 0x368),a);
      if (a_01 != (BIGNUM *)0x0) {
        iVar2 = BN_num_bits(a_01);
        uVar1 = iVar2 + 0xe;
        if (-1 < (int)(iVar2 + 7U)) {
          uVar1 = iVar2 + 7U;
        }
        to = CRYPTO_malloc((int)uVar1 >> 3,"ssl/tls_srp.c",0x151);
        if (to != (uchar *)0x0) {
          BN_bn2bin(a_01,to);
          uVar3 = ssl_generate_master_secret(param_1,to,(long)((ulong)uVar1 << 0x20) >> 0x23,1);
          goto LAB_00ae2a28;
        }
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_00ae2a28:
  BN_clear_free(a_01);
  BN_clear_free(a_00);
  if (__s != (char *)0x0) {
    sVar4 = strlen(__s);
    CRYPTO_clear_free(__s,sVar4,"ssl/tls_srp.c",0x159);
  }
  BN_clear_free(a);
                    /* try { // try from 00ae2a6c to 00be2a7b has its CatchHandler @ 00ae370c */
                    /* try { // try from 00ae2a7c to 00be2b57 has its CatchHandler @ 00ae2754 */
  return uVar3;
}

