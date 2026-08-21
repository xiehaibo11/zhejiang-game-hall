
undefined8
FUN_01063418(long *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,undefined8 *param_5)

{
  size_t __n;
  size_t __n_00;
  undefined8 uVar1;
  void *__s;
  
                    /* try { // try from 01063424 to 0116343b has its CatchHandler @ 01063724 */
                    /* try { // try from 0106343c to 011635cf has its CatchHandler @ 010633b0 */
  __n_00 = strlen(param_3);
  if ((long)__n_00 < 0x7fffffee) {
    __n = __n_00 + 0x12;
    if ((long)__n_00 < -0x11) {
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
    builtin_strncpy((char *)((long)__s + __n_00),"/..namedfork/rsrc",0x12);
    *param_4 = __s;
    *param_5 = 0;
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}

