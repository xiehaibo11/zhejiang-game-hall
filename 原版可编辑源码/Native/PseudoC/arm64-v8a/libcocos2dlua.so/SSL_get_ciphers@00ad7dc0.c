
stack_st_SSL_CIPHER * SSL_get_ciphers(SSL *s)

{
  cert_st *pcVar1;
  
  if ((s != (SSL *)0x0) &&
     ((pcVar1 = s->cert, pcVar1 != (cert_st *)0x0 ||
      ((s->mode != 0 && (pcVar1 = *(cert_st **)(s->mode + 8), pcVar1 != (cert_st *)0x0)))))) {
    return (stack_st_SSL_CIPHER *)pcVar1;
  }
                    /* catch() { ... } // from try @ 00ad7da4 with catch @ 00ad7de8 */
  return (stack_st_SSL_CIPHER *)0x0;
}

