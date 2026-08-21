
void * X509_get_ex_data(X509 *r,int idx)

{
  void *pvVar1;
  
                    /* try { // try from 00b66f04 to 00c66f13 has its CatchHandler @ 00b6716c */
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(r->sha1_hash + 0x10),idx);
  return pvVar1;
}

