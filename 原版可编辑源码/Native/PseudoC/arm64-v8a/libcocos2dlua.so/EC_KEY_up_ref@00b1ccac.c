
int EC_KEY_up_ref(EC_KEY *key)

{
  int iVar1;
  int local_14;
  
  iVar1 = CRYPTO_atomic_add(key + 0x38,1,&local_14,*(undefined8 *)(key + 0x48));
  return (uint)(0 < iVar1 && 1 < local_14);
}

