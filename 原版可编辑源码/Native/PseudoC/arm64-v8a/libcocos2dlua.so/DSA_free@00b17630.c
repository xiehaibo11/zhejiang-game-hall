
void DSA_free(DSA *r)

{
  code *pcVar1;
  int local_14;
  
  if ((r != (DSA *)0x0) &&
     (CRYPTO_atomic_add(&r->r,0xffffffff,&local_14,(r->ex_data).sk), local_14 < 1)) {
    pcVar1 = (code *)(r->method_mont_p->Ni).d;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(r);
    }
    ENGINE_finish(*(ENGINE **)&r->references);
    CRYPTO_free_ex_data(7,r,(CRYPTO_EX_DATA *)&r->flags);
    CRYPTO_THREAD_lock_free((r->ex_data).sk);
    BN_clear_free(*(BIGNUM **)&r->write_params);
    BN_clear_free(r->p);
    BN_clear_free(r->q);
    BN_clear_free(r->g);
    BN_clear_free(r->pub_key);
    CRYPTO_free(r);
  }
  return;
}

