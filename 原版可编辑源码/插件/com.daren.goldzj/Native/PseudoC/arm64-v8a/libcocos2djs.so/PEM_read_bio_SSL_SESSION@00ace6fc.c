
SSL_SESSION * PEM_read_bio_SSL_SESSION(BIO *bp,SSL_SESSION **x,undefined1 *cb,void *u)

{
  SSL_SESSION *pSVar1;
  
                    /* try { // try from 00ace724 to 00bce727 has its CatchHandler @ 00ace774 */
  pSVar1 = PEM_ASN1_read_bio(d2i_SSL_SESSION,"SSL SESSION PARAMETERS",bp,x,cb,u);
  return pSVar1;
}

