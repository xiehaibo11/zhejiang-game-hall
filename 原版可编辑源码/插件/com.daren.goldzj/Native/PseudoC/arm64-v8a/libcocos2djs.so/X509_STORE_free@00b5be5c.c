
void X509_STORE_free(X509_STORE *v)

{
  int iVar1;
  int iVar2;
  void *ptr;
  code *pcVar3;
  stack_st_X509_LOOKUP *psVar4;
  int local_34;
  
  if ((v != (X509_STORE *)0x0) &&
     (CRYPTO_atomic_add(&v->references,0xffffffff,&local_34,*(undefined8 *)(v + 1)), local_34 < 1))
  {
    psVar4 = v->get_cert_methods;
    local_34 = 0;
    iVar1 = OPENSSL_sk_num(psVar4);
    if (0 < iVar1) {
      do {
        ptr = (void *)OPENSSL_sk_value(psVar4,local_34);
        if ((*(long *)((long)ptr + 8) != 0) &&
           (pcVar3 = *(code **)(*(long *)((long)ptr + 8) + 0x20), pcVar3 != (code *)0x0)) {
          (*pcVar3)(ptr);
        }
        if (ptr != (void *)0x0) {
                    /* try { // try from 00b5beec to 00c5bef3 has its CatchHandler @ 00b5bf64 */
          if ((*(long *)((long)ptr + 8) != 0) &&
             (pcVar3 = *(code **)(*(long *)((long)ptr + 8) + 0x10), pcVar3 != (code *)0x0)) {
                    /* try { // try from 00b5bef4 to 00c5bf7b has its CatchHandler @ 00b5bb5c */
            (*pcVar3)(ptr);
          }
          CRYPTO_free(ptr);
        }
        iVar1 = local_34 + 1;
        local_34 = iVar1;
        iVar2 = OPENSSL_sk_num(psVar4);
      } while (iVar1 < iVar2);
    }
    OPENSSL_sk_free(psVar4);
    OPENSSL_sk_pop_free(v->objs,&LAB_00b5bf88);
    CRYPTO_free_ex_data(4,v,(CRYPTO_EX_DATA *)&(v->ex_data).dummy);
    X509_VERIFY_PARAM_free(v->param);
    CRYPTO_THREAD_lock_free(*(undefined8 *)(v + 1));
                    /* catch() { ... } // from try @ 00b5beec with catch @ 00b5bf64 */
                    /* catch() { ... } // from try @ 00b5bc74 with catch @ 00b5bf68 */
                    /* catch() { ... } // from try @ 00b5be3c with catch @ 00b5bf6c */
    CRYPTO_free(v);
  }
  return;
}

