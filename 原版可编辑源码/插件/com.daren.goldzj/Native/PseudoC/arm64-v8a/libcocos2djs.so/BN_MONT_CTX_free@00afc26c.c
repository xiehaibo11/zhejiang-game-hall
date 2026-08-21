
void BN_MONT_CTX_free(BN_MONT_CTX *mont)

{
  if (mont != (BN_MONT_CTX *)0x0) {
    BN_clear_free(&mont->RR);
    BN_clear_free(&mont->N);
    BN_clear_free(&mont->Ni);
    if ((mont->flags & 1) != 0) {
                    /* try { // try from 00afc2b8 to 00bfc2c3 has its CatchHandler @ 00afc3a0 */
      CRYPTO_free(mont);
      return;
    }
  }
  return;
}

