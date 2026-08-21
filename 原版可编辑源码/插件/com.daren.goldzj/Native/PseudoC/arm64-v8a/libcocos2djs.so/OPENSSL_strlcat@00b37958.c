
long OPENSSL_strlcat(char *param_1,char *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    lVar2 = 0;
    do {
      if (*param_1 == '\0') {
        uVar3 = param_3 + lVar2;
        lVar4 = 0;
        lVar5 = -lVar2;
        if (uVar3 < 2) goto LAB_00b379ec;
        lVar4 = 0;
        goto LAB_00b379b4;
      }
      lVar2 = lVar2 + -1;
      param_1 = param_1 + 1;
    } while (param_3 + lVar2 != 0);
    lVar4 = 0;
    lVar5 = -lVar2;
  }
  goto LAB_00b379f0;
  while( true ) {
    uVar3 = uVar3 - 1;
    param_1[lVar4] = param_2[lVar4];
    lVar4 = lVar4 + 1;
    if (uVar3 < 2) break;
LAB_00b379b4:
    if (param_2[lVar4] == '\0') {
      param_2 = param_2 + lVar4;
      goto LAB_00b379e8;
    }
  }
  param_2 = param_2 + lVar4;
  if (param_3 + lVar2 != lVar4) {
LAB_00b379e8:
    param_1 = param_1 + lVar4;
LAB_00b379ec:
    *param_1 = '\0';
  }
LAB_00b379f0:
  sVar1 = strlen(param_2);
  return lVar4 + lVar5 + sVar1;
}

