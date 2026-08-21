
undefined8 SSL_dane_enable(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
                    /* try { // try from 00ad5b38 to 00bd5b97 has its CatchHandler @ 00ad5b04 */
  if (*(char *)(*(long *)(param_1 + 0x1b8) + 0x318) == '\0') {
    iVar1 = 0xa7;
    iVar3 = 0x33d;
  }
  else {
    if (*(long *)(param_1 + 200) == 0) {
                    /* try { // try from 00ad5bc8 to 00bd5bcf has its CatchHandler @ 00ad5c0c */
      if ((*(long *)(param_1 + 0x228) == 0) &&
         (lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x37,0,param_2), lVar2 == 0))
      {
        iVar1 = 0xcc;
        iVar3 = 0x34c;
      }
      else {
                    /* try { // try from 00ad5bd0 to 00bd5c2f has its CatchHandler @ 00ad5b98 */
        iVar1 = X509_VERIFY_PARAM_set1_host(*(undefined8 *)(param_1 + 0xb8),param_2,0);
        if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00ad5bc8 with catch @ 00ad5c0c */
          iVar1 = 0xcc;
          iVar3 = 0x353;
        }
        else {
          *(undefined8 *)(param_1 + 0xec) = 0xffffffffffffffff;
          *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0x1b8) + 0x308;
          lVar2 = OPENSSL_sk_new_null();
          *(long *)(param_1 + 200) = lVar2;
          if (lVar2 != 0) {
            return 1;
          }
                    /* try { // try from 00ad5c38 to 00bd5d2b has its CatchHandler @ 00ad5c38
                       catch() { ... } // from try @ 00ad5c38 with catch @ 00ad5c38
                       catch() { ... } // from try @ 00ad5d3c with catch @ 00ad5c38 */
          iVar1 = 0x41;
          iVar3 = 0x35d;
        }
      }
      ERR_put_error(0x14,0x18b,iVar1,"ssl/ssl_lib.c",iVar3);
      return 0xffffffff;
    }
    iVar1 = 0xac;
                    /* catch() { ... } // from try @ 00ad5b30 with catch @ 00ad5b74 */
    iVar3 = 0x341;
  }
  ERR_put_error(0x14,0x18b,iVar1,"ssl/ssl_lib.c",iVar3);
                    /* catch() { ... } // from try @ 00ad5bd0 with catch @ 00ad5b98 */
  return 0;
}

