
undefined4 FUN_00b7fa10(long *param_1,char *param_2)

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
            if (a == (ASN1_BIT_STRING *)0x0) goto LAB_00b7fa48;
          }
          iVar2 = strcmp("unused",__s2);
          if (iVar2 == 0) {
            ppuVar7 = &PTR_s_Unused_016c26b0;
            piVar5 = &DAT_016c26a8;
          }
          else {
            iVar2 = strcmp("keyCompromise",__s2);
            if (iVar2 == 0) {
              piVar5 = &DAT_016c26c0;
              ppuVar7 = &PTR_s_Key_Compromise_016c26c8;
            }
            else {
              iVar2 = strcmp("CACompromise",__s2);
              if (iVar2 == 0) {
                piVar5 = &DAT_016c26d8;
                ppuVar7 = &PTR_s_CA_Compromise_016c26e0;
              }
              else {
                iVar2 = strcmp("affiliationChanged",__s2);
                if (iVar2 == 0) {
                  piVar5 = &DAT_016c26f0;
                    /* try { // try from 00b7fb94 to 00c7fbf7 has its CatchHandler @ 00b7fb94
                       catch() { ... } // from try @ 00b7fb94 with catch @ 00b7fb94
                       catch() { ... } // from try @ 00b7fc08 with catch @ 00b7fb94 */
                  ppuVar7 = &PTR_s_Affiliation_Changed_016c26f8;
                }
                else {
                  iVar2 = strcmp("superseded",__s2);
                  if (iVar2 == 0) {
                    piVar5 = &DAT_016c2708;
                    ppuVar7 = &PTR_s_Superseded_016c2710;
                  }
                  else {
                    iVar2 = strcmp("cessationOfOperation",__s2);
                    if (iVar2 == 0) {
                      piVar5 = &DAT_016c2720;
                      ppuVar7 = &PTR_s_Cessation_Of_Operation_016c2728;
                    }
                    else {
                      iVar2 = strcmp("certificateHold",__s2);
                      if (iVar2 == 0) {
                        piVar5 = &DAT_016c2738;
                        ppuVar7 = &PTR_s_Certificate_Hold_016c2740;
                      }
                      else {
                        iVar2 = strcmp("privilegeWithdrawn",__s2);
                        if (iVar2 == 0) {
                          piVar5 = &DAT_016c2750;
                          ppuVar7 = &PTR_s_Privilege_Withdrawn_016c2758;
                        }
                        else {
                          iVar2 = strcmp("AACompromise",__s2);
                          if (iVar2 != 0) goto LAB_00b7fa48;
                          piVar5 = &DAT_016c2768;
                          ppuVar7 = &PTR_s_AA_Compromise_016c2770;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar2 = ASN1_BIT_STRING_set_bit(a,*piVar5,1);
          if ((iVar2 == 0) || (*ppuVar7 == (undefined *)0x0)) goto LAB_00b7fa48;
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(psVar3);
        } while (iVar1 < iVar2);
      }
                    /* try { // try from 00b7fbf8 to 00c7fc07 has its CatchHandler @ 00b7fc24 */
      uVar6 = 1;
    }
    else {
LAB_00b7fa48:
      uVar6 = 0;
    }
                    /* try { // try from 00b7fc08 to 00c7fc7b has its CatchHandler @ 00b7fb94 */
    OPENSSL_sk_pop_free(psVar3,X509V3_conf_free);
  }
                    /* catch() { ... } // from try @ 00b7fbf8 with catch @ 00b7fc24 */
  return uVar6;
}

