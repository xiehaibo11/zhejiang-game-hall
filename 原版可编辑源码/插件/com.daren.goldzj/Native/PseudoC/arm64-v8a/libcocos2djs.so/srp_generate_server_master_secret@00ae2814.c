
undefined4 srp_generate_server_master_secret(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  uchar *to;
  
                    /* try { // try from 00ae2820 to 00be282b has its CatchHandler @ 00ae3664 */
  iVar2 = SRP_Verify_A_mod_N(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 0x340));
  if (iVar2 == 0) {
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
  }
  else {
    a = (BIGNUM *)
        SRP_Calc_u(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 0x358),
                   *(undefined8 *)(param_1 + 0x340));
    if (a == (BIGNUM *)0x0) {
                    /* try { // try from 00ae28e0 to 00be28ef has its CatchHandler @ 00ae369c */
      a_00 = (BIGNUM *)0x0;
    }
    else {
      a_00 = (BIGNUM *)
             SRP_Calc_server_key(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 0x378),a
                                 ,*(undefined8 *)(param_1 + 0x370),*(undefined8 *)(param_1 + 0x340))
      ;
      if (a_00 != (BIGNUM *)0x0) {
        iVar2 = BN_num_bits(a_00);
        uVar1 = iVar2 + 0xe;
        if (-1 < (int)(iVar2 + 7U)) {
          uVar1 = iVar2 + 7U;
        }
        to = CRYPTO_malloc((int)uVar1 >> 3,"ssl/tls_srp.c",299);
                    /* try { // try from 00ae28a4 to 00be28af has its CatchHandler @ 00ae3650 */
        if (to != (uchar *)0x0) {
          BN_bn2bin(a_00,to);
          uVar3 = ssl_generate_master_secret(param_1,to,(long)((ulong)uVar1 << 0x20) >> 0x23,1);
          goto LAB_00ae28e8;
        }
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_00ae28e8:
  BN_clear_free(a_00);
  BN_clear_free(a);
                    /* try { // try from 00ae28fc to 00be290b has its CatchHandler @ 00ae364c */
                    /* try { // try from 00ae290c to 00be2a6b has its CatchHandler @ 00ae2754 */
  return uVar3;
}

