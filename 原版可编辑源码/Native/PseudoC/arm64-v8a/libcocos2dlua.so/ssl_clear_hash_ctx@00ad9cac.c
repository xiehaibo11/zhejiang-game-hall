
void ssl_clear_hash_ctx(long *param_1)

{
  if (*param_1 != 0) {
    EVP_MD_CTX_free();
  }
  *param_1 = 0;
                    /* catch() { ... } // from try @ 00ad9c70 with catch @ 00ad9cd0 */
                    /* catch() { ... } // from try @ 00ad9c4c with catch @ 00ad9cd4 */
  return;
}

