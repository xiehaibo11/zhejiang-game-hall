
void ssl_clear_cipher_ctx(long param_1)

{
  if (*(EVP_CIPHER_CTX **)(param_1 + 0x118) != (EVP_CIPHER_CTX *)0x0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(EVP_CIPHER_CTX **)(param_1 + 0x138) != (EVP_CIPHER_CTX *)0x0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x130));
                    /* catch() { ... } // from try @ 00ad947c with catch @ 00ad9598 */
  *(undefined8 *)(param_1 + 0x130) = 0;
  COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x128));
  *(undefined8 *)(param_1 + 0x128) = 0;
  return;
}

