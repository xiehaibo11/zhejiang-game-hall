
int DSA_up_ref(DSA *r)

{
  int iVar1;
  int local_14;
  
  iVar1 = CRYPTO_atomic_add(&r->r,1,&local_14,(r->ex_data).sk);
  return (uint)(0 < iVar1 && 1 < local_14);
}

