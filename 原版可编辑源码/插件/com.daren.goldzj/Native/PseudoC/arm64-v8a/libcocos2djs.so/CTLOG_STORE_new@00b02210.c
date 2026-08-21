
long * CTLOG_STORE_new(void)

{
  long *ptr;
  long lVar1;
  
                    /* try { // try from 00b02214 to 00c02227 has its CatchHandler @ 00b029c0 */
  ptr = (long *)CRYPTO_zalloc(8,"crypto/ct/ct_log.c",0x5e);
                    /* try { // try from 00b02234 to 00c02243 has its CatchHandler @ 00b02a54 */
  if (ptr == (long *)0x0) {
                    /* try { // try from 00b02264 to 00c0226f has its CatchHandler @ 00b029d4 */
                    /* try { // try from 00b02274 to 00c0227f has its CatchHandler @ 00b02a50 */
    ERR_put_error(0x32,0x83,0x41,"crypto/ct/ct_log.c",0x61);
  }
  else {
    lVar1 = OPENSSL_sk_new_null();
    *ptr = lVar1;
    if (lVar1 == 0) {
      CRYPTO_free(ptr);
      ptr = (long *)0x0;
    }
  }
  return ptr;
}

