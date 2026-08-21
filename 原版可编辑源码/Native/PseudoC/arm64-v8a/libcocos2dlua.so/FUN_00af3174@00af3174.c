
undefined8 FUN_00af3174(char *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  int line;
  ulong uVar6;
  undefined **ppuVar7;
  char *__s;
  
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
    ERR_put_error(0x14,0x135,0x16a,"ssl/d1_srtp.c",0x48);
LAB_00af32a0:
    uVar5 = 1;
  }
  else {
    do {
      pcVar3 = strchr(param_1,0x3a);
      if (pcVar3 == (char *)0x0) {
        sVar4 = strlen(param_1);
        uVar6 = (ulong)(int)sVar4;
        if (PTR_s_SRTP_AES128_CM_SHA1_80_0176c550 != (undefined *)0x0) goto LAB_00af31e8;
LAB_00af325c:
        iVar1 = 0x16c;
        line = 0x5d;
LAB_00af3274:
        ERR_put_error(0x14,0x135,iVar1,"ssl/d1_srtp.c",line);
        OPENSSL_sk_free(lVar2);
        goto LAB_00af32a0;
      }
      uVar6 = (long)pcVar3 - (long)param_1;
      if (PTR_s_SRTP_AES128_CM_SHA1_80_0176c550 == (undefined *)0x0) goto LAB_00af325c;
LAB_00af31e8:
      ppuVar7 = &PTR_s_SRTP_AES128_CM_SHA1_80_0176c550;
      __s = PTR_s_SRTP_AES128_CM_SHA1_80_0176c550;
      while ((sVar4 = strlen(__s), sVar4 != (uVar6 & 0xffffffff) ||
             (iVar1 = strncmp(__s,param_1,uVar6 & 0xffffffff), iVar1 != 0))) {
        ppuVar7 = ppuVar7 + 2;
        __s = *ppuVar7;
        if (__s == (char *)0x0) goto LAB_00af325c;
      }
      iVar1 = OPENSSL_sk_find(lVar2,ppuVar7);
      if (-1 < iVar1) {
        iVar1 = 0x161;
        line = 0x52;
        goto LAB_00af3274;
      }
      iVar1 = OPENSSL_sk_push(lVar2,ppuVar7);
      if (iVar1 == 0) {
        iVar1 = 0x16a;
        line = 0x58;
        goto LAB_00af3274;
      }
      param_1 = pcVar3 + 1;
    } while (pcVar3 != (char *)0x0);
    OPENSSL_sk_free(*param_2);
    uVar5 = 0;
    *param_2 = lVar2;
  }
  return uVar5;
}

