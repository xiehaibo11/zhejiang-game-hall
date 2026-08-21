
bool SSL_CTX_SRP_CTX_free(long param_1)

{
  if (param_1 != 0) {
                    /* try { // try from 00af10cc to 00bf110f has its CatchHandler @ 00af10cc
                       catch() { ... } // from try @ 00af10cc with catch @ 00af10cc
                       catch() { ... } // from try @ 00af1230 with catch @ 00af10cc */
    CRYPTO_free(*(void **)(param_1 + 0x268));
    BN_free(*(BIGNUM **)(param_1 + 0x270));
    BN_free(*(BIGNUM **)(param_1 + 0x278));
    BN_free(*(BIGNUM **)(param_1 + 0x280));
    BN_free(*(BIGNUM **)(param_1 + 0x288));
    BN_free(*(BIGNUM **)(param_1 + 0x290));
    BN_free(*(BIGNUM **)(param_1 + 0x298));
                    /* try { // try from 00af1110 to 00bf1133 has its CatchHandler @ 00af1254 */
    BN_free(*(BIGNUM **)(param_1 + 0x2a0));
    BN_free(*(BIGNUM **)(param_1 + 0x2a8));
    memset((void *)(param_1 + 0x248),0,0x70);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2b8) = 0x400;
  }
  return param_1 != 0;
}

