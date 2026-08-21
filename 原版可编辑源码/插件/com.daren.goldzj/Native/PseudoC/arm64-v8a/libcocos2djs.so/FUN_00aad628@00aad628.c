
void FUN_00aad628(long param_1)

{
                    /* catch() { ... } // from try @ 00aad54c with catch @ 00aad630
                       catch() { ... } // from try @ 00aad620 with catch @ 00aad630
                       try { // try from 00aad630 to 00bad687 has its CatchHandler @ 00aad4f4 */
                    /* catch() { ... } // from try @ 00aad5c4 with catch @ 00aad634 */
  if (*(SSL_CTX **)(param_1 + 0x1b0) != (SSL_CTX *)0x0) {
    SSL_CTX_free(*(SSL_CTX **)(param_1 + 0x1b0));
  }
  if (((*(byte *)(param_1 + 0x200) & 1) == 0) && (*(SSL_CTX **)(param_1 + 0x1b8) != (SSL_CTX *)0x0))
  {
    SSL_CTX_free(*(SSL_CTX **)(param_1 + 0x1b8));
    return;
  }
  return;
}

