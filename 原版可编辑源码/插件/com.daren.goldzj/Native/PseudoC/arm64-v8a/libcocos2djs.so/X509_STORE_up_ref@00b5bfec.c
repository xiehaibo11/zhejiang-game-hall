
bool X509_STORE_up_ref(long param_1)

{
  int iVar1;
  int local_14;
  
  iVar1 = CRYPTO_atomic_add(param_1 + 0x88,1,&local_14,*(undefined8 *)(param_1 + 0x90));
  return 0 < iVar1 && 1 < local_14;
}

