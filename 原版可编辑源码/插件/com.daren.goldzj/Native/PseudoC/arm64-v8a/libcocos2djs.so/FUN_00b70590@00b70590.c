
undefined4 FUN_00b70590(long *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  stack_st_CONF_VALUE *psVar3;
  long lVar4;
  int *piVar5;
  undefined4 uVar6;
  char *__s2;
  undefined **ppuVar7;
  ASN1_BIT_STRING *a;
  
  psVar3 = X509V3_parse_list(param_2);
  if (psVar3 == (stack_st_CONF_VALUE *)0x0) {
    uVar6 = 0;
  }
  else {
    if (*param_1 == 0) {
      iVar1 = OPENSSL_sk_num(psVar3);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar4 = OPENSSL_sk_value(psVar3,iVar1);
          a = (ASN1_BIT_STRING *)*param_1;
          __s2 = *(char **)(lVar4 + 8);
          if (a == (ASN1_BIT_STRING *)0x0) {
            a = ASN1_BIT_STRING_new();
            *param_1 = (long)a;
            if (a == (ASN1_BIT_STRING *)0x0) goto LAB_00b705c8;
          }
          iVar2 = strcmp("unused",__s2);
          if (iVar2 == 0) {
            ppuVar7 = &PTR_s_Unused_01c87760;
            piVar5 = &DAT_01c87758;
          }
          else {
            iVar2 = strcmp("keyCompromise",__s2);
            if (iVar2 == 0) {
              piVar5 = &DAT_01c87770;
              ppuVar7 = &PTR_s_Key_Compromise_01c87778;
            }
            else {
              iVar2 = strcmp("CACompromise",__s2);
              if (iVar2 == 0) {
                piVar5 = &DAT_01c87788;
                ppuVar7 = &PTR_s_CA_Compromise_01c87790;
              }
              else {
                iVar2 = strcmp("affiliationChanged",__s2);
                if (iVar2 == 0) {
                  piVar5 = &DAT_01c877a0;
                  ppuVar7 = &PTR_s_Affiliation_Changed_01c877a8;
                }
                else {
                  iVar2 = strcmp("superseded",__s2);
                  if (iVar2 == 0) {
                    piVar5 = &DAT_01c877b8;
                    ppuVar7 = &PTR_s_Superseded_01c877c0;
                  }
                  else {
                    iVar2 = strcmp("cessationOfOperation",__s2);
                    if (iVar2 == 0) {
                      piVar5 = &DAT_01c877d0;
                      ppuVar7 = &PTR_s_Cessation_Of_Operation_01c877d8;
                    }
                    else {
                      iVar2 = strcmp("certificateHold",__s2);
                      if (iVar2 == 0) {
                        piVar5 = &DAT_01c877e8;
                        ppuVar7 = &PTR_s_Certificate_Hold_01c877f0;
                      }
                      else {
                        iVar2 = strcmp("privilegeWithdrawn",__s2);
                        if (iVar2 == 0) {
                          piVar5 = &DAT_01c87800;
                          ppuVar7 = &PTR_s_Privilege_Withdrawn_01c87808;
                        }
                        else {
                          iVar2 = strcmp("AACompromise",__s2);
                          if (iVar2 != 0) goto LAB_00b705c8;
                          piVar5 = &DAT_01c87818;
                          ppuVar7 = &PTR_s_AA_Compromise_01c87820;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar2 = ASN1_BIT_STRING_set_bit(a,*piVar5,1);
          if ((iVar2 == 0) || (*ppuVar7 == (undefined *)0x0)) goto LAB_00b705c8;
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(psVar3);
        } while (iVar1 < iVar2);
      }
      uVar6 = 1;
    }
    else {
LAB_00b705c8:
      uVar6 = 0;
    }
    OPENSSL_sk_pop_free(psVar3,X509V3_conf_free);
  }
  return uVar6;
}

