
bool SSL_CTX_SRP_CTX_free(long param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(void **)(param_1 + 0x268));
    BN_free(*(BIGNUM **)(param_1 + 0x270));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae21ac with catch @ 00ae2234
                        */
    BN_free(*(BIGNUM **)(param_1 + 0x278));
    BN_free(*(BIGNUM **)(param_1 + 0x280));
    BN_free(*(BIGNUM **)(param_1 + 0x288));
    BN_free(*(BIGNUM **)(param_1 + 0x290));
    BN_free(*(BIGNUM **)(param_1 + 0x298));
    BN_free(*(BIGNUM **)(param_1 + 0x2a0));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae21b4 with catch @ 00ae2268
                        */
    BN_free(*(BIGNUM **)(param_1 + 0x2a8));
    memset((void *)(param_1 + 0x248),0,0x70);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2b8) = 0x400;
  }
                    /* try { // try from 00ae228c to 00be228f has its CatchHandler @ 00ae22a0 */
  return param_1 != 0;
}

