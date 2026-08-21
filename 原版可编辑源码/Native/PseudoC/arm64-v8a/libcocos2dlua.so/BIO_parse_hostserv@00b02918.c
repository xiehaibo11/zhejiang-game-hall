
undefined8 BIO_parse_hostserv(char *param_1,long *param_2,long *param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  int reason;
  int line;
  size_t sVar6;
  
  if (*param_1 == '[') {
    pcVar2 = strchr(param_1,0x5d);
    if (pcVar2 == (char *)0x0) {
LAB_00b02a60:
      reason = 0x82;
      line = 0x223;
      goto LAB_00b02a78;
    }
    param_1 = param_1 + 1;
    sVar6 = (long)pcVar2 - (long)param_1;
    if (pcVar2[1] != '\0') {
      if (pcVar2[1] != ':') goto LAB_00b02a60;
      pcVar2 = pcVar2 + 2;
      sVar3 = strlen(pcVar2);
      bVar1 = true;
      goto LAB_00b02a50;
    }
    bVar1 = false;
    sVar3 = 0;
    pcVar2 = (char *)0x0;
    if (param_2 != (long *)0x0) goto LAB_00b02a00;
LAB_00b02ac8:
    if (!(bool)(param_3 != (long *)0x0 & bVar1)) {
      return 1;
    }
    if ((sVar3 == 0) || ((sVar3 == 1 && (*pcVar2 == '*')))) {
      *param_3 = 0;
      return 1;
    }
    lVar5 = CRYPTO_strndup(pcVar2,sVar3,"crypto/bio/b_addr.c",0x218);
    *param_3 = lVar5;
    if (lVar5 != 0) {
      return 1;
    }
  }
  else {
    pcVar4 = strrchr(param_1,0x3a);
    pcVar2 = strchr(param_1,0x3a);
    if (pcVar2 != pcVar4) {
      reason = 0x81;
      line = 0x220;
      goto LAB_00b02a78;
    }
    if (pcVar4 == (char *)0x0) {
      sVar6 = strlen(param_1);
      if (param_4 != 0) {
        pcVar2 = param_1;
        param_1 = (char *)0x0;
        sVar3 = sVar6;
        sVar6 = 0;
        goto LAB_00b02a38;
      }
      bVar1 = false;
      sVar3 = 0;
      pcVar2 = (char *)0x0;
    }
    else {
      sVar3 = strlen(pcVar4 + 1);
      pcVar2 = pcVar4 + 1;
      sVar6 = (long)pcVar4 - (long)param_1;
LAB_00b02a38:
      bVar1 = pcVar2 != (char *)0x0;
LAB_00b02a50:
      pcVar4 = strchr(pcVar2,0x3a);
      if (pcVar4 != (char *)0x0) goto LAB_00b02a60;
    }
    if (param_2 == (long *)0x0) goto LAB_00b02ac8;
LAB_00b02a00:
    if (param_1 == (char *)0x0) goto LAB_00b02ac8;
    if ((sVar6 == 0) || ((sVar6 == 1 && (*param_1 == '*')))) {
      *param_2 = 0;
      goto LAB_00b02ac8;
    }
    lVar5 = CRYPTO_strndup(param_1,sVar6,"crypto/bio/b_addr.c",0x20e);
    *param_2 = lVar5;
    if (lVar5 != 0) goto LAB_00b02ac8;
  }
  reason = 0x41;
  line = 0x226;
LAB_00b02a78:
  ERR_put_error(0x20,0x88,reason,"crypto/bio/b_addr.c",line);
  return 0;
}

