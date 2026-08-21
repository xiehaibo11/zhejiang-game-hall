
undefined8 FUN_00b6cb94(long param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  X509 *pXVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  X509 *pXVar16;
  char *pcVar17;
  EVP_MD *md;
  X509_NAME_ENTRY *ne;
  ASN1_OBJECT *o;
  X509_NAME *pXVar18;
  X509_NAME *name;
  uint uVar19;
  code *pcVar20;
  X509_CINF *pXVar21;
  undefined4 uVar22;
  long *plVar23;
  NAME_CONSTRAINTS *nc;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint local_8c;
  uint local_74;
  X509 *local_70;
  int local_64;
  
  lVar24 = *(long *)(param_1 + 0xe8);
  iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  pXVar12 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5 + -1);
  X509_check_purpose(pXVar12,-1,0);
  if ((iVar5 != 1) || (*(int *)(param_1 + 0x94) != 1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: num == 1 && ctx->num_untrusted == num","crypto/x509/x509_vfy.c",
                0xb50);
  }
  lVar13 = *(long *)(param_1 + 0x10);
  uVar25 = *(uint *)&pXVar12[1].sig_alg;
  uVar26 = (uint)(lVar13 != 0);
  if (((lVar24 == 0) || ((*(uint *)(lVar24 + 0x28) & 3) != 0)) ||
     ((*(uint *)(lVar24 + 0x28) & 0xc) == 0)) {
    if ((lVar13 == 0) ||
       (uVar19 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18), (uVar19 >> 0xf & 1) != 0))
    {
      uVar26 = uVar26 | 2;
      bVar1 = true;
      local_8c = 0;
      if (lVar13 == 0) goto LAB_00b6cc84;
    }
    else {
      local_8c = (uVar19 >> 0x14 ^ 0xffffffff) & 1;
      bVar1 = true;
    }
LAB_00b6cc70:
    lVar13 = OPENSSL_sk_dup();
    if (lVar13 != 0) goto joined_r0x00b6cc7c;
    iVar5 = 0x6a;
                    /* try { // try from 00b6d0d8 to 00c6d0ff has its CatchHandler @ 00b6d1c0 */
    iVar6 = 0xb6b;
LAB_00b6d0dc:
    ERR_put_error(0xb,iVar5,0x41,"crypto/x509/x509_vfy.c",iVar6);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
LAB_00b6da24:
    X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)(param_1 + 0x98));
  }
  else {
    bVar1 = false;
    local_8c = 0;
    if (lVar13 != 0) goto LAB_00b6cc70;
LAB_00b6cc84:
    local_8c = 0;
    lVar13 = 0;
joined_r0x00b6cc7c:
    if ((lVar24 != 0) && (iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar24 + 8)), 0 < iVar5)) {
                    /* try { // try from 00b6cca0 to 00c6d03b has its CatchHandler @ 00b6cca0
                       catch() { ... } // from try @ 00b6cca0 with catch @ 00b6cca0
                       catch() { ... } // from try @ 00b6d064 with catch @ 00b6cca0
                       catch() { ... } // from try @ 00b6d100 with catch @ 00b6cca0 */
      plVar23 = (long *)(lVar24 + 0x10);
      lVar14 = *plVar23;
      if (lVar14 != 0) {
        if (lVar13 == 0) {
          lVar13 = OPENSSL_sk_new_null();
          if (lVar13 == 0) {
            iVar5 = 0x6a;
            iVar6 = 0xb7c;
            goto LAB_00b6d0dc;
          }
          lVar14 = *plVar23;
        }
        iVar5 = OPENSSL_sk_num(lVar14);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            uVar15 = OPENSSL_sk_value(*plVar23,iVar5);
            iVar6 = OPENSSL_sk_push(lVar13,uVar15);
            if (iVar6 == 0) {
              OPENSSL_sk_free(lVar13);
              iVar5 = 0x6a;
              iVar6 = 0xb83;
              goto LAB_00b6d0dc;
            }
            iVar5 = iVar5 + 1;
            iVar6 = OPENSSL_sk_num(*plVar23);
          } while (iVar5 < iVar6);
        }
      }
    }
    uVar25 = uVar25 >> 0xd & 1;
    iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x28);
    if (0x3fffffff < iVar5) {
      iVar5 = 0x3fffffff;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28) = 0x3fffffff;
    }
    iVar5 = iVar5 + 1;
    if (uVar26 != 0) {
      iVar6 = 0;
      iVar10 = 3;
      uVar19 = uVar26 >> 1;
      do {
        local_70 = (X509 *)0x0;
        uVar4 = uVar26;
        if (uVar19 == 0) goto joined_r0x00b6cf8c;
LAB_00b6ce30:
        local_70 = (X509 *)0x0;
        iVar7 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        iVar9 = iVar6;
        if ((uVar26 & 4) == 0) {
          iVar9 = iVar7;
        }
        pXVar12 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9 + -1);
        if (iVar7 <= iVar5) {
          uVar15 = *(undefined8 *)(param_1 + 0x98);
          *(undefined8 *)(param_1 + 0x98) = 0;
          iVar8 = (**(code **)(param_1 + 0x40))(&local_70,param_1,pXVar12);
          *(undefined8 *)(param_1 + 0x98) = uVar15;
          if (iVar8 < 0) {
            *(undefined4 *)(param_1 + 0xb0) = 0x46;
                    /* try { // try from 00b6d100 to 00c6d1d3 has its CatchHandler @ 00b6cca0 */
LAB_00b6d190:
            iVar10 = 2;
            goto LAB_00b6d194;
          }
          if (iVar8 == 0) goto joined_r0x00b6cfc4;
          if (uVar26 >> 2 == 0) {
LAB_00b6cf9c:
            if (uVar25 == 0) goto LAB_00b6cf30;
            if (iVar7 == *(int *)(param_1 + 0x94)) {
              iVar9 = X509_cmp(pXVar12,local_70);
              if (iVar9 != 0) {
                X509_free(local_70);
                goto joined_r0x00b6cfc4;
              }
              X509_free(pXVar12);
              iVar7 = iVar7 + -1;
              *(int *)(param_1 + 0x94) = iVar7;
              OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),iVar7,local_70);
            }
          }
          else {
            if (((uVar25 != 0) || (iVar7 <= iVar9)) || (iVar9 < 1)) {
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: num > i && i > 0 && ss == 0","crypto/x509/x509_vfy.c",
                          0xbd9);
            }
            uVar26 = uVar26 & 0xfffffffb;
            while( true ) {
              pXVar16 = (X509 *)OPENSSL_sk_pop(uVar15);
              X509_free(pXVar16);
              iVar7 = iVar7 + -1;
              if (iVar7 <= iVar9) break;
              uVar15 = *(undefined8 *)(param_1 + 0x98);
            }
            *(int *)(param_1 + 0x94) = iVar9;
            iVar7 = iVar9;
            if (lVar24 == 0) goto LAB_00b6cf9c;
            iVar9 = OPENSSL_sk_num(*(undefined8 *)(lVar24 + 8));
            if ((0 < iVar9) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar24 + 0x2c))) {
              *(undefined4 *)(lVar24 + 0x2c) = 0xffffffff;
              X509_free(*(X509 **)(lVar24 + 0x20));
              *(undefined8 *)(lVar24 + 0x20) = 0;
            }
            iVar9 = OPENSSL_sk_num(*(undefined8 *)(lVar24 + 8));
            if ((iVar9 < 1) || (*(int *)(lVar24 + 0x30) < *(int *)(param_1 + 0x94)))
            goto LAB_00b6cf9c;
            *(undefined4 *)(lVar24 + 0x30) = 0xffffffff;
LAB_00b6cf30:
            pXVar12 = local_70;
            iVar10 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),local_70);
            if (iVar10 == 0) {
              X509_free(local_70);
              iVar6 = 0xbf1;
LAB_00b6d180:
              ERR_put_error(0xb,0x6a,0x41,"crypto/x509/x509_vfy.c",iVar6);
              uVar25 = 0;
              *(undefined4 *)(param_1 + 0xb0) = 0x11;
              goto LAB_00b6d190;
            }
            X509_check_purpose(pXVar12,-1,0);
            uVar25 = *(uint *)&pXVar12[1].sig_alg >> 0xd & 1;
          }
          if (iVar7 < *(int *)(param_1 + 0x94)) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: ctx->num_untrusted <= num","crypto/x509/x509_vfy.c",0xc18
                       );
          }
          iVar10 = FUN_00b6fd68(param_1,iVar7);
          if (iVar10 - 1U < 2) goto LAB_00b6d194;
          uVar26 = uVar26 & 0xfffffffe;
          if (uVar25 == 0) goto joined_r0x00b6cdf0;
        }
joined_r0x00b6cfc4:
        uVar4 = uVar26;
        if ((uVar26 & 1) != 0) {
joined_r0x00b6cf8c:
          uVar19 = uVar26 & 1;
          uVar26 = uVar4;
          if (uVar19 == 0) goto joined_r0x00b6cdf0;
          iVar9 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          if (iVar9 != *(int *)(param_1 + 0x94)) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: num == ctx->num_untrusted","crypto/x509/x509_vfy.c",0xc3f
                       );
          }
                    /* try { // try from 00b6d03c to 00c6d063 has its CatchHandler @ 00b6d1bc */
          uVar15 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9 + -1);
                    /* try { // try from 00b6d064 to 00c6d0d7 has its CatchHandler @ 00b6cca0 */
          if (((uVar25 == 0) && (iVar9 <= iVar5)) && (iVar9 = OPENSSL_sk_num(lVar13), 0 < iVar9)) {
            iVar9 = 0;
            do {
              pXVar12 = (X509 *)OPENSSL_sk_value(lVar13,iVar9);
              iVar7 = (**(code **)(param_1 + 0x48))(param_1,uVar15,pXVar12);
              if ((iVar7 != 0) &&
                 (iVar7 = x509_check_cert_time(param_1,pXVar12,0xffffffff), iVar7 != 0)) {
                local_70 = pXVar12;
                if (pXVar12 == (X509 *)0x0) goto LAB_00b6ce0c;
                OPENSSL_sk_delete_ptr(lVar13,pXVar12);
                iVar10 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),local_70);
                if (iVar10 == 0) {
                  iVar6 = 0xc52;
                  goto LAB_00b6d180;
                }
                X509_up_ref(local_70);
                pXVar12 = local_70;
                *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
                X509_check_purpose(local_70,-1,0);
                uVar25 = *(uint *)&pXVar12[1].sig_alg >> 0xd & 1;
                if (*(long *)(param_1 + 0xe8) != 0) {
                  iVar9 = *(int *)(param_1 + 0x94);
                  iVar10 = 3;
                  iVar7 = iVar9 + -1;
                  if ((iVar7 == 0) || ((*(uint *)(*(long *)(param_1 + 0xe8) + 0x28) & 5) == 0))
                  goto joined_r0x00b6cdf0;
                  lVar14 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar7);
                  if (lVar14 != 0) {
                    iVar10 = FUN_00b7003c(*(undefined4 *)(param_1 + 0x94),
                                          *(undefined8 *)(param_1 + 0xe8),lVar14,iVar7);
                    if (iVar10 < 0) goto LAB_00b6d190;
                    if (iVar10 != 0) {
                      iVar10 = 1;
                      *(int *)(param_1 + 0x94) = iVar9 + -2;
                      goto LAB_00b6d194;
                    }
                  }
                }
                iVar10 = 3;
                goto joined_r0x00b6cdf0;
              }
              iVar9 = iVar9 + 1;
              iVar7 = OPENSSL_sk_num(lVar13);
            } while (iVar9 < iVar7);
          }
          local_70 = (X509 *)0x0;
LAB_00b6ce0c:
          uVar26 = uVar4 & 0xfffffffe;
          if (!bVar1) goto joined_r0x00b6cdf0;
          uVar26 = uVar26 | 2;
          goto LAB_00b6ce30;
        }
        if (uVar26 >> 2 == 0) {
          if ((local_8c == 0) || (*(int *)(param_1 + 0x94) < 2)) goto LAB_00b6d194;
          uVar25 = 0;
          iVar6 = *(int *)(param_1 + 0x94) + -1;
          uVar4 = uVar26 | 4;
          goto joined_r0x00b6cf8c;
        }
        iVar9 = iVar6 + -1;
        bVar2 = iVar6 < 1;
        iVar6 = iVar9;
        if (iVar9 == 0 || bVar2) goto LAB_00b6d194;
joined_r0x00b6cdf0:
        if (uVar26 == 0) goto LAB_00b6d194;
        uVar19 = uVar26 >> 1 & 1;
      } while( true );
    }
    iVar10 = 3;
LAB_00b6d194:
    OPENSSL_sk_free(lVar13);
    iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if (iVar5 < iVar6) {
LAB_00b6d278:
      if (iVar10 != 1) {
        if (iVar10 == 2) goto LAB_00b6da24;
        goto LAB_00b6d288;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00b6d03c with catch @ 00b6d1bc */
      if ((lVar24 == 0) || (iVar10 != 3)) {
        if (iVar10 != 3) goto LAB_00b6d278;
      }
      else {
                    /* catch() { ... } // from try @ 00b6d0d8 with catch @ 00b6d1c0 */
        if ((*(byte *)(lVar24 + 0x28) >> 2 & 1) != 0) {
          lVar13 = *(long *)(param_1 + 0xe8);
          iVar10 = *(int *)(param_1 + 0x94) + -1;
          pXVar12 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar10);
          iVar9 = OPENSSL_sk_num(*(undefined8 *)(lVar13 + 8));
          if (0 < iVar9) {
            iVar7 = 0;
LAB_00b6d200:
            pcVar17 = (char *)OPENSSL_sk_value(*(undefined8 *)(lVar13 + 8),iVar7);
            if ((((*pcVar17 != '\x02') || (pcVar17[1] != '\x01')) || (pcVar17[2] != '\0')) ||
               (iVar8 = X509_verify(pXVar12,*(EVP_PKEY **)(pcVar17 + 0x18)), iVar8 < 1))
            goto LAB_00b6d244;
            X509_free(*(X509 **)(lVar13 + 0x20));
            *(undefined8 *)(lVar13 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0xf0) = 1;
            *(int *)(lVar13 + 0x2c) = iVar10;
            *(char **)(lVar13 + 0x18) = pcVar17;
            iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
            iVar5 = *(int *)(param_1 + 0x94);
            while (iVar5 < iVar6) {
              pXVar12 = (X509 *)OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
              X509_free(pXVar12);
              iVar6 = iVar6 + -1;
              iVar5 = *(int *)(param_1 + 0x94);
            }
            goto LAB_00b6d398;
          }
        }
      }
LAB_00b6d25c:
      if (iVar6 == *(int *)(param_1 + 0x94)) {
        iVar10 = FUN_00b6fd68(param_1,iVar6);
        goto LAB_00b6d278;
      }
LAB_00b6d288:
      iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      if (iVar5 < iVar6) {
        *(int *)(param_1 + 0xac) = iVar6 + -1;
        uVar15 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
        pcVar20 = *(code **)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0xb8) = uVar15;
        uVar22 = 0x16;
      }
      else if (((lVar24 == 0) || (iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar24 + 8)), iVar5 < 1))
              || (((*(byte *)(lVar24 + 0x28) & 3) != 0 && (*(int *)(lVar24 + 0x30) < 0)))) {
        if (uVar25 == 0) {
          iVar5 = *(int *)(param_1 + 0x94);
          *(int *)(param_1 + 0xac) = iVar6 + -1;
          uVar15 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar15;
          if (iVar5 < iVar6) {
            pcVar20 = *(code **)(param_1 + 0x38);
            uVar22 = 2;
          }
          else {
            pcVar20 = *(code **)(param_1 + 0x38);
            uVar22 = 0x14;
          }
        }
        else {
          iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          *(int *)(param_1 + 0xac) = iVar6 + -1;
          uVar15 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar15;
          if (iVar5 == 1) {
            pcVar20 = *(code **)(param_1 + 0x38);
            uVar22 = 0x12;
          }
          else {
            pcVar20 = *(code **)(param_1 + 0x38);
            uVar22 = 0x13;
          }
        }
      }
      else {
        *(int *)(param_1 + 0xac) = iVar6 + -1;
        uVar15 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
        pcVar20 = *(code **)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0xb8) = uVar15;
        uVar22 = 0x41;
      }
      *(undefined4 *)(param_1 + 0xb0) = uVar22;
      iVar5 = (*pcVar20)(0,param_1);
      if (iVar5 == 0) goto LAB_00b6da24;
    }
LAB_00b6d398:
    iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if (*(long *)(param_1 + 0xd8) == 0) {
      iVar6 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
      local_74 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18) >> 6 & 1;
    }
    else {
      local_74 = 0;
      iVar6 = 6;
    }
    piVar3 = (int *)(param_1 + 0xac);
    if (0 < iVar5) {
      iVar10 = 0;
      iVar9 = 0;
      iVar7 = 0;
      iVar8 = -1;
      do {
        pXVar12 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9);
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) == 0) &&
           ((*(byte *)((long)&pXVar12[1].sig_alg + 1) >> 1 & 1) != 0)) {
          *(X509 **)(param_1 + 0xb8) = pXVar12;
          *(int *)(param_1 + 0xac) = iVar9;
          *(undefined4 *)(param_1 + 0xb0) = 0x22;
          iVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar11 == 0) goto LAB_00b6da24;
        }
        if ((local_74 == 0) && ((*(byte *)((long)&pXVar12[1].sig_alg + 1) >> 2 & 1) != 0)) {
          *(X509 **)(param_1 + 0xb8) = pXVar12;
          *(int *)(param_1 + 0xac) = iVar9;
          *(undefined4 *)(param_1 + 0xb0) = 0x28;
          iVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar11 == 0) goto LAB_00b6da24;
        }
        uVar26 = X509_check_ca(pXVar12);
        if (iVar8 == 0) {
          if (uVar26 != 0) {
            uVar22 = 0x25;
LAB_00b6d4c4:
            *(int *)(param_1 + 0xac) = iVar9;
            *(undefined4 *)(param_1 + 0xb0) = uVar22;
            pXVar16 = pXVar12;
            if (pXVar12 == (X509 *)0x0) {
              pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9);
            }
            *(X509 **)(param_1 + 0xb8) = pXVar16;
            iVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar11 == 0) goto LAB_00b6da24;
          }
        }
        else if (iVar8 == -1) {
          if (1 < uVar26) {
LAB_00b6d4b4:
            if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0)
            goto LAB_00b6d4c0;
          }
        }
        else {
          if (uVar26 == 0) {
LAB_00b6d4c0:
            uVar22 = 0x18;
            goto LAB_00b6d4c4;
          }
          if (iVar9 + 1 < iVar5) {
            if (uVar26 != 1) goto LAB_00b6d4c0;
          }
          else if (uVar26 != 1) goto LAB_00b6d4b4;
        }
        if (0 < iVar6) {
                    /* try { // try from 00b6d4fc to 00c6d5a7 has its CatchHandler @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d4fc with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d5b4 with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d5e4 with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d614 with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d704 with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d768 with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d7cc with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d830 with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d894 with catch @ 00b6d4fc
                       catch() { ... } // from try @ 00b6d8f8 with catch @ 00b6d4fc */
          if ((iVar9 < *(int *)(param_1 + 0x94)) ||
             (*(int *)(*(long *)(param_1 + 0x20) + 0x20) != iVar6)) {
LAB_00b6d538:
            iVar8 = X509_check_purpose(pXVar12,iVar6,(uint)(0 < iVar8));
            if ((iVar8 == 0) ||
               ((iVar8 != 1 && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0)))) {
LAB_00b6d564:
              *piVar3 = iVar9;
              pXVar16 = pXVar12;
              if (pXVar12 == (X509 *)0x0) {
                pXVar16 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9);
              }
              *(X509 **)(param_1 + 0xb8) = pXVar16;
              *(undefined4 *)(param_1 + 0xb0) = 0x1a;
              iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar8 == 0) goto LAB_00b6da24;
            }
          }
          else {
            iVar11 = X509_check_trust(pXVar12,*(int *)(*(long *)(param_1 + 0x20) + 0x24),4);
            if (iVar11 != 1) {
              if (iVar11 != 2) goto LAB_00b6d538;
              goto LAB_00b6d564;
            }
          }
        }
                    /* try { // try from 00b6d5a8 to 00c6d5b3 has its CatchHandler @ 00b6d9a8 */
                    /* try { // try from 00b6d5b4 to 00c6d5d7 has its CatchHandler @ 00b6d4fc */
        if ((((1 < iVar9) && ((*(byte *)&pXVar12[1].sig_alg >> 5 & 1) == 0)) &&
            (pXVar12->aux != (X509_CERT_AUX *)0xffffffffffffffff)) &&
           ((long)&pXVar12->aux->trust + (long)iVar10 + 1 < (long)iVar7)) {
                    /* try { // try from 00b6d5d8 to 00c6d5e3 has its CatchHandler @ 00b6d9a4 */
          *(X509 **)(param_1 + 0xb8) = pXVar12;
          *(int *)(param_1 + 0xac) = iVar9;
          *(undefined4 *)(param_1 + 0xb0) = 0x19;
                    /* try { // try from 00b6d5e4 to 00c6d607 has its CatchHandler @ 00b6d4fc */
          iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar8 == 0) goto LAB_00b6da24;
        }
        uVar26 = *(uint *)&pXVar12[1].sig_alg;
        if ((uVar26 >> 10 & 1) == 0) {
          iVar8 = 1;
        }
        else {
          pXVar21 = pXVar12[1].cert_info;
          if (pXVar21 != (X509_CINF *)0xffffffffffffffff) {
                    /* try { // try from 00b6d608 to 00c6d613 has its CatchHandler @ 00b6d9a0 */
            if ((long)pXVar21 < (long)iVar10) {
                    /* try { // try from 00b6d614 to 00c6d6eb has its CatchHandler @ 00b6d4fc */
              *(X509 **)(param_1 + 0xb8) = pXVar12;
              *(int *)(param_1 + 0xac) = iVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x26;
              iVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar10 == 0) goto LAB_00b6da24;
              pXVar21 = pXVar12[1].cert_info;
            }
            iVar10 = (int)pXVar21;
          }
          iVar8 = 0;
          iVar10 = iVar10 + 1;
        }
        iVar9 = iVar9 + 1;
        iVar7 = ((uVar26 >> 5 ^ 0xffffffff) & 1) + iVar7;
      } while (iVar9 < iVar5);
    }
    iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if ((0 < iVar5) && (0 < *(int *)(*(long *)(param_1 + 0x20) + 0x2c))) {
      iVar6 = 0;
      do {
        lVar24 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
        if (0 < iVar6) {
          lVar13 = X509_get0_pubkey(lVar24);
          if (lVar13 == 0) {
LAB_00b6d6dc:
            *piVar3 = iVar6;
            lVar13 = lVar24;
            if (lVar24 == 0) {
                    /* try { // try from 00b6d6ec to 00c6d703 has its CatchHandler @ 00b6d978 */
              lVar13 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
            }
            *(long *)(param_1 + 0xb8) = lVar13;
                    /* try { // try from 00b6d704 to 00c6d74f has its CatchHandler @ 00b6d4fc */
            *(undefined4 *)(param_1 + 0xb0) = 0x43;
            iVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar10 == 0) goto LAB_00b6da24;
          }
          else {
            iVar10 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
            if (0 < iVar10) {
              if (4 < iVar10) {
                iVar10 = 5;
              }
              iVar9 = EVP_PKEY_security_bits();
              if (iVar9 < *(int *)(&UNK_013efab4 + (long)iVar10 * 4)) goto LAB_00b6d6dc;
            }
          }
        }
        if (iVar6 < iVar5 + -1) {
          iVar9 = X509_get_signature_nid(lVar24);
          local_64 = 0;
          iVar10 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
          if (0 < iVar10) {
            if (4 < iVar10) {
              iVar10 = 5;
            }
                    /* try { // try from 00b6d750 to 00c6d767 has its CatchHandler @ 00b6d974 */
            if (((iVar9 == 0) ||
                (iVar9 = OBJ_find_sigid_algs(iVar9,&local_64,(int *)0x0), iVar9 == 0)) ||
               (local_64 == 0)) {
LAB_00b6d774:
              iVar9 = -1;
            }
            else {
              pcVar17 = OBJ_nid2sn(local_64);
              md = EVP_get_digestbyname(pcVar17);
              if (md == (EVP_MD *)0x0) goto LAB_00b6d774;
                    /* try { // try from 00b6d768 to 00c6d7b3 has its CatchHandler @ 00b6d4fc */
              iVar9 = EVP_MD_size(md);
              iVar9 = iVar9 << 2;
            }
            if (iVar9 < *(int *)(&UNK_013efab4 + (long)iVar10 * 4)) {
              *piVar3 = iVar6;
              if (lVar24 == 0) {
                lVar24 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
              }
                    /* try { // try from 00b6d7b4 to 00c6d7cb has its CatchHandler @ 00b6d970 */
              *(long *)(param_1 + 0xb8) = lVar24;
              *(undefined4 *)(param_1 + 0xb0) = 0x44;
              iVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar10 == 0) goto LAB_00b6da24;
            }
          }
        }
        iVar6 = iVar6 + 1;
                    /* try { // try from 00b6d7cc to 00c6d817 has its CatchHandler @ 00b6d4fc */
      } while (iVar6 < iVar5);
    }
    iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if (0 < iVar5) {
      do {
        iVar6 = iVar5 + -1;
        pXVar12 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
        if ((iVar6 == 0) || ((*(uint *)&pXVar12[1].sig_alg >> 5 & 1) == 0)) {
          if ((*(uint *)&pXVar12[1].sig_alg >> 10 & 1) != 0) {
            pXVar18 = X509_get_subject_name(pXVar12);
                    /* try { // try from 00b6d87c to 00c6d893 has its CatchHandler @ 00b6d968 */
            name = X509_get_issuer_name(pXVar12);
            iVar10 = X509_NAME_entry_count(pXVar18);
                    /* try { // try from 00b6d894 to 00c6d8df has its CatchHandler @ 00b6d4fc */
            if (iVar10 < 2) {
LAB_00b6d8f0:
              iVar10 = 0x48;
            }
            else {
              iVar9 = X509_NAME_entry_count(pXVar18);
              iVar7 = X509_NAME_entry_count(name);
              if (iVar9 != iVar7 + 1) goto LAB_00b6d8f0;
              X509_NAME_get_entry(pXVar18,iVar10 + -1);
              iVar9 = X509_NAME_ENTRY_set();
                    /* try { // try from 00b6d8e0 to 00c6d8f7 has its CatchHandler @ 00b6d948 */
              X509_NAME_get_entry(pXVar18,iVar10 + -2);
              iVar7 = X509_NAME_ENTRY_set();
              if (iVar9 == iVar7) goto LAB_00b6d8f0;
              pXVar18 = X509_NAME_dup(pXVar18);
              if (pXVar18 == (X509_NAME *)0x0) {
                iVar5 = 0x95;
                iVar6 = 0x26a;
                goto LAB_00b6d0dc;
              }
              ne = X509_NAME_delete_entry(pXVar18,iVar10 + -1);
              o = X509_NAME_ENTRY_get_object(ne);
              iVar10 = OBJ_obj2nid(o);
                    /* try { // try from 00b6d818 to 00c6d82f has its CatchHandler @ 00b6d96c */
              if ((iVar10 == 0xd) && (iVar10 = X509_NAME_cmp(pXVar18,name), iVar10 == 0)) {
                iVar10 = 0;
              }
              else {
                iVar10 = 0x48;
              }
                    /* try { // try from 00b6d830 to 00c6d87b has its CatchHandler @ 00b6d4fc */
              X509_NAME_ENTRY_free(ne);
              X509_NAME_free(pXVar18);
              if (iVar10 == 0) goto LAB_00b6d910;
            }
                    /* try { // try from 00b6d8f8 to 00c6d9cb has its CatchHandler @ 00b6d4fc */
            *(X509 **)(param_1 + 0xb8) = pXVar12;
            *(int *)(param_1 + 0xac) = iVar6;
            *(int *)(param_1 + 0xb0) = iVar10;
            iVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar10 == 0) goto LAB_00b6da24;
          }
LAB_00b6d910:
          iVar10 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          while (iVar5 < iVar10) {
            iVar10 = iVar10 + -1;
            lVar24 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar10);
            nc = *(NAME_CONSTRAINTS **)(lVar24 + 0x108);
            if (nc != (NAME_CONSTRAINTS *)0x0) {
              iVar9 = NAME_CONSTRAINTS_check(pXVar12,nc);
                    /* catch() { ... } // from try @ 00b6d8e0 with catch @ 00b6d948 */
              if (iVar9 == 0 && iVar6 == 0) {
                    /* catch() { ... } // from try @ 00b6d6ec with catch @ 00b6d978 */
                iVar9 = NAME_CONSTRAINTS_check_CN(pXVar12,nc);
              }
              if (iVar9 != 0) {
                if (iVar9 == 0x11) goto LAB_00b6da24;
                *(int *)(param_1 + 0xac) = iVar6;
                *(int *)(param_1 + 0xb0) = iVar9;
                    /* catch() { ... } // from try @ 00b6d87c with catch @ 00b6d968 */
                *(X509 **)(param_1 + 0xb8) = pXVar12;
                    /* catch() { ... } // from try @ 00b6d818 with catch @ 00b6d96c */
                iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
                    /* catch() { ... } // from try @ 00b6d7b4 with catch @ 00b6d970 */
                if (iVar9 == 0) goto LAB_00b6da24;
              }
            }
          }
        }
        bVar1 = 1 < iVar5;
        iVar5 = iVar6;
      } while (bVar1);
    }
    iVar5 = FUN_00b6fbcc(param_1);
                    /* catch() { ... } // from try @ 00b6d608 with catch @ 00b6d9a0 */
                    /* catch() { ... } // from try @ 00b6d5d8 with catch @ 00b6d9a4 */
                    /* catch() { ... } // from try @ 00b6d5a8 with catch @ 00b6d9a8 */
    X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)(param_1 + 0x98));
    if (iVar5 != 0) {
      uVar15 = (**(code **)(param_1 + 0x50))(param_1);
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      iVar5 = X509_chain_check_suiteb
                        (piVar3,0,*(undefined8 *)(param_1 + 0x98),
                         *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      if (iVar5 != 0) {
        uVar15 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
        *(undefined8 *)(param_1 + 0xb8) = uVar15;
        *(int *)(param_1 + 0xb0) = iVar5;
        uVar15 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar15 == 0) {
          return uVar15;
        }
      }
      if (*(code **)(param_1 + 0x30) == (code *)0x0) {
        uVar15 = FUN_00b6ee70(param_1);
        iVar5 = (int)uVar15;
      }
      else {
        uVar15 = (**(code **)(param_1 + 0x30))(param_1);
        iVar5 = (int)uVar15;
      }
      if (iVar5 == 0) {
        return uVar15;
      }
      uVar15 = X509v3_asid_validate_path(param_1);
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      uVar15 = X509v3_addr_validate_path(param_1);
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      if (-1 < *(char *)(*(long *)(param_1 + 0x20) + 0x18)) {
        return uVar15;
      }
      uVar15 = (**(code **)(param_1 + 0x70))(param_1);
      return uVar15;
    }
  }
  return 0;
LAB_00b6d244:
  iVar7 = iVar7 + 1;
  if (iVar9 <= iVar7) goto LAB_00b6d25c;
  goto LAB_00b6d200;
}

