
long FUN_00bd95e4(BIO *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  undefined8 *ptr;
  byte *__s;
  byte *__s_00;
  byte local_460 [1024];
  
  lVar6 = OPENSSL_sk_new(&LAB_00bd9fec);
  if (lVar6 == 0) {
    return 0;
  }
  ptr = (undefined8 *)0x0;
LAB_00bd9638:
  iVar4 = BIO_gets(param_1,(char *)local_460,0x400);
  if (iVar4 < 1) {
    return lVar6;
  }
  if ((ptr == (undefined8 *)0x0) || (iVar4 = isspace((uint)local_460[0]), iVar4 == 0)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 3;
  }
  __s_00 = (byte *)0x0;
  lVar8 = 0;
  __s = local_460;
LAB_00bd98d4:
  while( true ) {
    pbVar1 = local_460 + lVar8;
    bVar2 = *pbVar1;
    if ((bVar2 < 0xe) && ((1 << (ulong)(bVar2 & 0x1f) & 0x2401U) != 0)) break;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(iVar4) {
    case 2:
      if (bVar2 == 0x3a) {
        *pbVar1 = 0;
        uVar5 = (uint)*__s;
        __s_00 = __s;
        if (*__s != 0) {
          do {
            if (uVar5 == 0x22) {
              __s_00 = __s_00 + 1;
              if (*__s_00 != 0) {
LAB_00bd9a78:
                sVar7 = strlen((char *)__s_00);
                if (__s_00 <= __s_00 + (sVar7 - 1)) goto LAB_00bd9ad4;
              }
              break;
            }
            iVar4 = isspace(uVar5);
            if (iVar4 == 0) {
              if (__s_00 != (byte *)0x0) goto LAB_00bd9a78;
              goto LAB_00bd96a0;
            }
            __s_00 = __s_00 + 1;
            uVar5 = (uint)*__s_00;
          } while (uVar5 != 0);
        }
        __s_00 = (byte *)0x0;
        goto LAB_00bd96a0;
      }
      iVar4 = 1;
      lVar8 = lVar8 + 1;
      break;
    case 3:
      if (bVar2 == 0x28) {
        iVar4 = 6;
        lVar8 = lVar8 + 1;
      }
      else {
        if (bVar2 == 0x3b) {
          *pbVar1 = 0;
          uVar5 = (uint)*__s;
          if (*__s != 0) {
            do {
              if (uVar5 == 0x22) {
                __s = __s + 1;
                if (*__s != 0) {
LAB_00bd9744:
                  sVar7 = strlen((char *)__s);
                  if (__s <= __s + (sVar7 - 1)) goto LAB_00bd9764;
                }
                break;
              }
              iVar4 = isspace(uVar5);
              if (iVar4 == 0) {
                if (__s != (byte *)0x0) goto LAB_00bd9744;
                goto LAB_00bd9874;
              }
              __s = __s + 1;
              uVar5 = (uint)*__s;
            } while (uVar5 != 0);
          }
          __s = (byte *)0x0;
          goto LAB_00bd9874;
        }
        iVar4 = 2;
        lVar8 = lVar8 + 1;
      }
      break;
    case 4:
      if (bVar2 == 0x3d) {
        *pbVar1 = 0;
        uVar5 = (uint)*__s;
        __s_00 = __s;
        if (*__s != 0) {
          do {
            if (uVar5 == 0x22) {
              __s_00 = __s_00 + 1;
              if (*__s_00 != 0) {
LAB_00bd9aa4:
                sVar7 = strlen((char *)__s_00);
                if (__s_00 <= __s_00 + (sVar7 - 1)) goto LAB_00bd96b8;
              }
              break;
            }
            iVar4 = isspace(uVar5);
            if (iVar4 == 0) {
              if (__s_00 != (byte *)0x0) goto LAB_00bd9aa4;
              goto LAB_00bd9728;
            }
            __s_00 = __s_00 + 1;
            uVar5 = (uint)*__s_00;
          } while (uVar5 != 0);
        }
        __s_00 = (byte *)0x0;
        goto LAB_00bd9728;
      }
      iVar4 = 3;
      lVar8 = lVar8 + 1;
      break;
    default:
      goto switchD_00bd9904_default;
    }
  }
  if (iVar4 == 2) {
    for (; bVar2 = *__s, bVar2 != 0; __s = __s + 1) {
      if (bVar2 == 0x22) {
        __s = __s + 1;
        if (*__s != 0) {
LAB_00bd9b6c:
          sVar7 = strlen((char *)__s);
          if (__s <= __s + (sVar7 - 1)) goto LAB_00bd9bf8;
        }
        break;
      }
      iVar4 = isspace((uint)bVar2);
      if (iVar4 == 0) {
        if (__s != (byte *)0x0) goto LAB_00bd9b6c;
        goto LAB_00bd9c7c;
      }
    }
    __s = (byte *)0x0;
    goto LAB_00bd9c7c;
  }
  if (iVar4 == 4) {
    for (; bVar2 = *__s, bVar2 != 0; __s = __s + 1) {
      if (bVar2 == 0x22) {
        __s = __s + 1;
        if (*__s != 0) {
LAB_00bd9b98:
          sVar7 = strlen((char *)__s);
          lVar3 = sVar7 - 1;
          goto joined_r0x00bd9bb4;
        }
        break;
      }
      iVar4 = isspace((uint)bVar2);
      if (iVar4 == 0) {
        if (__s != (byte *)0x0) goto LAB_00bd9b98;
        goto LAB_00bd9c48;
      }
    }
    __s = (byte *)0x0;
    goto LAB_00bd9c48;
  }
  goto joined_r0x00bd9c58;
joined_r0x00bd9bb4:
  if (__s + lVar3 < __s) goto LAB_00bd9c3c;
  if (__s[sVar7 - 1] == 0x22) {
    if (sVar7 != 2) {
      __s[sVar7 - 1] = 0;
      goto LAB_00bd9c48;
    }
    goto LAB_00bd9c3c;
  }
  iVar4 = isspace((uint)__s[sVar7 - 1]);
  if (iVar4 == 0) goto LAB_00bd9c48;
  lVar3 = sVar7 - 2;
  __s[sVar7 - 1] = 0;
  sVar7 = sVar7 - 1;
  goto joined_r0x00bd9bb4;
LAB_00bd9c3c:
  __s = (byte *)0x0;
LAB_00bd9c48:
  FUN_00bda170(ptr,__s_00,__s);
joined_r0x00bd9c58:
  if (lVar8 == 0) {
    return lVar6;
  }
  goto LAB_00bd9638;
switchD_00bd9904_default:
  lVar8 = lVar8 + 1;
  goto LAB_00bd98d4;
  while( true ) {
    iVar4 = isspace((uint)__s_00[sVar7 - 1]);
    if (iVar4 == 0) goto LAB_00bd9728;
    lVar3 = sVar7 - 2;
    __s_00[sVar7 - 1] = 0;
    sVar7 = sVar7 - 1;
    if (__s_00 + lVar3 < __s_00) break;
LAB_00bd96b8:
    if (__s_00[sVar7 - 1] == 0x22) {
      if (sVar7 == 2) {
        __s_00 = (byte *)0x0;
      }
      else {
        __s_00[sVar7 - 1] = 0;
      }
      goto LAB_00bd9728;
    }
  }
  __s_00 = (byte *)0x0;
LAB_00bd9728:
  __s = local_460 + lVar8 + 1;
  iVar4 = 4;
  lVar8 = lVar8 + 1;
  goto LAB_00bd98d4;
  while( true ) {
    iVar4 = isspace((uint)__s[sVar7 - 1]);
    if (iVar4 == 0) goto LAB_00bd9874;
    lVar3 = sVar7 - 2;
    __s[sVar7 - 1] = 0;
    sVar7 = sVar7 - 1;
    if (__s + lVar3 < __s) break;
LAB_00bd9764:
    if (__s[sVar7 - 1] == 0x22) {
      if (sVar7 != 2) {
        __s[sVar7 - 1] = 0;
        goto LAB_00bd9874;
      }
      break;
    }
  }
  __s = (byte *)0x0;
LAB_00bd9874:
  ptr = (undefined8 *)FUN_00bda028(__s_00,__s);
  if (ptr == (undefined8 *)0x0) goto LAB_00bd9cf8;
  iVar4 = OPENSSL_sk_push(lVar6,ptr);
  if (iVar4 == 0) goto LAB_00bd9ca8;
  __s_00 = (byte *)0x0;
  __s = local_460 + lVar8 + 1;
  iVar4 = 3;
  lVar8 = lVar8 + 1;
  goto LAB_00bd98d4;
  while( true ) {
    iVar4 = isspace((uint)__s_00[sVar7 - 1]);
    if (iVar4 == 0) goto LAB_00bd96a0;
    lVar3 = sVar7 - 2;
    __s_00[sVar7 - 1] = 0;
    sVar7 = sVar7 - 1;
    if (__s_00 + lVar3 < __s_00) break;
LAB_00bd9ad4:
    if (__s_00[sVar7 - 1] == 0x22) {
      if (sVar7 == 2) {
        __s_00 = (byte *)0x0;
      }
      else {
        __s_00[sVar7 - 1] = 0;
      }
      goto LAB_00bd96a0;
    }
  }
  __s_00 = (byte *)0x0;
LAB_00bd96a0:
  __s = local_460 + lVar8 + 1;
  iVar4 = 2;
  lVar8 = lVar8 + 1;
  goto LAB_00bd98d4;
  while( true ) {
    iVar4 = isspace((uint)__s[sVar7 - 1]);
    if (iVar4 == 0) goto LAB_00bd9c7c;
    lVar3 = sVar7 - 2;
    __s[sVar7 - 1] = 0;
    sVar7 = sVar7 - 1;
    if (__s + lVar3 < __s) break;
LAB_00bd9bf8:
    if (__s[sVar7 - 1] == 0x22) {
      if (sVar7 != 2) {
        __s[sVar7 - 1] = 0;
        goto LAB_00bd9c7c;
      }
      break;
    }
  }
  __s = (byte *)0x0;
LAB_00bd9c7c:
  ptr = (undefined8 *)FUN_00bda028(__s_00,__s);
  if (ptr != (undefined8 *)0x0) {
    iVar4 = OPENSSL_sk_push(lVar6,ptr);
    if (iVar4 != 0) goto joined_r0x00bd9c58;
LAB_00bd9ca8:
    CRYPTO_free((void *)*ptr);
    CRYPTO_free((void *)ptr[1]);
    if (ptr[2] != 0) {
      OPENSSL_sk_pop_free(ptr[2],FUN_00bda2dc);
    }
    CRYPTO_free(ptr);
  }
LAB_00bd9cf8:
  OPENSSL_sk_pop_free(lVar6,FUN_00bd9d30);
  return 0;
}

