
bool SSL_up_ref(long param_1)

{
  int iVar1;
  int local_14;
  
  iVar1 = CRYPTO_atomic_add(param_1 + 0x1e0,1,&local_14,*(undefined8 *)(param_1 + 0x1150));
  return 0 < iVar1 && 1 < local_14;
}

