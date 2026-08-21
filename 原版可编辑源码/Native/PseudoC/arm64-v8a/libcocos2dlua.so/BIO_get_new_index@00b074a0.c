
undefined4 BIO_get_new_index(void)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01782de0,FUN_00b0752c);
  if ((iVar1 == 0) || (DAT_01782de4 == 0)) {
    ERR_put_error(0x20,0x66,0x41,"crypto/bio/bio_meth.c",0x1c);
    local_14 = 0xffffffff;
  }
  else {
    iVar1 = CRYPTO_atomic_add(&DAT_0176e398,1,&local_14,bio_type_lock);
    if (iVar1 == 0) {
      local_14 = 0xffffffff;
    }
  }
  return local_14;
}

