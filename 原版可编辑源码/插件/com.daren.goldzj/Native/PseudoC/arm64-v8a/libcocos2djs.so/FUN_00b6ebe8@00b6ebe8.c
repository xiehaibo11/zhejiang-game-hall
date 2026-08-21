
long FUN_00b6ebe8(undefined8 param_1,X509V3_CTX *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  stack_st_CONF_VALUE *psVar8;
  undefined8 *puVar9;
  stack_st_CONF_VALUE *section;
  ASN1_VALUE *val;
  stack_st_CONF_VALUE *section_00;
  ASN1_VALUE *pAVar10;
  ASN1_OBJECT *pAVar11;
  ASN1_VALUE *pAVar12;
  stack_st_CONF_VALUE *psVar13;
  long lVar14;
  ASN1_INTEGER *pAVar15;
  size_t sVar16;
  ASN1_IA5STRING *str;
  int iVar17;
  long *plVar18;
  char *pcVar19;
  undefined8 uVar20;
  ASN1_VALUE *pAVar21;
  ASN1_VISIBLESTRING *str_00;
  
  lVar7 = OPENSSL_sk_new_null();
  if (lVar7 == 0) {
    ERR_put_error(0x22,0x82,0x41,"crypto/x509v3/v3_cpols.c",0x62);
  }
  else {
    psVar8 = X509V3_parse_list(param_3);
    if (psVar8 == (stack_st_CONF_VALUE *)0x0) {
      iVar2 = 0x22;
      iVar3 = 0x67;
LAB_00b6f0e4:
      ERR_put_error(0x22,0x82,iVar2,"crypto/x509v3/v3_cpols.c",iVar3);
LAB_00b6f444:
      OPENSSL_sk_pop_free(psVar8,X509V3_conf_free);
      OPENSSL_sk_pop_free(lVar7,POLICYINFO_free);
      lVar7 = 0;
    }
    else {
      iVar2 = OPENSSL_sk_num(psVar8);
      if (0 < iVar2) {
        bVar1 = false;
        iVar2 = 0;
LAB_00b6ec54:
        puVar9 = (undefined8 *)OPENSSL_sk_value(psVar8,iVar2);
        if ((puVar9[2] == 0) && (pcVar19 = (char *)puVar9[1], pcVar19 != (char *)0x0)) {
          iVar3 = strcmp(pcVar19,"ia5org");
          if (iVar3 == 0) {
            bVar1 = true;
LAB_00b6f084:
            iVar2 = iVar2 + 1;
            iVar3 = OPENSSL_sk_num(psVar8);
            if (iVar3 <= iVar2) goto LAB_00b6f098;
            goto LAB_00b6ec54;
          }
          if (*pcVar19 != '@') {
            pAVar11 = OBJ_txt2obj(pcVar19,0);
            if (pAVar11 == (ASN1_OBJECT *)0x0) {
              iVar2 = 0x6e;
              iVar3 = 0x87;
              goto LAB_00b6f104;
            }
            val = ASN1_item_new((ASN1_ITEM *)POLICYINFO_it);
            if (val != (ASN1_VALUE *)0x0) {
              *(ASN1_OBJECT **)val = pAVar11;
LAB_00b6f074:
              iVar3 = OPENSSL_sk_push(lVar7,val);
              if (iVar3 != 0) goto LAB_00b6f084;
              ASN1_item_free(val,(ASN1_ITEM *)POLICYINFO_it);
              iVar2 = 0x41;
              iVar3 = 0x95;
              goto LAB_00b6f0e4;
            }
            ERR_put_error(0x22,0x82,0x41,"crypto/x509v3/v3_cpols.c",0x8d);
            ASN1_OBJECT_free(pAVar11);
            goto LAB_00b6f444;
          }
          section = X509V3_get_section(param_2,pcVar19 + 1);
          if (section != (stack_st_CONF_VALUE *)0x0) {
            val = ASN1_item_new((ASN1_ITEM *)POLICYINFO_it);
            if (val == (ASN1_VALUE *)0x0) {
LAB_00b6f40c:
              iVar2 = 0x41;
              iVar3 = 0xed;
            }
            else {
              iVar3 = OPENSSL_sk_num(section);
              if (0 < iVar3) {
                iVar3 = 0;
                iVar17 = 0x16;
                if (!bVar1) {
                  iVar17 = 0x1a;
                }
                do {
                  puVar9 = (undefined8 *)OPENSSL_sk_value(section,iVar3);
                  pcVar19 = (char *)puVar9[1];
                  iVar4 = strcmp(pcVar19,"policyIdentifier");
                  if (iVar4 == 0) {
                    pAVar11 = OBJ_txt2obj((char *)puVar9[2],0);
                    if (pAVar11 == (ASN1_OBJECT *)0x0) {
                      iVar2 = 0x6e;
                      iVar3 = 0xb1;
                      goto LAB_00b6f2f4;
                    }
                    *(ASN1_OBJECT **)val = pAVar11;
                  }
                  else {
                    iVar4 = name_cmp(pcVar19,"CPS");
                    if (iVar4 != 0) {
                      iVar4 = name_cmp((char *)puVar9[1],"userNotice");
                      if (iVar4 == 0) {
                        if (*(char *)puVar9[2] == '@') {
                          section_00 = X509V3_get_section(param_2,(char *)puVar9[2] + 1);
                          if (section_00 != (stack_st_CONF_VALUE *)0x0) {
                            pAVar10 = ASN1_item_new((ASN1_ITEM *)POLICYQUALINFO_it);
                            if (pAVar10 == (ASN1_VALUE *)0x0) {
LAB_00b6f344:
                              iVar2 = 0x41;
                              iVar3 = 0x142;
LAB_00b6f35c:
                              ERR_put_error(0x22,0x84,iVar2,"crypto/x509v3/v3_cpols.c",iVar3);
                            }
                            else {
                              pAVar11 = OBJ_nid2obj(0xa5);
                              *(ASN1_OBJECT **)pAVar10 = pAVar11;
                              if (pAVar11 == (ASN1_OBJECT *)0x0) {
                                iVar2 = 0x44;
                                iVar3 = 0x100;
                                goto LAB_00b6f35c;
                              }
                              pAVar12 = ASN1_item_new((ASN1_ITEM *)USERNOTICE_it);
                              if (pAVar12 == (ASN1_VALUE *)0x0) goto LAB_00b6f344;
                              *(ASN1_VALUE **)(pAVar10 + 8) = pAVar12;
                              iVar4 = OPENSSL_sk_num(section_00);
                              if (0 < iVar4) {
                                iVar4 = 0;
                                do {
                                  puVar9 = (undefined8 *)OPENSSL_sk_value(section_00,iVar4);
                                  pcVar19 = (char *)puVar9[1];
                                  iVar5 = strcmp(pcVar19,"explicitText");
                                  if (iVar5 == 0) {
                                    str_00 = ASN1_VISIBLESTRING_new();
                                    *(ASN1_VISIBLESTRING **)(pAVar12 + 8) = str_00;
                                    if (str_00 == (ASN1_VISIBLESTRING *)0x0) goto LAB_00b6f344;
LAB_00b6eef4:
                                    pcVar19 = (char *)puVar9[2];
                                    sVar16 = strlen(pcVar19);
                                    iVar5 = ASN1_STRING_set(str_00,pcVar19,(int)sVar16);
                                    if (iVar5 == 0) goto LAB_00b6f344;
                                  }
                                  else {
                                    iVar5 = strcmp(pcVar19,"organization");
                                    if (iVar5 == 0) {
                                      pAVar21 = *(ASN1_VALUE **)pAVar12;
                                      if (pAVar21 == (ASN1_VALUE *)0x0) {
                                        pAVar21 = ASN1_item_new((ASN1_ITEM *)NOTICEREF_it);
                                        if (pAVar21 == (ASN1_VALUE *)0x0) goto LAB_00b6f344;
                                        *(ASN1_VALUE **)pAVar12 = pAVar21;
                                      }
                                      str_00 = *(ASN1_VISIBLESTRING **)pAVar21;
                                      str_00->type = iVar17;
                                      goto LAB_00b6eef4;
                                    }
                                    iVar5 = strcmp(pcVar19,"noticeNumbers");
                                    if (iVar5 != 0) {
                                      ERR_put_error(0x22,0x84,0x8a,"crypto/x509v3/v3_cpols.c",0x132)
                                      ;
                                      ERR_add_error_data(6,"section:",*puVar9,",name:",puVar9[1],
                                                         ",value:",puVar9[2]);
                                      goto LAB_00b6f360;
                                    }
                                    pAVar21 = *(ASN1_VALUE **)pAVar12;
                                    if (pAVar21 == (ASN1_VALUE *)0x0) {
                                      pAVar21 = ASN1_item_new((ASN1_ITEM *)NOTICEREF_it);
                                      if (pAVar21 == (ASN1_VALUE *)0x0) goto LAB_00b6f344;
                                      *(ASN1_VALUE **)pAVar12 = pAVar21;
                                    }
                                    psVar13 = X509V3_parse_list((char *)puVar9[2]);
                                    if ((psVar13 == (stack_st_CONF_VALUE *)0x0) ||
                                       (iVar5 = OPENSSL_sk_num(psVar13), iVar5 == 0)) {
                                      ERR_put_error(0x22,0x84,0x8d,"crypto/x509v3/v3_cpols.c",0x128)
                                      ;
                                      ERR_add_error_data(6,"section:",*puVar9,",name:",puVar9[1],
                                                         ",value:",puVar9[2]);
LAB_00b6f180:
                                      OPENSSL_sk_pop_free(psVar13,X509V3_conf_free);
                                      goto LAB_00b6f360;
                                    }
                                    uVar20 = *(undefined8 *)(pAVar21 + 8);
                                    iVar5 = OPENSSL_sk_num(psVar13);
                                    if (0 < iVar5) {
                                      iVar5 = 0;
                                      do {
                                        lVar14 = OPENSSL_sk_value(psVar13,iVar5);
                                        pAVar15 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,
                                                                   *(char **)(lVar14 + 8));
                                        if (pAVar15 == (ASN1_INTEGER *)0x0) {
                                          iVar2 = 0x8c;
                                          iVar3 = 0x153;
LAB_00b6f168:
                                          ERR_put_error(0x22,0x85,iVar2,"crypto/x509v3/v3_cpols.c",
                                                        iVar3);
                                          OPENSSL_sk_pop_free(uVar20,ASN1_STRING_free);
                                          goto LAB_00b6f180;
                                        }
                                        iVar6 = OPENSSL_sk_push(uVar20,pAVar15);
                                        if (iVar6 == 0) {
                                          iVar2 = 0x41;
                                          iVar3 = 0x15c;
                                          goto LAB_00b6f168;
                                        }
                                        iVar5 = iVar5 + 1;
                                        iVar6 = OPENSSL_sk_num(psVar13);
                                      } while (iVar5 < iVar6);
                                    }
                                    OPENSSL_sk_pop_free(psVar13,X509V3_conf_free);
                                  }
                                  iVar4 = iVar4 + 1;
                                  iVar5 = OPENSSL_sk_num(section_00);
                                } while (iVar4 < iVar5);
                              }
                              plVar18 = *(long **)pAVar12;
                              if ((plVar18 == (long *)0x0) || ((plVar18[1] != 0 && (*plVar18 != 0)))
                                 ) {
                                X509V3_section_free(param_2,section_00);
                                lVar14 = *(long *)(val + 8);
                                if (lVar14 == 0) {
                                  lVar14 = OPENSSL_sk_new_null();
                                  *(long *)(val + 8) = lVar14;
                                }
                                iVar4 = OPENSSL_sk_push(lVar14,pAVar10);
                                if (iVar4 != 0) goto LAB_00b6f008;
                                goto LAB_00b6f40c;
                              }
                              ERR_put_error(0x22,0x84,0x8e,"crypto/x509v3/v3_cpols.c",0x13b);
                            }
LAB_00b6f360:
                            ASN1_item_free(pAVar10,(ASN1_ITEM *)POLICYQUALINFO_it);
                            X509V3_section_free(param_2,section_00);
                            goto LAB_00b6f428;
                          }
                          iVar2 = 0x87;
                          iVar3 = 0xd1;
                        }
                        else {
                          iVar2 = 0x89;
                          iVar3 = 0xcb;
                        }
                      }
                      else {
                        iVar2 = 0x8a;
                        iVar3 = 0xdf;
                      }
LAB_00b6f2f4:
                      ERR_put_error(0x22,0x83,iVar2,"crypto/x509v3/v3_cpols.c",iVar3);
                      ERR_add_error_data(6,"section:",*puVar9,",name:",puVar9[1],",value:",puVar9[2]
                                        );
                      goto LAB_00b6f428;
                    }
                    if (*(long *)(val + 8) == 0) {
                      uVar20 = OPENSSL_sk_new_null();
                      *(undefined8 *)(val + 8) = uVar20;
                    }
                    pAVar10 = ASN1_item_new((ASN1_ITEM *)POLICYQUALINFO_it);
                    if ((pAVar10 == (ASN1_VALUE *)0x0) ||
                       (iVar4 = OPENSSL_sk_push(*(undefined8 *)(val + 8),pAVar10), iVar4 == 0))
                    goto LAB_00b6f40c;
                    pAVar11 = OBJ_nid2obj(0xa4);
                    *(ASN1_OBJECT **)pAVar10 = pAVar11;
                    if (pAVar11 == (ASN1_OBJECT *)0x0) {
                      iVar2 = 0x44;
                      iVar3 = 0xbf;
                      goto LAB_00b6f424;
                    }
                    str = ASN1_IA5STRING_new();
                    *(ASN1_IA5STRING **)(pAVar10 + 8) = str;
                    if (str == (ASN1_IA5STRING *)0x0) goto LAB_00b6f40c;
                    pcVar19 = (char *)puVar9[2];
                    sVar16 = strlen(pcVar19);
                    iVar4 = ASN1_STRING_set(str,pcVar19,(int)sVar16);
                    if (iVar4 == 0) goto LAB_00b6f40c;
                  }
LAB_00b6f008:
                  iVar3 = iVar3 + 1;
                  iVar4 = OPENSSL_sk_num(section);
                } while (iVar3 < iVar4);
              }
              if (*(long *)val != 0) {
                X509V3_section_free(param_2,section);
                goto LAB_00b6f074;
              }
              iVar2 = 0x8b;
              iVar3 = 0xe6;
            }
LAB_00b6f424:
            ERR_put_error(0x22,0x83,iVar2,"crypto/x509v3/v3_cpols.c",iVar3);
LAB_00b6f428:
            ASN1_item_free(val,(ASN1_ITEM *)POLICYINFO_it);
            X509V3_section_free(param_2,section);
            goto LAB_00b6f444;
          }
          iVar2 = 0x87;
          iVar3 = 0x7b;
        }
        else {
          iVar2 = 0x86;
          iVar3 = 0x6f;
        }
LAB_00b6f104:
        ERR_put_error(0x22,0x82,iVar2,"crypto/x509v3/v3_cpols.c",iVar3);
        ERR_add_error_data(6,"section:",*puVar9,",name:",puVar9[1],",value:",puVar9[2]);
        goto LAB_00b6f444;
      }
LAB_00b6f098:
      OPENSSL_sk_pop_free(psVar8,X509V3_conf_free);
    }
  }
  return lVar7;
}

