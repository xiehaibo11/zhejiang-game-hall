
void BN_MONT_CTX_free(BN_MONT_CTX *mont)

{
  if (mont != (BN_MONT_CTX *)0x0) {
                    /* try { // try from 00b0b700 to 00c0b707 has its CatchHandler @ 00b0b7d0 */
    BN_clear_free(&mont->RR);
                    /* try { // try from 00b0b708 to 00c0b813 has its CatchHandler @ 00b0b5c4 */
    BN_clear_free(&mont->N);
    BN_clear_free(&mont->Ni);
    if ((mont->flags & 1) != 0) {
      CRYPTO_free(mont);
      return;
    }
  }
  return;
}

