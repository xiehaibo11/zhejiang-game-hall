
undefined4 srp_generate_server_master_secret(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  uchar *to;
  
  iVar2 = SRP_Verify_A_mod_N(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 0x340));
  if (iVar2 == 0) {
    a_00 = (BIGNUM *)0x0;
                    /* try { // try from 00af178c to 00bf1797 has its CatchHandler @ 00af185c */
    a = (BIGNUM *)0x0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af1768 with catch @ 00af16f8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af1798 with catch @ 00af16f8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af17c8 with catch @ 00af16f8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af17f0 with catch @ 00af16f8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af181c with catch @ 00af16f8
                        */
    a = (BIGNUM *)
        SRP_Calc_u(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 0x358),
                   *(undefined8 *)(param_1 + 0x340));
    if (a == (BIGNUM *)0x0) {
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
        if (to != (uchar *)0x0) {
                    /* try { // try from 00af1760 to 00bf1767 has its CatchHandler @ 00af185c */
                    /* try { // try from 00af1768 to 00bf178b has its CatchHandler @ 00af16f8 */
          BN_bn2bin(a_00,to);
          uVar3 = ssl_generate_master_secret(param_1,to,(long)((ulong)uVar1 << 0x20) >> 0x23,1);
          goto LAB_00af179c;
        }
      }
    }
  }
                    /* try { // try from 00af1798 to 00bf17bf has its CatchHandler @ 00af16f8 */
  uVar3 = 0xffffffff;
LAB_00af179c:
  BN_clear_free(a_00);
  BN_clear_free(a);
                    /* try { // try from 00af17c0 to 00bf17c7 has its CatchHandler @ 00af1858 */
  return uVar3;
}

