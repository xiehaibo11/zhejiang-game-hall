
undefined8 openssl_strerror_r(int param_1,char *param_2,ulong param_3)

{
  undefined8 uVar1;
  char *__src;
  
  if (param_3 < 2) {
    uVar1 = 0;
  }
  else {
    __src = strerror(param_1);
    uVar1 = 0;
    if (__src != (char *)0x0) {
      strncpy(param_2,__src,param_3 - 1);
      uVar1 = 1;
      param_2[param_3 - 1] = '\0';
    }
  }
  return uVar1;
}

