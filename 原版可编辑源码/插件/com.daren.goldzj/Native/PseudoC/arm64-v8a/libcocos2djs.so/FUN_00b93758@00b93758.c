
undefined8 FUN_00b93758(CONF *param_1,BIO *param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  BUF_MEM *str;
  byte *pbVar5;
  CONF_VALUE *pCVar6;
  size_t sVar7;
  char *pcVar8;
  CONF_VALUE *section;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  lhash_st_CONF_VALUE *plVar21;
  long lVar22;
  CONF_VALUE *value;
  byte *local_80;
  char acStack_78 [24];
  
  local_80 = (byte *)0x0;
  plVar21 = param_1->data;
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
    iVar4 = 7;
    iVar9 = 0xad;
  }
  else {
    pbVar5 = (byte *)CRYPTO_strdup("default","crypto/conf/conf_def.c",0xb1);
    local_80 = pbVar5;
    if (pbVar5 == (byte *)0x0) {
      ERR_put_error(0xe,0x79,0x41,"crypto/conf/conf_def.c",0xb3);
      lVar22 = 0;
      value = (CONF_VALUE *)0x0;
      goto LAB_00b93e70;
    }
    iVar4 = _CONF_new_data(param_1);
    if (iVar4 == 0) {
      iVar4 = 0x41;
      iVar9 = 0xb8;
    }
    else {
      pCVar6 = _CONF_new_section(param_1,(char *)pbVar5);
      if (pCVar6 != (CONF_VALUE *)0x0) {
        iVar4 = BUF_MEM_grow(str,0x200);
        lVar22 = 0;
        if (iVar4 != 0) {
          do {
            uVar20 = 0;
            bVar3 = false;
LAB_00b9380c:
            pcVar8 = str->data + (int)uVar20;
            *pcVar8 = '\0';
            BIO_gets(param_2,pcVar8,0x1ff);
            pcVar8[0x1ff] = '\0';
            sVar7 = strlen(pcVar8);
            iVar4 = (int)sVar7;
            if (!bVar3 && iVar4 == 0) {
              BUF_MEM_free(str);
              CRYPTO_free(local_80);
              return 1;
            }
            uVar11 = sVar7 & 0xffffffff;
            if (0 < iVar4) {
              uVar10 = (long)iVar4;
              do {
                if ((pcVar8[uVar10 - 1] != '\r') && (uVar11 = uVar10, pcVar8[uVar10 - 1] != '\n'))
                break;
                uVar11 = uVar10 - 1;
                bVar3 = 1 < (long)uVar10;
                uVar10 = uVar11;
              } while (bVar3);
            }
            iVar9 = (int)uVar11;
            if ((iVar4 == 0) || (iVar9 != iVar4)) {
              bVar3 = false;
              lVar22 = lVar22 + 1;
              pcVar8[iVar9] = '\0';
            }
            else {
              bVar3 = true;
            }
            uVar11 = (long)(int)uVar20 + (long)iVar9;
            if (0 < (int)uVar11) {
              uVar20 = uVar11 - 1;
              if (((*(byte *)((long)param_1->meth_data + (ulong)(byte)str->data[uVar20] * 2) >> 5 &
                   1) == 0) ||
                 ((1 < (int)uVar11 &&
                  ((*(byte *)((long)param_1->meth_data + (ulong)(byte)(str->data + uVar20)[-1] * 2)
                    >> 5 & 1) != 0)))) goto LAB_00b938c4;
              bVar3 = true;
              goto LAB_00b93cc4;
            }
LAB_00b938c4:
            if (bVar3) {
              bVar3 = true;
              uVar20 = uVar11 & 0xffffffff;
              goto LAB_00b93cc4;
            }
            pbVar13 = (byte *)str->data;
            pvVar12 = param_1->meth_data;
            uVar20 = (ulong)*pbVar13;
            uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
            pbVar5 = pbVar13;
            while ((uVar2 >> 0xb & 1) == 0) {
              if ((uVar2 >> 4 & 1) == 0) goto joined_r0x00b93924;
              pbVar5 = pbVar5 + 1;
              uVar20 = (ulong)*pbVar5;
              uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
            }
LAB_00b93a30:
            *pbVar5 = 0;
            pvVar12 = param_1->meth_data;
LAB_00b93a38:
            do {
              pbVar5 = pbVar13;
              uVar20 = (ulong)*pbVar5;
              uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
              pbVar13 = pbVar5 + 1;
            } while ((uVar2 & 0x18) == 0x10);
            if ((uVar2 >> 3 & 1) != 0) {
              bVar3 = false;
              uVar20 = 0;
              goto LAB_00b93cc4;
            }
            pbVar13 = pbVar5;
            if (*pbVar5 != 0x5b) {
              do {
                if ((uVar2 >> 5 & 1) == 0) {
                  if ((uVar2 & 0x307) == 0) goto LAB_00b93aac;
                  lVar18 = 1;
                }
                else {
                  lVar18 = 2 - (((ulong)*(ushort *)((long)pvVar12 + (ulong)pbVar13[1] * 2) & 8) >> 3
                               );
                }
                pbVar13 = pbVar13 + lVar18;
                uVar20 = (ulong)*pbVar13;
                uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
              } while( true );
            }
            do {
              pbVar5 = pbVar5 + 1;
              uVar20 = (ulong)*pbVar5;
              pbVar13 = pbVar5;
            } while ((*(ushort *)((long)pvVar12 + uVar20 * 2) & 0x18) == 0x10);
LAB_00b93d04:
            while (uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2), (uVar2 >> 5 & 1) != 0) {
              lVar18 = 2 - (((ulong)*(ushort *)((long)pvVar12 + (ulong)pbVar5[1] * 2) & 8) >> 3);
LAB_00b93cfc:
              uVar20 = (ulong)pbVar5[lVar18];
              pbVar5 = pbVar5 + lVar18;
            }
            if ((uVar2 & 0x307) != 0) {
              lVar18 = 1;
              goto LAB_00b93cfc;
            }
            pbVar19 = pbVar5 + -1;
            do {
              pbVar19 = pbVar19 + 1;
              bVar1 = *pbVar19;
              uVar20 = (ulong)bVar1;
            } while ((*(ushort *)((long)pvVar12 + uVar20 * 2) & 0x18) == 0x10);
            if (bVar1 == 0) {
LAB_00b93fe8:
              iVar4 = 100;
              iVar9 = 0x10b;
              goto LAB_00b93dd4;
            }
            if (bVar1 != 0x5d) {
              bVar3 = pbVar13 == pbVar19;
              pbVar5 = pbVar19;
              pbVar13 = pbVar19;
              if (bVar3) goto LAB_00b93fe8;
              goto LAB_00b93d04;
            }
            *pbVar5 = 0;
            iVar4 = FUN_00b9412c(param_1,0,&local_80);
            pbVar5 = local_80;
            if (iVar4 == 0) goto LAB_00b93dd8;
            pCVar6 = _CONF_get_section(param_1,(char *)local_80);
            if ((pCVar6 == (CONF_VALUE *)0x0) &&
               (pCVar6 = _CONF_new_section(param_1,(char *)pbVar5), pCVar6 == (CONF_VALUE *)0x0)) {
              iVar4 = 0x67;
              iVar9 = 0x115;
              goto LAB_00b93dd4;
            }
            iVar4 = BUF_MEM_grow(str,0x200);
            if (iVar4 == 0) break;
          } while( true );
        }
LAB_00b93dbc:
        iVar4 = 7;
        iVar9 = 0xc6;
LAB_00b93dd4:
        ERR_put_error(0xe,0x79,iVar4,"crypto/conf/conf_def.c",iVar9);
LAB_00b93dd8:
        value = (CONF_VALUE *)0x0;
        goto LAB_00b93e70;
      }
      iVar4 = 0x67;
      iVar9 = 0xbe;
    }
  }
  ERR_put_error(0xe,0x79,iVar4,"crypto/conf/conf_def.c",iVar9);
  lVar22 = 0;
  value = (CONF_VALUE *)0x0;
LAB_00b93e70:
  BUF_MEM_free(str);
  CRYPTO_free(local_80);
  if (param_3 != (long *)0x0) {
    *param_3 = lVar22;
  }
  BIO_snprintf(acStack_78,0x18,"%ld",lVar22);
  ERR_add_error_data(2,"line ",acStack_78);
  if (plVar21 != param_1->data) {
    CONF_free(param_1->data);
    param_1->data = (lhash_st_CONF_VALUE *)0x0;
  }
  if (value != (CONF_VALUE *)0x0) {
    CRYPTO_free(value->name);
    CRYPTO_free(value->value);
    CRYPTO_free(value);
  }
  return 0;
joined_r0x00b93924:
  if ((uVar2 >> 7 & 1) != 0) goto LAB_00b93a30;
  uVar17 = (uint)uVar20;
  if ((uVar2 >> 10 & 1) == 0) {
    if ((uVar2 >> 6 & 1) == 0) {
      if ((uVar2 >> 5 & 1) == 0) {
        if ((uVar2 >> 3 & 1) != 0) goto LAB_00b93a38;
        pbVar5 = pbVar5 + 1;
      }
      else {
        pbVar5 = pbVar5 + (2 - (((ulong)*(ushort *)((long)pvVar12 + (ulong)pbVar5[1] * 2) & 8) >> 3)
                          );
      }
    }
    else {
      pbVar19 = pbVar5 + 1;
      bVar3 = *pbVar19 == uVar17;
      if (!bVar3) {
        uVar2 = *(ushort *)((long)pvVar12 + (ulong)(uint)*pbVar19 * 2);
        while ((uVar2 >> 3 & 1) == 0) {
          pbVar14 = pbVar19;
          if (((uVar2 >> 5 & 1) != 0) &&
             (pbVar14 = pbVar5 + 2, pbVar5 = pbVar14,
             (*(byte *)((long)pvVar12 + (ulong)*pbVar14 * 2) >> 3 & 1) != 0)) goto LAB_00b93a24;
          pbVar19 = pbVar14 + 1;
          bVar3 = *pbVar19 == uVar17;
          pbVar5 = pbVar14;
          if (bVar3) break;
          uVar2 = *(ushort *)((long)pvVar12 + (ulong)(uint)*pbVar19 * 2);
        }
      }
      pbVar5 = pbVar5 + 2;
      if (!bVar3) {
        pbVar5 = pbVar19;
      }
    }
  }
  else {
    do {
      pbVar14 = pbVar5;
      pbVar19 = pbVar14 + 1;
      bVar1 = *pbVar19;
      uVar11 = (ulong)bVar1;
      if ((*(byte *)((long)pvVar12 + (ulong)bVar1 * 2) >> 3 & 1) != 0) break;
      pbVar5 = pbVar19;
    } while ((bVar1 != uVar17) || (pbVar5 = pbVar14 + 2, uVar11 = uVar20, pbVar14[2] == uVar17));
    pbVar5 = pbVar14 + 2;
    if ((uint)uVar11 != uVar17) {
      pbVar5 = pbVar19;
    }
  }
LAB_00b93a24:
  uVar20 = (ulong)*pbVar5;
  uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
  goto joined_r0x00b93924;
LAB_00b93aac:
  pbVar19 = pbVar5;
  if ((int)uVar20 == 0x3a) {
    if (pbVar13[1] == 0x3a) {
      pbVar19 = pbVar13 + 2;
      *pbVar13 = 0;
      pvVar12 = param_1->meth_data;
      pbVar13 = pbVar19;
      while( true ) {
        while( true ) {
          uVar20 = (ulong)*pbVar13;
          uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
          if ((uVar2 >> 5 & 1) == 0) break;
          pbVar13 = pbVar13 + (2 - (((ulong)*(ushort *)((long)pvVar12 + (ulong)pbVar13[1] * 2) & 8)
                                   >> 3));
        }
        if ((uVar2 & 0x307) == 0) break;
        pbVar13 = pbVar13 + 1;
      }
    }
    else {
      uVar20 = 0x3a;
      pbVar5 = (byte *)0x0;
    }
  }
  else {
    pbVar5 = (byte *)0x0;
  }
  uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
  pbVar14 = pbVar13;
  while (pbVar15 = pbVar14 + 1, (uVar2 & 0x18) == 0x10) {
    uVar20 = (ulong)*pbVar15;
    pbVar14 = pbVar15;
    uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
  }
  if ((int)uVar20 != 0x3d) {
    iVar4 = 0x65;
    iVar9 = 0x126;
    goto LAB_00b93dd4;
  }
  *pbVar13 = 0;
  pvVar12 = param_1->meth_data;
  lVar18 = 1;
  do {
    lVar16 = lVar18;
    pbVar13 = pbVar15;
    pbVar15 = pbVar13 + 1;
    lVar18 = lVar16 + 1;
  } while ((*(ushort *)((long)pvVar12 + (ulong)*pbVar13 * 2) & 0x18) == 0x10);
  do {
    lVar18 = lVar16;
    pbVar14 = pbVar14 + 1;
    lVar16 = lVar18 + -1;
  } while ((*(byte *)((long)pvVar12 + (ulong)*pbVar14 * 2) >> 3 & 1) == 0);
  do {
    pbVar15 = pbVar14;
    if (lVar18 == 0) break;
    lVar18 = lVar18 + 1;
    pbVar14 = pbVar15 + -1;
  } while ((*(byte *)((long)pvVar12 + (ulong)pbVar15[-1] * 2) >> 4 & 1) != 0);
  *pbVar15 = 0;
  value = CRYPTO_malloc(0x18,"crypto/conf/conf_def.c",0x134);
  pbVar14 = local_80;
  if (value == (CONF_VALUE *)0x0) {
    ERR_put_error(0xe,0x79,0x41,"crypto/conf/conf_def.c",0x135);
    goto LAB_00b93e70;
  }
  pbVar15 = local_80;
  if (pbVar5 != (byte *)0x0) {
    pbVar15 = pbVar5;
  }
  sVar7 = strlen((char *)pbVar19);
  pcVar8 = CRYPTO_malloc((int)sVar7 + 1,"crypto/conf/conf_def.c",0x13a);
  value->value = (char *)0x0;
  value->name = pcVar8;
  if (pcVar8 == (char *)0x0) {
    iVar4 = 0x41;
    iVar9 = 0x13d;
  }
  else {
    sVar7 = strlen((char *)pbVar19);
    OPENSSL_strlcpy(pcVar8,pbVar19,sVar7 + 1);
    iVar4 = FUN_00b9412c(param_1,pbVar15,&value->value,pbVar13);
    if (iVar4 == 0) goto LAB_00b93e70;
    iVar4 = strcmp((char *)pbVar15,(char *)pbVar14);
    section = pCVar6;
    if (((iVar4 == 0) ||
        (section = _CONF_get_section(param_1,(char *)pbVar15), section != (CONF_VALUE *)0x0)) ||
       (section = _CONF_new_section(param_1,(char *)pbVar15), section != (CONF_VALUE *)0x0)) {
      iVar4 = _CONF_add_string(param_1,section,value);
      if (iVar4 == 0) {
        ERR_put_error(0xe,0x79,0x41,"crypto/conf/conf_def.c",0x150);
        goto LAB_00b93e70;
      }
      bVar3 = false;
      uVar20 = 0;
LAB_00b93cc4:
      iVar4 = BUF_MEM_grow(str,(long)((int)uVar20 + 0x200));
      if (iVar4 == 0) goto LAB_00b93dbc;
      goto LAB_00b9380c;
    }
    iVar4 = 0x67;
    iVar9 = 0x14a;
  }
  ERR_put_error(0xe,0x79,iVar4,"crypto/conf/conf_def.c",iVar9);
  goto LAB_00b93e70;
}

