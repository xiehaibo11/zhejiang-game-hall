
undefined8 X509_check_email(undefined8 param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  size_t __n;
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  
                    /* try { // try from 00b865d4 to 00c8660f has its CatchHandler @ 00b865d4
                       catch() { ... } // from try @ 00b865d4 with catch @ 00b865d4
                       catch() { ... } // from try @ 00b8665c with catch @ 00b865d4 */
  if (param_2 == (char *)0x0) {
                    /* try { // try from 00b86610 to 00c8665b has its CatchHandler @ 00b86694 */
    return 0xfffffffe;
  }
  if (param_3 == 0) {
    param_3 = strlen(param_2);
  }
  else {
    __n = param_3 - 1;
    if (__n == 0) {
      __n = 1;
    }
    pvVar1 = memchr(param_2,0,__n);
    if (pvVar1 != (void *)0x0) {
      return 0xfffffffe;
    }
  }
  uVar3 = param_3;
  if ((1 < param_3) && (uVar3 = param_3 - 1, param_2[param_3 - 1] != '\0')) {
    uVar3 = param_3;
  }
                    /* try { // try from 00b8665c to 00c866af has its CatchHandler @ 00b865d4 */
  uVar2 = FUN_00b860e0(param_1,param_2,uVar3,param_4,1,0);
  return uVar2;
}

