
void SSL_set_bio(SSL *s,BIO *rbio,BIO *wbio)

{
  BIO *pBVar1;
  BIO *pBVar2;
  
  if (s->rbio == rbio) {
                    /* try { // try from 00ad68d8 to 00bd68db has its CatchHandler @ 00ad6a44 */
    if (s->bbio == (BIO *)0x0) {
      pBVar1 = s->wbio;
    }
    else {
      pBVar1 = BIO_next(s->bbio);
    }
    if (pBVar1 == wbio) {
      return;
    }
  }
  if ((rbio != (BIO *)0x0) && (rbio == wbio)) {
    BIO_up_ref(rbio);
  }
  pBVar1 = s->bbio;
  if (s->rbio == rbio) {
    pBVar2 = s->wbio;
  }
  else {
    if (pBVar1 == (BIO *)0x0) {
      pBVar1 = s->wbio;
    }
    else {
                    /* try { // try from 00ad6910 to 00bd6917 has its CatchHandler @ 00ad6a3c */
      pBVar1 = BIO_next(pBVar1);
    }
    if (pBVar1 == wbio) {
      pBVar1 = s->rbio;
      if (s->bbio == (BIO *)0x0) {
        pBVar2 = s->wbio;
      }
      else {
        pBVar2 = BIO_next(s->bbio);
      }
      if (pBVar1 != pBVar2) {
        BIO_free_all(s->rbio);
        s->rbio = rbio;
        return;
      }
    }
    BIO_free_all(s->rbio);
    pBVar2 = s->wbio;
    pBVar1 = s->bbio;
    s->rbio = rbio;
  }
  if (pBVar1 != (BIO *)0x0) {
                    /* try { // try from 00ad6994 to 00bd6997 has its CatchHandler @ 00ad6a5c */
    pBVar2 = BIO_pop(pBVar2);
                    /* try { // try from 00ad6998 to 00bd6a5f has its CatchHandler @ 00ad6828 */
    s->wbio = pBVar2;
  }
  BIO_free_all(pBVar2);
  s->wbio = wbio;
  if (s->bbio != (BIO *)0x0) {
    pBVar1 = BIO_push(s->bbio,wbio);
    s->wbio = pBVar1;
  }
  return;
}

