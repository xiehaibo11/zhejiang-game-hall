
undefined8
FUN_00e2084c(long *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,undefined8 *param_5)

{
  size_t __n;
  size_t __n_00;
  undefined8 uVar1;
  void *__s;
  
  __n_00 = strlen(param_3);
  __n = __n_00 + 6;
  if ((long)__n < 0x80000000) {
    if ((long)__n < 1) {
      if (__n != 0) {
        return 6;
      }
      __s = (void *)0x0;
    }
    else {
      __s = (void *)(**(code **)(*param_1 + 8))(*param_1,__n);
      if (__s == (void *)0x0) {
        return 0x40;
      }
      memset(__s,0,__n);
    }
    memcpy(__s,param_3,__n_00);
    uVar1 = 0;
    *(undefined2 *)((undefined4 *)((long)__s + __n_00) + 1) = 99;
    *(undefined4 *)((long)__s + __n_00) = 0x7273722f;
    *param_4 = __s;
    *param_5 = 0;
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}

