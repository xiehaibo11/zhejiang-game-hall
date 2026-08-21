
stack_st_CONF_VALUE * X509V3_parse_list(char *line)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *ptr;
  size_t sVar4;
  size_t sVar5;
  byte *pbVar6;
  byte *name;
  byte *__s;
  uint uVar7;
  stack_st_CONF_VALUE *local_58;
  
  local_58 = (stack_st_CONF_VALUE *)0x0;
  ptr = (byte *)CRYPTO_strdup(line,"crypto/x509v3/v3_utl.c",0xfb);
  if (ptr != (byte *)0x0) {
    name = (byte *)0x0;
    iVar2 = 1;
    __s = ptr;
    pbVar6 = ptr;
LAB_00b765a0:
    do {
      while( true ) {
        uVar7 = (uint)*pbVar6;
        if ((*pbVar6 < 0xe) && ((1 << (ulong)(uVar7 & 0x1f) & 0x2401U) != 0)) {
          uVar7 = (uint)*__s;
          if (*__s == 0) goto LAB_00b7675c;
          goto LAB_00b76748;
        }
        if (iVar2 != 2) break;
        if (uVar7 == 0x2c) {
          *pbVar6 = 0;
          uVar7 = (uint)*__s;
          if (uVar7 != 0) {
            while (iVar2 = isspace(uVar7), iVar2 != 0) {
              __s = __s + 1;
              uVar7 = (uint)*__s;
              if (uVar7 == 0) goto LAB_00b766a8;
            }
            sVar4 = strlen((char *)__s);
            do {
              sVar5 = sVar4;
              if (sVar5 - 1 == 0) goto LAB_00b764cc;
              iVar2 = isspace((uint)__s[sVar5 - 1]);
              sVar4 = sVar5 - 1;
            } while (iVar2 != 0);
            __s[sVar5] = 0;
            uVar7 = (uint)*__s;
LAB_00b764cc:
            if ((__s != (byte *)0x0) && (uVar7 != 0)) {
              X509V3_add_value((char *)name,(char *)__s,&local_58);
              name = (byte *)0x0;
              __s = pbVar6 + 1;
              goto LAB_00b76598;
            }
          }
LAB_00b766a8:
          iVar2 = 0x6d;
          iVar3 = 0x126;
          goto LAB_00b766f8;
        }
        iVar2 = 2;
        pbVar6 = pbVar6 + 1;
      }
      if (iVar2 != 1) {
LAB_00b764b8:
        pbVar6 = pbVar6 + 1;
        goto LAB_00b765a0;
      }
      if (uVar7 == 0x2c) {
        *pbVar6 = 0;
        uVar7 = (uint)*__s;
        name = __s;
        if (uVar7 != 0) {
          while (iVar2 = isspace(uVar7), iVar2 != 0) {
            uVar7 = (uint)name[1];
            name = name + 1;
            if (uVar7 == 0) goto LAB_00b766e0;
          }
          sVar4 = strlen((char *)name);
          do {
            sVar5 = sVar4;
            if (sVar5 - 1 == 0) goto LAB_00b76578;
            iVar2 = isspace((uint)name[sVar5 - 1]);
            sVar4 = sVar5 - 1;
          } while (iVar2 != 0);
          name[sVar5] = 0;
          uVar7 = (uint)*name;
LAB_00b76578:
          if ((name != (byte *)0x0) && (uVar7 != 0)) {
            __s = pbVar6 + 1;
            X509V3_add_value((char *)name,(char *)0x0,&local_58);
            goto LAB_00b76598;
          }
        }
LAB_00b766e0:
        iVar2 = 0x6c;
        iVar3 = 0x118;
        goto LAB_00b766f8;
      }
      if (uVar7 != 0x3a) {
LAB_00b76598:
        iVar2 = 1;
        goto LAB_00b764b8;
      }
      *pbVar6 = 0;
      bVar1 = *__s;
      name = __s;
      while( true ) {
        uVar7 = (uint)bVar1;
        if (uVar7 == 0) goto LAB_00b766c4;
        iVar2 = isspace(uVar7);
        if (iVar2 == 0) break;
        name = name + 1;
        bVar1 = *name;
      }
      sVar4 = strlen((char *)name);
      do {
        sVar5 = sVar4;
        if (sVar5 - 1 == 0) goto LAB_00b76528;
        iVar2 = isspace((uint)name[sVar5 - 1]);
        sVar4 = sVar5 - 1;
      } while (iVar2 != 0);
      name[sVar5] = 0;
      uVar7 = (uint)*name;
LAB_00b76528:
      if ((name == (byte *)0x0) || (uVar7 == 0)) goto LAB_00b766c4;
      __s = pbVar6 + 1;
      iVar2 = 2;
      pbVar6 = pbVar6 + 1;
    } while( true );
  }
  iVar2 = 0x41;
  iVar3 = 0xfd;
  goto LAB_00b766f8;
  while( true ) {
    __s = __s + 1;
    uVar7 = (uint)*__s;
    if (uVar7 == 0) break;
LAB_00b76748:
    iVar3 = isspace(uVar7);
    if (iVar3 == 0) {
      sVar4 = strlen((char *)__s);
      goto LAB_00b76784;
    }
  }
LAB_00b7675c:
  pbVar6 = (byte *)0x0;
  goto joined_r0x00b767bc;
LAB_00b766c4:
  iVar2 = 0x6c;
  iVar3 = 0x10e;
  goto LAB_00b766f8;
  while (iVar3 = isspace((uint)__s[sVar5 - 1]), sVar4 = sVar5 - 1, iVar3 != 0) {
LAB_00b76784:
    sVar5 = sVar4;
    if (sVar5 - 1 == 0) goto LAB_00b767b0;
  }
  __s[sVar5] = 0;
  uVar7 = (uint)*__s;
LAB_00b767b0:
  pbVar6 = (byte *)0x0;
  if (uVar7 != 0) {
    pbVar6 = __s;
  }
joined_r0x00b767bc:
  if (iVar2 == 2) {
    if (pbVar6 != (byte *)0x0) {
LAB_00b767d0:
      X509V3_add_value((char *)name,(char *)pbVar6,&local_58);
      CRYPTO_free(ptr);
      return local_58;
    }
    iVar2 = 0x6d;
    iVar3 = 0x135;
  }
  else {
    if (pbVar6 != (byte *)0x0) {
      name = pbVar6;
      pbVar6 = (byte *)0x0;
      goto LAB_00b767d0;
    }
    iVar2 = 0x6c;
    iVar3 = 0x13c;
  }
LAB_00b766f8:
  ERR_put_error(0x22,0x6d,iVar2,"crypto/x509v3/v3_utl.c",iVar3);
  CRYPTO_free(ptr);
  OPENSSL_sk_pop_free(local_58,X509V3_conf_free);
  return (stack_st_CONF_VALUE *)0x0;
}

