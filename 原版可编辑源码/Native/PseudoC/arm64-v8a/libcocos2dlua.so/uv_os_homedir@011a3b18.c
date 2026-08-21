
undefined8 uv_os_homedir(void *param_1,size_t *param_2)

{
  undefined8 uVar1;
  char *__s;
  size_t sVar2;
  ulong uVar3;
  undefined8 local_68 [4];
  char *local_48;
  
  uVar1 = 0xffffffea;
  if ((param_1 != (void *)0x0) && (param_2 != (size_t *)0x0)) {
    uVar3 = *param_2;
    if (uVar3 == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      __s = getenv("HOME");
      if (__s == (char *)0x0) {
        uVar1 = FUN_011a3cc8(local_68);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        sVar2 = strlen(local_48);
        if (sVar2 < *param_2) {
          memcpy(param_1,local_48,sVar2 + 1);
          *param_2 = sVar2;
          FUN_0119f27c(local_68[0]);
          return 0;
        }
        *param_2 = sVar2 + 1;
        FUN_0119f27c(local_68[0]);
      }
      else {
        sVar2 = strlen(__s);
        if (sVar2 < uVar3) {
          memcpy(param_1,__s,sVar2 + 1);
          *param_2 = sVar2;
          return 0;
        }
        *param_2 = sVar2 + 1;
      }
      uVar1 = 0xffffff97;
    }
  }
  return uVar1;
}

