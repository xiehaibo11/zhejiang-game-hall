
long OPENSSL_strlcpy(undefined1 *param_1,char *param_2,ulong param_3)

{
  size_t sVar1;
  long lVar2;
  
  if (param_3 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      if (param_2[lVar2] == '\0') {
        param_2 = param_2 + lVar2;
        param_1 = param_1 + lVar2;
        goto LAB_00b3793c;
      }
      param_3 = param_3 - 1;
      param_1[lVar2] = param_2[lVar2];
      lVar2 = lVar2 + 1;
    } while (1 < param_3);
    param_2 = param_2 + lVar2;
    param_1 = param_1 + lVar2;
  }
  if (param_3 != 0) {
LAB_00b3793c:
    *param_1 = 0;
  }
  sVar1 = strlen(param_2);
  return sVar1 + lVar2;
}

