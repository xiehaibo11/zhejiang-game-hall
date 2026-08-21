
int SSL_CIPHER_get_bits(SSL_CIPHER *c,int *alg_bits)

{
  int iVar1;
  
  iVar1 = 0;
  if (c != (SSL_CIPHER *)0x0) {
    if (alg_bits != (int *)0x0) {
      *alg_bits = (int)c->algo_strength;
    }
                    /* catch() { ... } // from try @ 00ad46dc with catch @ 00ad4774 */
    iVar1 = *(int *)((long)&c->algorithm_ssl + 4);
  }
  return iVar1;
}

