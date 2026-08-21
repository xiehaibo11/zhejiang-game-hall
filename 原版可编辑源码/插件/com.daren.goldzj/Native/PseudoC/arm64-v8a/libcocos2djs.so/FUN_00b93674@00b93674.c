
void * FUN_00b93674(long param_1)

{
  int iVar1;
  void *ptr;
  
  ptr = CRYPTO_malloc(0x18,"crypto/conf/conf_def.c",0x52);
  if ((ptr != (void *)0x0) && (iVar1 = (**(code **)(param_1 + 0x10))(ptr), iVar1 == 0)) {
    CRYPTO_free(ptr);
    ptr = (void *)0x0;
  }
  return ptr;
}

