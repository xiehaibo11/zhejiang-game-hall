
int SSL_get_rfd(SSL *s)

{
  BIO *bp;
  int iVar1;
  int local_14;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad6910 with catch @ 00ad6a3c
                        */
  local_14 = -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad68d8 with catch @ 00ad6a44
                        */
  bp = BIO_find_type(s->rbio,0x100);
  iVar1 = -1;
  if (bp != (BIO *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad6994 with catch @ 00ad6a5c
                        */
                    /* try { // try from 00ad6a60 to 00bd6b0f has its CatchHandler @ 00ad6a60
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad6a60 with catch @ 00ad6a60
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad6bd0 with catch @ 00ad6a60
                        */
    BIO_ctrl(bp,0x69,0,&local_14);
    iVar1 = local_14;
  }
  return iVar1;
}

