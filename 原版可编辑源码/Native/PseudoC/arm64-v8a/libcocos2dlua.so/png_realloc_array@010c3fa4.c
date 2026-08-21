
void * png_realloc_array(long param_1,void *param_2,uint param_3,uint param_4,ulong param_5)

{
  ulong uVar1;
  void *__dest;
  size_t __size;
  
  if (((((int)param_3 < 0) || ((int)param_4 < 1)) || (param_5 == 0)) ||
     ((param_2 == (void *)0x0 && (0 < (int)param_3)))) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error: array realloc");
  }
  if ((int)param_4 <= (int)(0x7fffffff - param_3)) {
    uVar1 = 0;
    if (param_5 != 0) {
      uVar1 = 0xffffffffffffffff / param_5;
    }
    if (((ulong)(long)(int)(param_4 + param_3) <= uVar1) &&
       (__size = (long)(int)(param_4 + param_3) * param_5, __size != 0)) {
      if ((param_1 == 0) || (*(code **)(param_1 + 0x460) == (code *)0x0)) {
        __dest = malloc(__size);
      }
      else {
        __dest = (void *)(**(code **)(param_1 + 0x460))(param_1,__size);
      }
      if (__dest == (void *)0x0) {
        return (void *)0x0;
      }
      if (0 < (int)param_3) {
        memcpy(__dest,param_2,param_3 * param_5);
      }
      memset((void *)((long)__dest + param_3 * param_5),0,param_4 * param_5);
      return __dest;
    }
  }
  return (void *)0x0;
}

