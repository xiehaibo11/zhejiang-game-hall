
bool SSL_SRP_CTX_free(long param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae228c with catch @ 00ae22a0
                        */
  if (param_1 != 0) {
    CRYPTO_free(*(void **)(param_1 + 0x338));
    BN_free(*(BIGNUM **)(param_1 + 0x340));
    BN_free(*(BIGNUM **)(param_1 + 0x348));
    BN_free(*(BIGNUM **)(param_1 + 0x350));
    BN_free(*(BIGNUM **)(param_1 + 0x358));
    BN_free(*(BIGNUM **)(param_1 + 0x360));
    BN_free(*(BIGNUM **)(param_1 + 0x368));
    BN_free(*(BIGNUM **)(param_1 + 0x370));
    BN_free(*(BIGNUM **)(param_1 + 0x378));
                    /* catch() { ... } // from try @ 00ae24f4 with catch @ 00ae2308
                       catch() { ... } // from try @ 00ae2648 with catch @ 00ae2308 */
    memset((void *)(param_1 + 0x318),0,0x70);
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x388) = 0x400;
  }
  return param_1 != 0;
}

