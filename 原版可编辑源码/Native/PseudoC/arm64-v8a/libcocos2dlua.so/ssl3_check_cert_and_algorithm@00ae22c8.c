
undefined8 ssl3_check_cert_and_algorithm(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  EVP_PKEY *pubkey;
  undefined8 uVar5;
  int line;
  long lVar6;
  
                    /* try { // try from 00ae22dc to 00be22e3 has its CatchHandler @ 00ae232c */
  lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x228);
                    /* try { // try from 00ae22e4 to 00be2323 has its CatchHandler @ 00ae2134 */
  uVar1 = *(uint *)(lVar6 + 0x14);
  uVar2 = *(uint *)(lVar6 + 0x18);
  if ((uVar2 & 4) != 0 || (uVar1 & 8) != 0) {
    return 1;
  }
  lVar6 = *(long *)(param_1 + 0x178);
  if (*(int *)(lVar6 + 0xa0) == 3) {
    iVar3 = ssl_check_srvr_ecc_cert_and_alg(*(undefined8 *)(lVar6 + 0x98),param_1);
    if (iVar3 != 0) {
      return 1;
    }
                    /* try { // try from 00ae2324 to 00be2327 has its CatchHandler @ 00ae2340 */
                    /* try { // try from 00ae2328 to 00be235f has its CatchHandler @ 00ae2134 */
                    /* catch() { ... } // from try @ 00ae21ec with catch @ 00ae232c
                       catch() { ... } // from try @ 00ae22dc with catch @ 00ae232c */
    iVar3 = 0x130;
    line = 0xb05;
  }
  else if ((uVar2 >> 3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00ae2294 with catch @ 00ae2340
                       catch() { ... } // from try @ 00ae2324 with catch @ 00ae2340 */
    pubkey = (EVP_PKEY *)X509_get0_pubkey(*(undefined8 *)(lVar6 + 0x98));
    uVar4 = X509_certificate_type(*(X509 **)(*(long *)(param_1 + 0x178) + 0x98),pubkey);
    if (((uVar2 & 1) == 0) || ((uVar4 & 0x11) == 0x11)) {
      if (((uVar2 >> 1 & 1) == 0) || ((uVar4 & 0x12) == 0x12)) {
        if (((uVar1 & 0x41) == 0) || ((uVar4 & 0x21) == 0x21)) {
          if ((uVar1 >> 1 & 1) == 0) {
            return 1;
          }
          if (*(long *)(*(long *)(param_1 + 0x90) + 0x3f8) != 0) {
            return 1;
          }
          ERR_put_error(0x14,0x82,0x44,"ssl/statem/statem_clnt.c",0xb2b);
          uVar5 = 0x50;
          goto LAB_00ae23ac;
        }
        iVar3 = 0xa9;
        line = 0xb24;
      }
      else {
        iVar3 = 0xa5;
        line = 0xb1c;
      }
    }
    else {
      iVar3 = 0xaa;
      line = 0xb16;
    }
  }
  else {
    iVar3 = 0x17d;
    line = 0xb0c;
  }
  ERR_put_error(0x14,0x82,iVar3,"ssl/statem/statem_clnt.c",line);
  uVar5 = 0x28;
LAB_00ae23ac:
  ssl3_send_alert(param_1,2,uVar5);
  return 0;
}

