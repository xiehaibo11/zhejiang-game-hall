
int RSA_up_ref(RSA *r)

{
  int iVar1;
  int local_14;
  
  iVar1 = CRYPTO_atomic_add(&(r->ex_data).dummy,1,&local_14,r->mt_blinding);
  return (uint)(0 < iVar1 && 1 < local_14);
}

