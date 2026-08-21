
EVP_PKEY_ASN1_METHOD * ENGINE_pkey_asn1_find_str(ENGINE **pe,char *str,int len)

{
  int iVar1;
  ENGINE *local_40;
  EVP_PKEY_ASN1_METHOD *local_38;
  char *local_30;
  int local_28;
  
  local_40 = (ENGINE *)0x0;
  local_38 = (EVP_PKEY_ASN1_METHOD *)0x0;
  local_30 = str;
  local_28 = len;
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  if ((iVar1 == 0) || (do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_put_error(0x26,0xc5,0x41,"crypto/engine/tb_asnmth.c",0xc1);
    local_38 = (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    engine_table_doall(DAT_01782ea8,&LAB_00b2aa8c,&local_40);
    if (local_40 != (ENGINE *)0x0) {
      *(int *)(local_40 + 0x9c) = *(int *)(local_40 + 0x9c) + 1;
    }
    *pe = local_40;
    CRYPTO_THREAD_unlock(global_engine_lock);
  }
  return local_38;
}

