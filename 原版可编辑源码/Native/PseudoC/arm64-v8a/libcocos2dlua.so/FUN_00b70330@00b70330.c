
bool FUN_00b70330(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                 uint *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  GENERAL_NAME *a;
  GENERAL_NAME *b;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  X509_NAME *pXVar11;
  X509_NAME *pXVar12;
  X509 *pXVar13;
  X509 *a_00;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  X509 *local_b8;
  X509_NAME *local_b0;
  int *local_a8;
  long local_a0;
  X509 *local_98;
  int local_68;
  int local_64;
  
  a_00 = *(X509 **)(param_1 + 0xb8);
  uVar16 = *param_5;
  iVar1 = OPENSSL_sk_num(param_7);
  if (0 < iVar1) {
    iVar1 = 0;
    uVar17 = 0;
    local_b8 = (X509 *)0x0;
    local_a0 = 0;
    local_98 = (X509 *)0x0;
LAB_00b706f8:
    lVar10 = OPENSSL_sk_value(param_7,iVar1);
    uVar15 = *(uint *)(lVar10 + 0x98);
    if ((uVar15 >> 1 & 1) == 0) {
      uVar18 = *param_6;
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) {
        if ((uVar15 & 0x60) == 0) goto LAB_00b7074c;
        goto LAB_00b708e4;
      }
      if ((uVar15 >> 6 & 1) != 0) {
        if ((*(uint *)(lVar10 + 0x9c) & (uVar18 ^ 0xffffffff)) != 0) goto LAB_00b7074c;
        goto LAB_00b708e4;
      }
      if (*(long *)(lVar10 + 0xa8) != 0) goto LAB_00b708e4;
LAB_00b7074c:
      pXVar11 = X509_get_issuer_name(a_00);
      pXVar12 = (X509_NAME *)X509_CRL_get_issuer(lVar10);
      iVar4 = X509_NAME_cmp(pXVar11,pXVar12);
      if (iVar4 == 0) {
        uVar15 = 0x20;
      }
      else {
        if ((*(byte *)(lVar10 + 0x98) >> 5 & 1) == 0) goto LAB_00b708e4;
        uVar15 = 0;
      }
      uVar15 = (*(uint *)(lVar10 + 0x84) >> 1 & 0x100 | uVar15) ^ 0x100;
      iVar4 = FUN_00b70a70(param_1,lVar10,0);
      if (iVar4 != 0) {
        uVar15 = uVar15 | 0x40;
      }
      pXVar11 = (X509_NAME *)X509_CRL_get_issuer(lVar10);
      iVar4 = *(int *)(param_1 + 0xac);
      iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      if (iVar4 != iVar5 + -1) {
        iVar4 = iVar4 + 1;
      }
      pXVar13 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4);
      iVar5 = X509_check_akid(pXVar13,*(AUTHORITY_KEYID **)(lVar10 + 0x88));
      if (((uVar15 >> 5 & 1) == 0) || (iVar5 != 0)) {
        do {
          iVar4 = iVar4 + 1;
          iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          if (iVar5 <= iVar4) {
            if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) ||
               (iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10)), iVar4 < 1))
            goto LAB_00b708d0;
            iVar4 = 0;
            goto LAB_00b7088c;
          }
          pXVar13 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4);
          pXVar12 = X509_get_subject_name(pXVar13);
          iVar5 = X509_NAME_cmp(pXVar12,pXVar11);
        } while ((iVar5 != 0) ||
                (iVar5 = X509_check_akid(pXVar13,*(AUTHORITY_KEYID **)(lVar10 + 0x88)), iVar5 != 0))
        ;
        uVar15 = uVar15 | 0xc;
        local_98 = pXVar13;
      }
      else {
        uVar15 = uVar15 | 0x1c;
        local_98 = pXVar13;
      }
      goto LAB_00b708d0;
    }
    goto LAB_00b708e4;
  }
  goto LAB_00b70a48;
  while( true ) {
    iVar4 = iVar4 + 1;
    iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
    if (iVar5 <= iVar4) break;
LAB_00b7088c:
    pXVar13 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),iVar4);
    pXVar12 = X509_get_subject_name(pXVar13);
    iVar5 = X509_NAME_cmp(pXVar12,pXVar11);
    if ((iVar5 == 0) &&
       (iVar5 = X509_check_akid(pXVar13,*(AUTHORITY_KEYID **)(lVar10 + 0x88)), iVar5 == 0)) {
      uVar15 = uVar15 | 4;
      local_98 = pXVar13;
      break;
    }
  }
LAB_00b708d0:
  if ((uVar15 >> 2 & 1) == 0) goto LAB_00b708e4;
  uVar14 = *(uint *)(lVar10 + 0x98);
  if ((uVar14 >> 4 & 1) == 0) {
    if ((*(byte *)&a_00[1].sig_alg >> 4 & 1) == 0) {
      uVar14 = uVar14 >> 3;
    }
    else {
      uVar14 = uVar14 >> 2;
    }
    if ((uVar14 & 1) == 0) {
      uVar14 = *(uint *)(lVar10 + 0x9c);
      iVar4 = OPENSSL_sk_num(*(undefined8 *)&a_00[1].ex_data.dummy);
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          puVar6 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)&a_00[1].ex_data.dummy,iVar4);
          pXVar11 = (X509_NAME *)X509_CRL_get_issuer(lVar10);
          if (puVar6[2] == 0) {
            if ((uVar15 >> 5 & 1) != 0) {
LAB_00b70470:
              if ((*(undefined8 **)(lVar10 + 0x90) == (undefined8 *)0x0) ||
                 ((piVar7 = (int *)*puVar6, piVar7 == (int *)0x0 ||
                  (local_a8 = (int *)**(undefined8 **)(lVar10 + 0x90), local_a8 == (int *)0x0)))) {
LAB_00b70608:
                uVar14 = *(uint *)(puVar6 + 3) & uVar14;
                if ((uVar14 & (uVar18 ^ 0xffffffff)) != 0) goto LAB_00b70650;
                goto LAB_00b708e4;
              }
              if (*piVar7 == 1) {
                local_b0 = *(X509_NAME **)(piVar7 + 4);
                if (local_b0 != (X509_NAME *)0x0) {
                  if (*local_a8 == 1) {
                    if ((*(X509_NAME **)(local_a8 + 4) != (X509_NAME *)0x0) &&
                       (iVar5 = X509_NAME_cmp(local_b0,*(X509_NAME **)(local_a8 + 4)), iVar5 == 0))
                    goto LAB_00b70608;
                  }
                  else {
LAB_00b70584:
                    uVar8 = *(undefined8 *)(local_a8 + 2);
                    iVar5 = OPENSSL_sk_num(uVar8);
                    if (0 < iVar5) {
                      iVar5 = 0;
                      do {
                        piVar7 = (int *)OPENSSL_sk_value(uVar8,iVar5);
                        if ((*piVar7 == 4) &&
                           (iVar2 = X509_NAME_cmp(local_b0,*(X509_NAME **)(piVar7 + 2)), iVar2 == 0)
                           ) goto LAB_00b70608;
                        iVar5 = iVar5 + 1;
                        iVar2 = OPENSSL_sk_num(uVar8);
                      } while (iVar5 < iVar2);
                    }
                  }
                }
              }
              else if (*local_a8 == 1) {
                local_b0 = *(X509_NAME **)(local_a8 + 4);
                local_a8 = piVar7;
                if (local_b0 != (X509_NAME *)0x0) goto LAB_00b70584;
              }
              else {
                iVar5 = OPENSSL_sk_num(*(undefined8 *)(piVar7 + 2));
                if (0 < iVar5) {
                  iVar5 = 0;
                  do {
                    a = (GENERAL_NAME *)OPENSSL_sk_value(*(undefined8 *)(piVar7 + 2),iVar5);
                    iVar2 = OPENSSL_sk_num(*(undefined8 *)(local_a8 + 2));
                    if (0 < iVar2) {
                      iVar2 = 0;
                      do {
                        b = (GENERAL_NAME *)OPENSSL_sk_value(*(undefined8 *)(local_a8 + 2),iVar2);
                        iVar3 = GENERAL_NAME_cmp(a,b);
                        if (iVar3 == 0) goto LAB_00b70608;
                        iVar2 = iVar2 + 1;
                        iVar3 = OPENSSL_sk_num(*(undefined8 *)(local_a8 + 2));
                      } while (iVar2 < iVar3);
                    }
                    iVar5 = iVar5 + 1;
                    iVar2 = OPENSSL_sk_num(*(undefined8 *)(piVar7 + 2));
                  } while (iVar5 < iVar2);
                }
              }
            }
          }
          else {
            iVar5 = OPENSSL_sk_num(puVar6[2]);
            if (0 < iVar5) {
              iVar5 = 0;
              do {
                piVar7 = (int *)OPENSSL_sk_value(puVar6[2],iVar5);
                if ((*piVar7 == 4) &&
                   (iVar2 = X509_NAME_cmp(*(X509_NAME **)(piVar7 + 2),pXVar11), iVar2 == 0))
                goto LAB_00b70470;
                iVar5 = iVar5 + 1;
                iVar2 = OPENSSL_sk_num(puVar6[2]);
              } while (iVar5 < iVar2);
            }
          }
          iVar4 = iVar4 + 1;
          iVar5 = OPENSSL_sk_num(*(undefined8 *)&a_00[1].ex_data.dummy);
        } while (iVar4 < iVar5);
      }
      if (*(long **)(lVar10 + 0x90) == (long *)0x0) {
        if ((uVar15 >> 5 & 1) != 0) goto LAB_00b70648;
      }
      else if (((uVar15 >> 5 & 1) != 0) && (**(long **)(lVar10 + 0x90) == 0)) {
LAB_00b70648:
        if ((uVar14 & (uVar18 ^ 0xffffffff)) == 0) goto LAB_00b708e4;
LAB_00b70650:
        uVar18 = uVar14 | uVar18;
        uVar15 = uVar15 | 0x80;
      }
    }
  }
  if (((int)uVar16 <= (int)uVar15) && (uVar15 != 0)) {
    if ((local_a0 != 0) && (uVar15 == uVar16)) {
      uVar8 = X509_CRL_get0_lastUpdate(local_a0);
      uVar9 = X509_CRL_get0_lastUpdate(lVar10);
      iVar4 = ASN1_TIME_diff(&local_64,&local_68,uVar8,uVar9);
      if ((iVar4 == 0) || ((local_64 < 1 && (local_68 < 1)))) goto LAB_00b708e4;
    }
    local_b8 = local_98;
    uVar16 = uVar15;
    uVar17 = uVar18;
    local_a0 = lVar10;
  }
LAB_00b708e4:
  iVar1 = iVar1 + 1;
  iVar4 = OPENSSL_sk_num(param_7);
  if (iVar4 <= iVar1) goto code_r0x00b708f8;
  goto LAB_00b706f8;
code_r0x00b708f8:
  if (local_a0 != 0) {
    X509_CRL_free((X509_CRL *)*param_2);
    *param_2 = local_a0;
    *param_4 = local_b8;
    *param_5 = uVar16;
    *param_6 = uVar17;
    X509_CRL_up_ref(local_a0);
    X509_CRL_free((X509_CRL *)*param_3);
    *param_3 = 0;
    if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 5 & 1) != 0) &&
       (((*(uint *)(local_a0 + 0x84) | *(uint *)(*(long *)(param_1 + 0xb8) + 0xd0)) >> 0xc & 1) != 0
       )) {
      iVar1 = OPENSSL_sk_num(param_7);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar10 = OPENSSL_sk_value(param_7,iVar1);
          if ((*(long *)(lVar10 + 0xa8) != 0) && (*(long *)(local_a0 + 0xa0) != 0)) {
            pXVar11 = (X509_NAME *)X509_CRL_get_issuer(local_a0);
            pXVar12 = (X509_NAME *)X509_CRL_get_issuer(lVar10);
            iVar4 = X509_NAME_cmp(pXVar11,pXVar12);
            if (((iVar4 == 0) &&
                (((iVar4 = FUN_00b6e640(lVar10,local_a0,0x5a), iVar4 != 0 &&
                  (iVar4 = FUN_00b6e640(lVar10,local_a0,0x302), iVar4 != 0)) &&
                 (iVar4 = ASN1_INTEGER_cmp(*(ASN1_INTEGER **)(lVar10 + 0xa8),
                                           *(ASN1_INTEGER **)(local_a0 + 0xa0)), iVar4 < 1)))) &&
               (iVar4 = ASN1_INTEGER_cmp(*(ASN1_INTEGER **)(lVar10 + 0xa0),
                                         *(ASN1_INTEGER **)(local_a0 + 0xa0)), 0 < iVar4)) {
              iVar1 = FUN_00b70a70(param_1,lVar10,0);
              if (iVar1 != 0) {
                *param_5 = *param_5 | 2;
              }
              X509_CRL_up_ref(lVar10);
              *param_3 = lVar10;
              goto LAB_00b70a48;
            }
          }
          iVar1 = iVar1 + 1;
          iVar4 = OPENSSL_sk_num(param_7);
        } while (iVar1 < iVar4);
      }
      *param_3 = 0;
    }
  }
LAB_00b70a48:
  return 0x1bf < (int)uVar16;
}

