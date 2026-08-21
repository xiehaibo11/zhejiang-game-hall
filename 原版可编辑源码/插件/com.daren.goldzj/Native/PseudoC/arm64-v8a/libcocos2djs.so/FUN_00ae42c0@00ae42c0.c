
undefined8 FUN_00ae42c0(char *param_1,long *param_2)

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
  
                    /* try { // try from 00ae42c8 to 00be42db has its CatchHandler @ 00ae434c */
                    /* try { // try from 00ae42e0 to 00be42f3 has its CatchHandler @ 00ae435c */
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
    ERR_put_error(0x14,0x135,0x16a,"ssl/d1_srtp.c",0x48);
LAB_00ae43ec:
    uVar5 = 1;
  }
  else {
                    /* try { // try from 00ae42f4 to 00be4397 has its CatchHandler @ 00ae41c0 */
    do {
      pcVar3 = strchr(param_1,0x3a);
      if (pcVar3 == (char *)0x0) {
        sVar4 = strlen(param_1);
        uVar6 = (ulong)(int)sVar4;
        if (PTR_s_SRTP_AES128_CM_SHA1_80_01d1e300 != (undefined *)0x0) goto LAB_00ae4334;
LAB_00ae43a8:
        iVar1 = 0x16c;
        line = 0x5d;
LAB_00ae43c0:
        ERR_put_error(0x14,0x135,iVar1,"ssl/d1_srtp.c",line);
        OPENSSL_sk_free(lVar2);
        goto LAB_00ae43ec;
      }
      uVar6 = (long)pcVar3 - (long)param_1;
      if (PTR_s_SRTP_AES128_CM_SHA1_80_01d1e300 == (undefined *)0x0) goto LAB_00ae43a8;
LAB_00ae4334:
      ppuVar7 = &PTR_s_SRTP_AES128_CM_SHA1_80_01d1e300;
      __s = PTR_s_SRTP_AES128_CM_SHA1_80_01d1e300;
                    /* catch() { ... } // from try @ 00ae42c8 with catch @ 00ae434c */
                    /* catch() { ... } // from try @ 00ae42e0 with catch @ 00ae435c */
      while ((sVar4 = strlen(__s), sVar4 != (uVar6 & 0xffffffff) ||
             (iVar1 = strncmp(__s,param_1,uVar6 & 0xffffffff), iVar1 != 0))) {
        ppuVar7 = ppuVar7 + 2;
        __s = *ppuVar7;
        if (__s == (char *)0x0) goto LAB_00ae43a8;
      }
      iVar1 = OPENSSL_sk_find(lVar2,ppuVar7);
      if (-1 < iVar1) {
        iVar1 = 0x161;
        line = 0x52;
        goto LAB_00ae43c0;
      }
      iVar1 = OPENSSL_sk_push(lVar2,ppuVar7);
      if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00ae4490 with catch @ 00ae4438 */
        iVar1 = 0x16a;
        line = 0x58;
        goto LAB_00ae43c0;
      }
      param_1 = pcVar3 + 1;
    } while (pcVar3 != (char *)0x0);
    OPENSSL_sk_free(*param_2);
    uVar5 = 0;
    *param_2 = lVar2;
  }
  return uVar5;
}

