
void * FUN_0104b1cc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 != 0) {
    pvVar1 = realloc(param_1,param_2);
    return pvVar1;
  }
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return (void *)0x0;
}

