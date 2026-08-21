
void * CRYPTO_memdup(void *param_1,ulong param_2,char *param_3,int param_4)

{
  void *__dest;
  
  __dest = (void *)0x0;
  if ((param_1 != (void *)0x0) && (param_2 < 0x7fffffff)) {
    __dest = CRYPTO_malloc((int)param_2,param_3,param_4);
    if (__dest == (void *)0x0) {
      ERR_put_error(0xf,0x73,0x41,"crypto/o_str.c",0x45);
    }
    else {
      memcpy(__dest,param_1,param_2);
    }
  }
  return __dest;
}

