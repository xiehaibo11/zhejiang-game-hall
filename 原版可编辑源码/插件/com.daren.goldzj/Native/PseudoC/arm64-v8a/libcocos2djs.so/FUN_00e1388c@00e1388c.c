
void * FUN_00e1388c(long param_1,size_t param_2,undefined4 *param_3)

{
  void *__s;
  undefined4 uVar1;
  
  if ((long)param_2 < 1) {
    __s = (void *)0x0;
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 6;
    }
  }
  else {
    __s = (void *)(**(code **)(param_1 + 8))();
    if (__s == (void *)0x0) {
      uVar1 = 0x40;
    }
    else {
      memset(__s,0,param_2);
      uVar1 = 0;
    }
  }
  *param_3 = uVar1;
  return __s;
}

