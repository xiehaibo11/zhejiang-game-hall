
void RSA_free(RSA *r)

{
  _func_1625 *p_Var1;
  int local_24;
  
  if ((r != (RSA *)0x0) &&
     (CRYPTO_atomic_add(&(r->ex_data).dummy,0xffffffff,&local_24,r->mt_blinding), local_24 < 1)) {
    p_Var1 = r->meth->finish;
    if (p_Var1 != (_func_1625 *)0x0) {
      (*p_Var1)(r);
    }
    ENGINE_finish(r->engine);
    CRYPTO_free_ex_data(9,r,&r->ex_data);
    CRYPTO_THREAD_lock_free(r->mt_blinding);
    BN_clear_free(r->n);
    BN_clear_free(r->e);
    BN_clear_free(r->d);
    BN_clear_free(r->p);
    BN_clear_free(r->q);
    BN_clear_free(r->dmp1);
    BN_clear_free(r->dmq1);
    BN_clear_free(r->iqmp);
    BN_BLINDING_free((BN_BLINDING *)r->bignum_data);
    BN_BLINDING_free(r->blinding);
    CRYPTO_free(r->_method_mod_q);
    CRYPTO_free(r);
  }
  return;
}

