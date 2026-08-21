
void * ENGINE_get_ex_data(ENGINE *e,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(e + 0xa8),idx);
  return pvVar1;
}

