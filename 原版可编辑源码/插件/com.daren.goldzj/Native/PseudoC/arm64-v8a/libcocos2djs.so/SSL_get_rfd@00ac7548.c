
int SSL_get_rfd(SSL *s)

{
  BIO *bp;
  int iVar1;
  int local_14;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac7458 with catch @ 00ac754c
                        */
  local_14 = -1;
  bp = BIO_find_type(s->rbio,0x100);
  iVar1 = -1;
  if (bp != (BIO *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac73f0 with catch @ 00ac756c
                        */
    BIO_ctrl(bp,0x69,0,&local_14);
    iVar1 = local_14;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac72ac with catch @ 00ac7580
                        */
                    /* try { // try from 00ac7584 to 00bc7627 has its CatchHandler @ 00ac7584
                       catch() { ... } // from try @ 00ac7584 with catch @ 00ac7584
                       catch() { ... } // from try @ 00ac7630 with catch @ 00ac7584 */
  return iVar1;
}

