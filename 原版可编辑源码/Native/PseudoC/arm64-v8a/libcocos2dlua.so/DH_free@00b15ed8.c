
void DH_free(DH *dh)

{
  code *pcVar1;
  int local_24;
  
  if ((dh != (DH *)0x0) &&
     (CRYPTO_atomic_add(&dh->references,0xffffffff,&local_24,dh->engine), local_24 < 1)) {
    pcVar1 = *(code **)(*(long *)&(dh->ex_data).dummy + 0x28);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(dh);
    }
    ENGINE_finish((ENGINE *)dh->meth);
    CRYPTO_free_ex_data(6,dh,&dh->ex_data);
    CRYPTO_THREAD_lock_free(dh->engine);
    BN_clear_free(dh->p);
    BN_clear_free(dh->g);
    BN_clear_free(dh->q);
    BN_clear_free(dh->j);
    CRYPTO_free(dh->seed);
    BN_clear_free(dh->counter);
    BN_clear_free(dh->pub_key);
    BN_clear_free(dh->priv_key);
    CRYPTO_free(dh);
  }
  return;
}

