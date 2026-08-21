
void tls1_free(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x2a8));
                    /* catch() { ... } // from try @ 00adafbc with catch @ 00adb1d4
                       catch() { ... } // from try @ 00adb12c with catch @ 00adb1d4 */
  ssl3_free(param_1);
  return;
}

