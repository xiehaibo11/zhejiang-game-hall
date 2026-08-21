
void * FUN_018365b4(size_t param_1,size_t param_2)

{
  void *__s;
  
  __s = calloc(param_1,param_2);
  if (__s == (void *)0x0) {
    __s = (void *)FUN_018364bc(param_2 * param_1);
    if (__s != (void *)0x0) {
      memset(__s,0,param_2 * param_1);
    }
  }
  return __s;
}

