
void * _spCalloc(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  void *__s;
  size_t __n;
  
  __n = param_2 * param_1;
  if (DAT_017875e8 == (code *)0x0) {
    __s = (void *)(*(code *)PTR_malloc_01777060)(__n);
  }
  else {
    __s = (void *)(*DAT_017875e8)(__n,param_3,param_4);
  }
  if (__s != (void *)0x0) {
    memset(__s,0,__n);
  }
  return __s;
}

