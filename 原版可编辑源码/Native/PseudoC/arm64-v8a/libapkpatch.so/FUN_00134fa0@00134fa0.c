
bool FUN_00134fa0(FILE *param_1,void *param_2,void *param_3)

{
  size_t sVar1;
  size_t __n;
  
  do {
    if (param_3 <= param_2) {
      return param_2 == param_3;
    }
    __n = (long)param_3 - (long)param_2;
    if (0xfffff < __n) {
      __n = 0x100000;
    }
    sVar1 = fwrite(param_2,1,__n,param_1);
    param_2 = (void *)((long)param_2 + __n);
  } while (__n == sVar1);
  return false;
}

