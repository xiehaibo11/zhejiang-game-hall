
undefined8 uv_os_tmpdir(void *param_1,size_t *param_2)

{
  undefined8 uVar1;
  char *__s;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  ulong uVar5;
  
  uVar1 = 0xffffffea;
  if ((param_1 != (void *)0x0) && (param_2 != (size_t *)0x0)) {
    uVar5 = *param_2;
    if (uVar5 == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      __s = getenv("TMPDIR");
      if (((__s == (char *)0x0) && (__s = getenv("TMP"), __s == (char *)0x0)) &&
         (__s = getenv("TEMP"), __s == (char *)0x0)) {
        pcVar2 = getenv("TEMPDIR");
        __s = "/data/local/tmp";
        if (pcVar2 != (char *)0x0) {
          __s = pcVar2;
        }
      }
      sVar3 = strlen(__s);
      if (sVar3 < uVar5) {
        sVar4 = sVar3;
        if ((1 < sVar3) && (sVar4 = sVar3 - 1, __s[sVar3 - 1] != '/')) {
          sVar4 = sVar3;
        }
        memcpy(param_1,__s,sVar4 + 1);
        uVar1 = 0;
        *(undefined1 *)((long)param_1 + sVar4) = 0;
        *param_2 = sVar4;
      }
      else {
        *param_2 = sVar3 + 1;
        uVar1 = 0xffffff97;
      }
    }
  }
  return uVar1;
}

