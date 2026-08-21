
BIO * BIO_new_connect(char *host_port)

{
  BIO *bp;
  long lVar1;
  
  bp = BIO_new((BIO_METHOD *)&DAT_016aedb8);
  if ((bp != (BIO *)0x0) && (lVar1 = BIO_ctrl(bp,100,0,host_port), lVar1 == 0)) {
    BIO_free(bp);
    bp = (BIO *)0x0;
  }
                    /* catch() { ... } // from try @ 00b077e0 with catch @ 00b07760
                       catch() { ... } // from try @ 00b07910 with catch @ 00b07760
                       catch() { ... } // from try @ 00b07970 with catch @ 00b07760
                       catch() { ... } // from try @ 00b079d0 with catch @ 00b07760
                       catch() { ... } // from try @ 00b07a28 with catch @ 00b07760 */
  return bp;
}

