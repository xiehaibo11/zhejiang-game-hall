
undefined8 FUN_00ba1f58(CONF *param_1,BIO *param_2,long *param_3)

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
  
                    /* try { // try from 00ba1f5c to 00ca239f has its CatchHandler @ 00ba1f00 */
  local_80 = (byte *)0x0;
  plVar21 = param_1->data;
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
                    /* try { // try from 00ba25e8 to 00ca25ff has its CatchHandler @ 00ba27ac */
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
      goto LAB_00ba2670;
    }
    iVar4 = _CONF_new_data(param_1);
    if (iVar4 == 0) {
                    /* try { // try from 00ba262c to 00ca2637 has its CatchHandler @ 00ba279c */
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
LAB_00ba200c:
            pcVar8 = str->data + (int)uVar20;
            *pcVar8 = '\0';
            BIO_gets(param_2,pcVar8,0x1ff);
            pcVar8[0x1ff] = '\0';
            sVar7 = strlen(pcVar8);
            iVar4 = (int)sVar7;
            if (!bVar3 && iVar4 == 0) {
              BUF_MEM_free(str);
                    /* try { // try from 00ba274c to 00ca2757 has its CatchHandler @ 00ba2758 */
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
                    >> 5 & 1) != 0)))) goto LAB_00ba20c4;
              bVar3 = true;
              goto LAB_00ba24c4;
            }
LAB_00ba20c4:
            if (bVar3) {
              bVar3 = true;
              uVar20 = uVar11 & 0xffffffff;
              goto LAB_00ba24c4;
            }
            pbVar13 = (byte *)str->data;
            pvVar12 = param_1->meth_data;
            uVar20 = (ulong)*pbVar13;
            uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
            pbVar5 = pbVar13;
            while ((uVar2 >> 0xb & 1) == 0) {
              if ((uVar2 >> 4 & 1) == 0) goto joined_r0x00ba2124;
              pbVar5 = pbVar5 + 1;
              uVar20 = (ulong)*pbVar5;
              uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
            }
LAB_00ba2230:
            *pbVar5 = 0;
            pvVar12 = param_1->meth_data;
LAB_00ba2238:
            do {
              pbVar5 = pbVar13;
              uVar20 = (ulong)*pbVar5;
              uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
              pbVar13 = pbVar5 + 1;
            } while ((uVar2 & 0x18) == 0x10);
            if ((uVar2 >> 3 & 1) != 0) {
              bVar3 = false;
              uVar20 = 0;
              goto LAB_00ba24c4;
            }
            pbVar13 = pbVar5;
            if (*pbVar5 != 0x5b) {
              do {
                if ((uVar2 >> 5 & 1) == 0) {
                  if ((uVar2 & 0x307) == 0) goto LAB_00ba22ac;
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
LAB_00ba2504:
                    /* try { // try from 00ba2508 to 00ca2547 has its CatchHandler @ 00ba27b8 */
            while (uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2), (uVar2 >> 5 & 1) != 0) {
              lVar18 = 2 - (((ulong)*(ushort *)((long)pvVar12 + (ulong)pbVar5[1] * 2) & 8) >> 3);
LAB_00ba24fc:
              uVar20 = (ulong)pbVar5[lVar18];
              pbVar5 = pbVar5 + lVar18;
            }
            if ((uVar2 & 0x307) != 0) {
              lVar18 = 1;
              goto LAB_00ba24fc;
            }
            pbVar19 = pbVar5 + -1;
            do {
              pbVar19 = pbVar19 + 1;
              bVar1 = *pbVar19;
              uVar20 = (ulong)bVar1;
            } while ((*(ushort *)((long)pvVar12 + uVar20 * 2) & 0x18) == 0x10);
            if (bVar1 == 0) {
LAB_00ba27e8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba27cc with catch @ 00ba27f4
                        */
              iVar4 = 100;
              iVar9 = 0x10b;
              goto LAB_00ba25d4;
            }
                    /* try { // try from 00ba2550 to 00ca2557 has its CatchHandler @ 00ba27a0 */
            if (bVar1 != 0x5d) {
              bVar3 = pbVar13 == pbVar19;
              pbVar5 = pbVar19;
              pbVar13 = pbVar19;
                    /* try { // try from 00ba255c to 00ca25b7 has its CatchHandler @ 00ba27b0 */
              if (bVar3) goto LAB_00ba27e8;
              goto LAB_00ba2504;
            }
            *pbVar5 = 0;
            iVar4 = FUN_00ba292c(param_1,0,&local_80);
            pbVar5 = local_80;
            if (iVar4 == 0) goto LAB_00ba25d8;
            pCVar6 = _CONF_get_section(param_1,(char *)local_80);
            if ((pCVar6 == (CONF_VALUE *)0x0) &&
               (pCVar6 = _CONF_new_section(param_1,(char *)pbVar5), pCVar6 == (CONF_VALUE *)0x0)) {
                    /* try { // try from 00ba2828 to 00ca285f has its CatchHandler @ 00ba2828
                       catch() { ... } // from try @ 00ba2828 with catch @ 00ba2828
                       catch() { ... } // from try @ 00ba2864 with catch @ 00ba2828 */
              iVar4 = 0x67;
              iVar9 = 0x115;
              goto LAB_00ba25d4;
            }
            iVar4 = BUF_MEM_grow(str,0x200);
            if (iVar4 == 0) break;
          } while( true );
        }
LAB_00ba25bc:
        iVar4 = 7;
        iVar9 = 0xc6;
LAB_00ba25d4:
                    /* try { // try from 00ba25d4 to 00ca25db has its CatchHandler @ 00ba2784 */
        ERR_put_error(0xe,0x79,iVar4,"crypto/conf/conf_def.c",iVar9);
LAB_00ba25d8:
        value = (CONF_VALUE *)0x0;
        goto LAB_00ba2670;
      }
                    /* try { // try from 00ba264c to 00ca268f has its CatchHandler @ 00ba27b4 */
      iVar4 = 0x67;
      iVar9 = 0xbe;
    }
  }
  ERR_put_error(0xe,0x79,iVar4,"crypto/conf/conf_def.c",iVar9);
  lVar22 = 0;
  value = (CONF_VALUE *)0x0;
LAB_00ba2670:
  BUF_MEM_free(str);
  CRYPTO_free(local_80);
  if (param_3 != (long *)0x0) {
    *param_3 = lVar22;
  }
                    /* try { // try from 00ba26a8 to 00ca26b7 has its CatchHandler @ 00ba2778 */
  BIO_snprintf(acStack_78,0x18,"%ld",lVar22);
  ERR_add_error_data(2,"line ",acStack_78);
  if (plVar21 != param_1->data) {
    CONF_free(param_1->data);
    param_1->data = (lhash_st_CONF_VALUE *)0x0;
  }
  if (value != (CONF_VALUE *)0x0) {
                    /* try { // try from 00ba26e4 to 00ca26e7 has its CatchHandler @ 00ba27a8 */
                    /* try { // try from 00ba26e8 to 00ca274b has its CatchHandler @ 00ba23a0 */
    CRYPTO_free(value->name);
    CRYPTO_free(value->value);
    CRYPTO_free(value);
  }
  return 0;
joined_r0x00ba2124:
  if ((uVar2 >> 7 & 1) != 0) goto LAB_00ba2230;
  uVar17 = (uint)uVar20;
  if ((uVar2 >> 10 & 1) == 0) {
    if ((uVar2 >> 6 & 1) == 0) {
      if ((uVar2 >> 5 & 1) == 0) {
        if ((uVar2 >> 3 & 1) != 0) goto LAB_00ba2238;
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
             (*(byte *)((long)pvVar12 + (ulong)*pbVar14 * 2) >> 3 & 1) != 0)) goto LAB_00ba2224;
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
LAB_00ba2224:
  uVar20 = (ulong)*pbVar5;
  uVar2 = *(ushort *)((long)pvVar12 + uVar20 * 2);
  goto joined_r0x00ba2124;
LAB_00ba22ac:
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba2474 with catch @ 00ba2758
                       catch(type#1 @ 00000000) { ... } // from try @ 00ba274c with catch @ 00ba2758
                       try { // try from 00ba2758 to 00ca27cb has its CatchHandler @ 00ba23a0 */
    iVar4 = 0x65;
    iVar9 = 0x126;
    goto LAB_00ba25d4;
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
                    /* try { // try from 00ba23a0 to 00ca2473 has its CatchHandler @ 00ba23a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ba23a0 with catch @ 00ba23a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ba26e8 with catch @ 00ba23a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ba2758 with catch @ 00ba23a0
                        */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba26a8 with catch @ 00ba2778
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba2498 with catch @ 00ba277c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba24a4 with catch @ 00ba2780
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba25d4 with catch @ 00ba2784
                        */
    ERR_put_error(0xe,0x79,0x41,"crypto/conf/conf_def.c",0x135);
    goto LAB_00ba2670;
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba262c with catch @ 00ba279c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba2550 with catch @ 00ba27a0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba24f8 with catch @ 00ba27a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba26e4 with catch @ 00ba27a8
                        */
    iVar4 = 0x41;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba25e8 with catch @ 00ba27ac
                        */
    iVar9 = 0x13d;
  }
  else {
    sVar7 = strlen((char *)pbVar19);
    OPENSSL_strlcpy(pcVar8,pbVar19,sVar7 + 1);
    iVar4 = FUN_00ba292c(param_1,pbVar15,&value->value,pbVar13);
    if (iVar4 == 0) goto LAB_00ba2670;
    iVar4 = strcmp((char *)pbVar15,(char *)pbVar14);
    section = pCVar6;
                    /* try { // try from 00ba2474 to 00ca2477 has its CatchHandler @ 00ba2758 */
                    /* try { // try from 00ba2498 to 00ca249f has its CatchHandler @ 00ba277c */
    if (((iVar4 == 0) ||
        (section = _CONF_get_section(param_1,(char *)pbVar15), section != (CONF_VALUE *)0x0)) ||
       (section = _CONF_new_section(param_1,(char *)pbVar15), section != (CONF_VALUE *)0x0)) {
                    /* try { // try from 00ba24a4 to 00ca24c7 has its CatchHandler @ 00ba2780 */
      iVar4 = _CONF_add_string(param_1,section,value);
      if (iVar4 == 0) {
                    /* try { // try from 00ba27cc to 00ca27cf has its CatchHandler @ 00ba27f4 */
        ERR_put_error(0xe,0x79,0x41,"crypto/conf/conf_def.c",0x150);
        goto LAB_00ba2670;
      }
      bVar3 = false;
      uVar20 = 0;
LAB_00ba24c4:
      iVar4 = BUF_MEM_grow(str,(long)((int)uVar20 + 0x200));
      if (iVar4 == 0) goto LAB_00ba25bc;
      goto LAB_00ba200c;
    }
    iVar4 = 0x67;
    iVar9 = 0x14a;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba255c with catch @ 00ba27b0
                        */
  ERR_put_error(0xe,0x79,iVar4,"crypto/conf/conf_def.c",iVar9);
  goto LAB_00ba2670;
}

