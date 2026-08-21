
void BIO_ADDRINFO_free(addrinfo *param_1)

{
  addrinfo *paVar1;
  
  if (param_1 != (addrinfo *)0x0) {
    if (param_1->ai_family != 1) {
      freeaddrinfo(param_1);
      return;
    }
    do {
      paVar1 = param_1->ai_next;
      CRYPTO_free(param_1->ai_canonname);
      CRYPTO_free(param_1);
                    /* try { // try from 00af246c to 00bf2477 has its CatchHandler @ 00af2524 */
      param_1 = paVar1;
    } while (paVar1 != (addrinfo *)0x0);
  }
                    /* try { // try from 00af2478 to 00bf24ab has its CatchHandler @ 00af2300 */
  return;
}

