
undefined4 BIO_get_new_index(void)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01d39060,FUN_00af80ac);
  if ((iVar1 == 0) || (DAT_01d39064 == 0)) {
    ERR_put_error(0x20,0x66,0x41,"crypto/bio/bio_meth.c",0x1c);
    local_14 = 0xffffffff;
  }
  else {
    iVar1 = CRYPTO_atomic_add(&DAT_01d20148,1,&local_14,bio_type_lock);
    if (iVar1 == 0) {
      local_14 = 0xffffffff;
    }
  }
  return local_14;
}

