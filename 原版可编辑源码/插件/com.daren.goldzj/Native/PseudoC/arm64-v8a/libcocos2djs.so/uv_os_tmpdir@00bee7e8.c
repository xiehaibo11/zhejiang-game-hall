
undefined8 uv_os_tmpdir(void *param_1,size_t *param_2)

{
  char *__s;
  size_t sVar1;
  
  if (((param_1 == (void *)0x0) || (param_2 == (size_t *)0x0)) || (*param_2 == 0)) {
    return 0xffffffea;
  }
  __s = getenv("TMPDIR");
  if (((__s == (char *)0x0) && (__s = getenv("TMP"), __s == (char *)0x0)) &&
     ((__s = getenv("TEMP"), __s == (char *)0x0 && (__s = getenv("TEMPDIR"), __s == (char *)0x0))))
  {
    sVar1 = 0xf;
    if (*param_2 < 0x10) {
LAB_00bee8f4:
      *param_2 = sVar1 + 1;
      return 0xffffff97;
    }
    __s = "/data/local/tmp";
  }
  else {
    sVar1 = strlen(__s);
    if (*param_2 <= sVar1) goto LAB_00bee8f4;
    if (sVar1 < 2) goto LAB_00bee854;
  }
  if (__s[sVar1 - 1] == '/') {
    sVar1 = sVar1 - 1;
  }
LAB_00bee854:
  memcpy(param_1,__s,sVar1 + 1);
  *(undefined1 *)((long)param_1 + sVar1) = 0;
  *param_2 = sVar1;
  return 0;
}

