
int DH_up_ref(DH *dh)

{
  int iVar1;
  int local_14;
  
  iVar1 = CRYPTO_atomic_add(&dh->references,1,&local_14,dh->engine);
  return (uint)(0 < iVar1 && 1 < local_14);
}

