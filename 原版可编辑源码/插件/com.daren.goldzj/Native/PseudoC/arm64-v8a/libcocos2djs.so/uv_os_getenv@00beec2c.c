
undefined8 uv_os_getenv(char *param_1,void *param_2,size_t *param_3)

{
  char *__s;
  size_t sVar1;
  undefined8 uVar2;
  
  if (((param_2 == (void *)0x0 || param_3 == (size_t *)0x0) || (param_1 == (char *)0x0)) ||
     (*param_3 == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    __s = getenv(param_1);
    if (__s == (char *)0x0) {
      uVar2 = 0xfffffffe;
    }
    else {
      sVar1 = strlen(__s);
      if (sVar1 < *param_3) {
        memcpy(param_2,__s,sVar1 + 1);
        *param_3 = sVar1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffff97;
        *param_3 = sVar1 + 1;
      }
    }
  }
  return uVar2;
}

