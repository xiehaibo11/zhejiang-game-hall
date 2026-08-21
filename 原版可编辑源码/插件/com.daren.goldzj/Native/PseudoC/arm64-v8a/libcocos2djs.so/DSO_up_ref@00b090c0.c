
int DSO_up_ref(DSO *dso)

{
  int iVar1;
  int local_14;
  
  if (dso == (DSO *)0x0) {
    ERR_put_error(0x25,0x72,0x43,"crypto/dso/dso_lib.c",0x6a);
  }
  else {
    iVar1 = CRYPTO_atomic_add(&dso->references,1,&local_14,dso->loaded_filename);
    if (0 < iVar1) {
      return (uint)(1 < local_14);
    }
  }
  return 0;
}

