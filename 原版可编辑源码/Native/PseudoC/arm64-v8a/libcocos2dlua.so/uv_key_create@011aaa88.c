
int uv_key_create(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_create(param_1,(__destr_function *)0x0);
  return -iVar1;
}

