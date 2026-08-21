
int ASN1_i2d_bio(undefined1 *i2d,BIO *out,uchar *x)

{
  int iVar1;
  int iVar2;
  void *data;
  int iVar3;
  void *local_38;
  
                    /* try { // try from 00b8a6a0 to 00c8a6f7 has its CatchHandler @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a6a0 with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a704 with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a734 with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a764 with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a7ec with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a850 with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a8b4 with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a918 with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a980 with catch @ 00b8a6a0
                       catch() { ... } // from try @ 00b8a9e8 with catch @ 00b8a6a0 */
  iVar1 = (*(code *)i2d)(x,0);
  data = CRYPTO_malloc(iVar1,"crypto/asn1/a_i2d_fp.c",0x29);
  if (data == (void *)0x0) {
                    /* try { // try from 00b8a758 to 00c8a763 has its CatchHandler @ 00b8aa94 */
    ERR_put_error(0xd,0x74,0x41,"crypto/asn1/a_i2d_fp.c",0x2b);
    iVar1 = 0;
  }
  else {
    local_38 = data;
    (*(code *)i2d)(x,&local_38);
                    /* try { // try from 00b8a6f8 to 00c8a703 has its CatchHandler @ 00b8aa9c */
    iVar2 = BIO_write(out,data,iVar1);
                    /* try { // try from 00b8a704 to 00c8a727 has its CatchHandler @ 00b8a6a0 */
    if (iVar1 != iVar2) {
      iVar3 = 0;
      do {
        if (iVar2 < 1) {
                    /* try { // try from 00b8a764 to 00c8a787 has its CatchHandler @ 00b8a6a0 */
          iVar1 = 0;
          goto LAB_00b8a768;
        }
        iVar3 = iVar2 + iVar3;
        iVar1 = iVar1 - iVar2;
                    /* try { // try from 00b8a728 to 00c8a733 has its CatchHandler @ 00b8aa98 */
        iVar2 = BIO_write(out,(void *)((long)data + (long)iVar3),iVar1);
                    /* try { // try from 00b8a734 to 00c8a757 has its CatchHandler @ 00b8a6a0 */
      } while (iVar1 != iVar2);
    }
    iVar1 = 1;
LAB_00b8a768:
    CRYPTO_free(data);
  }
                    /* try { // try from 00b8a788 to 00c8a793 has its CatchHandler @ 00b8aa90 */
  return iVar1;
}

