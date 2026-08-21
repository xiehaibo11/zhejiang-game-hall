
undefined8 uv_os_getenv(char *param_1,void *param_2,size_t *param_3)

{
  undefined8 uVar1;
  char *__s;
  size_t sVar2;
  ulong uVar3;
  
  uVar1 = 0xffffffea;
  if (((param_1 != (char *)0x0) && (param_2 != (void *)0x0)) && (param_3 != (size_t *)0x0)) {
    uVar3 = *param_3;
    if (uVar3 == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      __s = getenv(param_1);
      if (__s == (char *)0x0) {
        uVar1 = 0xfffffffe;
      }
      else {
        sVar2 = strlen(__s);
        if (sVar2 < uVar3) {
          memcpy(param_2,__s,sVar2 + 1);
          uVar1 = 0;
          *param_3 = sVar2;
        }
        else {
          *param_3 = sVar2 + 1;
          uVar1 = 0xffffff97;
        }
      }
    }
  }
  return uVar1;
}

