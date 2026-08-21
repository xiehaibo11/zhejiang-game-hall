
long SSL_get1_supported_ciphers(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 != 0) &&
     ((lVar4 = *(long *)(param_1 + 0x100), lVar4 != 0 ||
      ((*(long *)(param_1 + 0x1b8) != 0 &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x1b8) + 8), lVar4 != 0)))))) {
    ssl_set_client_disabled(param_1);
    iVar1 = OPENSSL_sk_num(lVar4);
    if (0 < iVar1) {
      iVar1 = 0;
      lVar5 = 0;
      do {
        uVar3 = OPENSSL_sk_value(lVar4,iVar1);
                    /* try { // try from 00ad7e6c to 00bd7e73 has its CatchHandler @ 00ad7eb0 */
                    /* try { // try from 00ad7e74 to 00bd7ecb has its CatchHandler @ 00ad7e04 */
        iVar2 = ssl_cipher_disabled(param_1,uVar3,0x10001);
        if (iVar2 == 0) {
          if ((lVar5 == 0) && (lVar5 = OPENSSL_sk_new_null(), lVar5 == 0)) {
            return 0;
          }
          iVar2 = OPENSSL_sk_push(lVar5,uVar3);
          if (iVar2 == 0) {
                    /* try { // try from 00ad7ecc to 00bd7f33 has its CatchHandler @ 00ad7ecc
                       catch() { ... } // from try @ 00ad7ecc with catch @ 00ad7ecc
                       catch() { ... } // from try @ 00ad7f3c with catch @ 00ad7ecc */
            OPENSSL_sk_free(lVar5);
            return 0;
          }
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(lVar4);
                    /* catch() { ... } // from try @ 00ad7e6c with catch @ 00ad7eb0 */
        if (iVar2 <= iVar1) {
          return lVar5;
        }
      } while( true );
    }
  }
  return 0;
}

