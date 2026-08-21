
int X509V3_EXT_add_list(X509V3_EXT_METHOD *extlist)

{
  int iVar1;
  
  iVar1 = extlist->ext_nid;
  while( true ) {
                    /* try { // try from 00b8087c to 00c808c3 has its CatchHandler @ 00b80528 */
    if (iVar1 == -1) {
                    /* catch() { ... } // from try @ 00b80820 with catch @ 00b8090c */
      return 1;
    }
    if ((DAT_01784fa0 == 0) && (DAT_01784fa0 = OPENSSL_sk_new(&LAB_00b8071c), DAT_01784fa0 == 0))
    break;
    iVar1 = OPENSSL_sk_push(DAT_01784fa0,extlist);
    if (iVar1 == 0) {
                    /* try { // try from 00b808c4 to 00c808cb has its CatchHandler @ 00b808cc */
                    /* catch() { ... } // from try @ 00b8071c with catch @ 00b808cc
                       catch() { ... } // from try @ 00b808c4 with catch @ 00b808cc
                       try { // try from 00b808cc to 00c80927 has its CatchHandler @ 00b80528 */
                    /* catch() { ... } // from try @ 00b80748 with catch @ 00b808d0 */
      iVar1 = 0x21;
      goto LAB_00b808f8;
    }
    extlist = extlist + 1;
    iVar1 = extlist->ext_nid;
  }
                    /* catch() { ... } // from try @ 00b806b0 with catch @ 00b808f0 */
                    /* catch() { ... } // from try @ 00b80798 with catch @ 00b808f4 */
  iVar1 = 0x1d;
LAB_00b808f8:
                    /* catch() { ... } // from try @ 00b80680 with catch @ 00b808f8 */
  ERR_put_error(0x22,0x68,0x41,"crypto/x509v3/v3_lib.c",iVar1);
  return 0;
}

