
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
  
                    /* try { // try from 00af17c8 to 00bf17e7 has its CatchHandler @ 00af16f8 */
                    /* try { // try from 00af17e8 to 00bf17ef has its CatchHandler @ 00af1858 */
  iVar2 = SRP_Verify_B_mod_N(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x340));
  if (iVar2 == 0) {
    a = (BIGNUM *)0x0;
LAB_00af18d0:
    a_00 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    __s = (char *)0x0;
  }
  else {
                    /* try { // try from 00af17f0 to 00bf180f has its CatchHandler @ 00af16f8 */
    a = (BIGNUM *)
        SRP_Calc_u(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 0x358),
                   *(undefined8 *)(param_1 + 0x340));
    if ((a == (BIGNUM *)0x0) || (*(code **)(param_1 + 0x330) == (code *)0x0)) goto LAB_00af18d0;
                    /* try { // try from 00af1810 to 00bf181b has its CatchHandler @ 00af1858 */
    __s = (char *)(**(code **)(param_1 + 0x330))(param_1,*(undefined8 *)(param_1 + 0x318));
                    /* try { // try from 00af181c to 00bf185f has its CatchHandler @ 00af16f8 */
    if (__s == (char *)0x0) {
      a_00 = (BIGNUM *)0x0;
LAB_00af1938:
      a_01 = (BIGNUM *)0x0;
    }
    else {
      a_00 = (BIGNUM *)
             SRP_Calc_x(*(undefined8 *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x338),__s);
      if (a_00 == (BIGNUM *)0x0) goto LAB_00af1938;
      a_01 = (BIGNUM *)
             SRP_Calc_client_key(*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x358),
                                 *(undefined8 *)(param_1 + 0x348),a_00,
                                 *(undefined8 *)(param_1 + 0x368),a);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af17c0 with catch @ 00af1858
                       catch(type#1 @ 00000000) { ... } // from try @ 00af17e8 with catch @ 00af1858
                       catch(type#1 @ 00000000) { ... } // from try @ 00af1810 with catch @ 00af1858
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af1760 with catch @ 00af185c
                       catch(type#1 @ 00000000) { ... } // from try @ 00af178c with catch @ 00af185c
                        */
      if (a_01 != (BIGNUM *)0x0) {
        iVar2 = BN_num_bits(a_01);
        uVar1 = iVar2 + 0xe;
        if (-1 < (int)(iVar2 + 7U)) {
          uVar1 = iVar2 + 7U;
        }
                    /* try { // try from 00af188c to 00bf1947 has its CatchHandler @ 00af188c
                       catch() { ... } // from try @ 00af188c with catch @ 00af188c
                       catch() { ... } // from try @ 00af1954 with catch @ 00af188c
                       catch() { ... } // from try @ 00af1ed0 with catch @ 00af188c */
        to = CRYPTO_malloc((int)uVar1 >> 3,"ssl/tls_srp.c",0x151);
        if (to != (uchar *)0x0) {
          BN_bn2bin(a_01,to);
          uVar3 = ssl_generate_master_secret(param_1,to,(long)((ulong)uVar1 << 0x20) >> 0x23,1);
          goto LAB_00af18dc;
        }
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_00af18dc:
  BN_clear_free(a_01);
  BN_clear_free(a_00);
  if (__s != (char *)0x0) {
    sVar4 = strlen(__s);
    CRYPTO_clear_free(__s,sVar4,"ssl/tls_srp.c",0x159);
  }
  BN_clear_free(a);
  return uVar3;
}

