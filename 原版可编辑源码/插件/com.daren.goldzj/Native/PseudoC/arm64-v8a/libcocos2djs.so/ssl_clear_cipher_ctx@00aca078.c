
void ssl_clear_cipher_ctx(long param_1)

{
                    /* catch() { ... } // from try @ 00ac9eb4 with catch @ 00aca07c */
  if (*(EVP_CIPHER_CTX **)(param_1 + 0x118) != (EVP_CIPHER_CTX *)0x0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(EVP_CIPHER_CTX **)(param_1 + 0x138) != (EVP_CIPHER_CTX *)0x0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x130));
  *(undefined8 *)(param_1 + 0x130) = 0;
                    /* try { // try from 00aca0b8 to 00bca1d7 has its CatchHandler @ 00aca0b8
                       catch() { ... } // from try @ 00aca0b8 with catch @ 00aca0b8
                       catch() { ... } // from try @ 00aca22c with catch @ 00aca0b8 */
  COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x128));
  *(undefined8 *)(param_1 + 0x128) = 0;
  return;
}

