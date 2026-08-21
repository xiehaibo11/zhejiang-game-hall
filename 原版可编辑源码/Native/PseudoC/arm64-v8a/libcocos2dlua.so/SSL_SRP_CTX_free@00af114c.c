
bool SSL_SRP_CTX_free(long param_1)

{
  if (param_1 != 0) {
                    /* try { // try from 00af1174 to 00bf1183 has its CatchHandler @ 00af1258 */
    CRYPTO_free(*(void **)(param_1 + 0x338));
    BN_free(*(BIGNUM **)(param_1 + 0x340));
    BN_free(*(BIGNUM **)(param_1 + 0x348));
    BN_free(*(BIGNUM **)(param_1 + 0x350));
    BN_free(*(BIGNUM **)(param_1 + 0x358));
    BN_free(*(BIGNUM **)(param_1 + 0x360));
    BN_free(*(BIGNUM **)(param_1 + 0x368));
    BN_free(*(BIGNUM **)(param_1 + 0x370));
    BN_free(*(BIGNUM **)(param_1 + 0x378));
    memset((void *)(param_1 + 0x318),0,0x70);
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x388) = 0x400;
  }
  return param_1 != 0;
}

