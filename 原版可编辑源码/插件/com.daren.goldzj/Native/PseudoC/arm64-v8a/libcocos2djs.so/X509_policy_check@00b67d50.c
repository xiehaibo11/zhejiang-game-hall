
/* WARNING: Type propagation algorithm not settling */

int X509_policy_check(X509_POLICY_TREE **ptree,int *pexplicit_policy,stack_st_X509 *certs,
                     stack_st_ASN1_OBJECT *policy_oids,uint flags)

{
  bool bVar1;
  X509_POLICY_TREE *pXVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  X509_POLICY_TREE *tree;
  X509 *x;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  ASN1_OBJECT *pAVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  ulong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  X509_POLICY_TREE *pXVar26;
  uint uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  uint uVar31;
  undefined8 local_68;
  
  local_68 = 0;
  *ptree = (X509_POLICY_TREE *)0x0;
  *pexplicit_policy = 0;
  uVar5 = OPENSSL_sk_num(certs);
  uVar7 = 0;
  if ((flags & 0x100) == 0) {
    uVar7 = uVar5;
  }
  uVar24 = 0;
  if ((flags & 0x200) == 0) {
    uVar24 = uVar5;
  }
  uVar31 = 0;
  if ((flags & 0x400) == 0) {
    uVar31 = uVar5;
  }
  iVar8 = uVar5 - 1;
  tree = (X509_POLICY_TREE *)0x0;
  if (iVar8 == 0) {
LAB_00b67dc0:
    X509_policy_tree_free(tree);
  }
  else {
    iVar11 = iVar8;
    if ((int)uVar5 < 2) {
      uVar27 = 1;
    }
    else {
      do {
        iVar11 = iVar11 + -1;
        x = (X509 *)OPENSSL_sk_value(certs,iVar11);
        X509_check_purpose(x,-1,0);
        lVar12 = policy_cache_set(x);
        if (lVar12 == 0) {
          return 0;
        }
      } while (0 < iVar11);
      uVar27 = 1;
      do {
        if ((uVar27 >> 1 != 0) && ((int)uVar7 < 1)) break;
        iVar8 = iVar8 + -1;
        uVar13 = OPENSSL_sk_value(certs,iVar8);
        uVar6 = X509_get_extension_flags();
        if ((uVar6 >> 0xb & 1) != 0) {
          return -1;
        }
        lVar12 = policy_cache_set(uVar13);
        uVar4 = uVar27;
                    /* try { // try from 00b67e58 to 00c67e6f has its CatchHandler @ 00b68000 */
        if (((uVar27 & 1) != 0) && (uVar4 = 2, *(long *)(lVar12 + 8) != 0)) {
          uVar4 = uVar27;
        }
        uVar27 = uVar4;
        if (0 < (int)uVar7) {
          uVar23 = *(ulong *)(lVar12 + 0x18);
          uVar6 = (uVar7 + (uVar6 >> 5 & 1)) - 1;
                    /* try { // try from 00b67e7c to 00c67e87 has its CatchHandler @ 00b67ffc */
          uVar7 = (uint)uVar23;
          if ((long)(int)uVar6 <= (long)uVar23 || 0x7fffffffffffffff < uVar23) {
            uVar7 = uVar6;
          }
        }
      } while (0 < iVar8);
    }
    uVar6 = uVar27 | 4;
    if (uVar7 != 0) {
      uVar6 = uVar27;
    }
    if ((uVar6 & 1) == 0) {
      tree = (X509_POLICY_TREE *)0x0;
    }
    else {
      tree = (X509_POLICY_TREE *)CRYPTO_zalloc(0x30,"crypto/x509v3/pcy_tree.c",0xa6);
      if (tree == (X509_POLICY_TREE *)0x0) {
        return 0;
      }
      lVar12 = CRYPTO_zalloc(-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5,
                             "crypto/x509v3/pcy_tree.c",0xb0);
      *(long *)tree = lVar12;
                    /* try { // try from 00b67f08 to 00c67f13 has its CatchHandler @ 00b67fc8 */
      if (lVar12 == 0) {
        CRYPTO_free(tree);
        return 0;
      }
      *(uint *)(tree + 8) = uVar5;
                    /* try { // try from 00b67f14 to 00c6801b has its CatchHandler @ 00b67d30 */
      pAVar20 = OBJ_nid2obj(0x2ea);
      lVar15 = policy_data_new(0,pAVar20,0);
      if (lVar15 == 0) goto LAB_00b687c4;
      lVar18 = level_add_node(lVar12,lVar15,0);
      if (lVar18 == 0) {
        policy_data_free(lVar15);
        goto LAB_00b687c4;
      }
      if (1 < (int)uVar5) {
        puVar16 = (uint *)(lVar12 + 0x38);
        iVar8 = uVar5 - 2;
        do {
          uVar13 = OPENSSL_sk_value(certs,iVar8);
          uVar7 = X509_get_extension_flags();
          plVar14 = (long *)policy_cache_set(uVar13);
          X509_up_ref(uVar13);
          *(undefined8 *)(puVar16 + -6) = uVar13;
          if (*plVar14 == 0) {
            *puVar16 = *puVar16 | 0x200;
            if (uVar24 == 0) goto LAB_00b67fec;
LAB_00b67f94:
            uVar23 = plVar14[2];
            uVar5 = uVar24 - ((uVar7 & 0x20) == 0);
            uVar24 = (uint)uVar23;
            if ((long)(int)uVar5 <= (long)uVar23 || 0x7fffffffffffffff < uVar23) {
              uVar24 = uVar5;
            }
joined_r0x00b68010:
            if (uVar31 == 0) goto LAB_00b68014;
LAB_00b67fb8:
            uVar23 = plVar14[4];
            uVar7 = uVar31 - ((uVar7 & 0x20) == 0);
                    /* catch() { ... } // from try @ 00b67f08 with catch @ 00b67fc8 */
                    /* catch() { ... } // from try @ 00b67e90 with catch @ 00b67fcc */
            uVar31 = (uint)uVar23;
            if ((long)(int)uVar7 <= (long)uVar23 || 0x7fffffffffffffff < uVar23) {
              uVar31 = uVar7;
            }
          }
          else {
            if (uVar24 != 0) goto LAB_00b67f94;
LAB_00b67fec:
            if ((iVar8 == 0) || ((uVar7 >> 5 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00b67e58 with catch @ 00b68000
                       catch() { ... } // from try @ 00b67eb8 with catch @ 00b68000 */
              *puVar16 = *puVar16 | 0x200;
              uVar24 = 0;
              goto joined_r0x00b68010;
            }
            uVar24 = 0;
            if (uVar31 != 0) goto LAB_00b67fb8;
LAB_00b68014:
                    /* try { // try from 00b6801c to 00c680d3 has its CatchHandler @ 00b6801c
                       catch() { ... } // from try @ 00b6801c with catch @ 00b6801c
                       catch() { ... } // from try @ 00b68134 with catch @ 00b6801c */
            *puVar16 = *puVar16 | 0x400;
          }
          puVar16 = puVar16 + 8;
          bVar1 = 0 < iVar8;
          iVar8 = iVar8 + -1;
        } while (bVar1);
      }
    }
                    /* try { // try from 00b67eb8 to 00c67ec3 has its CatchHandler @ 00b68000 */
    if (uVar6 == 0) {
      return 0;
    }
    if (uVar6 >> 2 == 0) {
      if ((uVar6 >> 1 & 1) != 0) goto LAB_00b67dc0;
                    /* try { // try from 00b67ec4 to 00c67f07 has its CatchHandler @ 00b67d30 */
      bVar1 = true;
    }
    else {
      *pexplicit_policy = 1;
      if ((uVar6 >> 1 & 1) != 0) {
        return -2;
      }
      bVar1 = false;
    }
    iVar8 = *(int *)(tree + 8);
    puVar29 = *(undefined8 **)tree;
    if (1 < iVar8) {
      iVar11 = 1;
      puVar30 = puVar29;
      do {
        puVar28 = puVar30 + 4;
        plVar14 = (long *)policy_cache_set(*puVar28);
        iVar8 = OPENSSL_sk_num(plVar14[1]);
        if (0 < iVar8) {
          iVar8 = 0;
          do {
            lVar12 = OPENSSL_sk_value(plVar14[1],iVar8);
            iVar9 = OPENSSL_sk_num(puVar30[1]);
            if (iVar9 < 1) {
LAB_00b68114:
                    /* try { // try from 00b68118 to 00c68133 has its CatchHandler @ 00b681a4 */
              if ((puVar30[2] != 0) &&
                 (lVar12 = level_add_node(puVar28,lVar12,puVar30[2],0), lVar12 == 0))
              goto LAB_00b687c4;
            }
            else {
              bVar3 = false;
              iVar9 = 0;
              do {
                uVar13 = OPENSSL_sk_value(puVar30[1],iVar9);
                    /* try { // try from 00b680d4 to 00c680ef has its CatchHandler @ 00b68184 */
                iVar10 = policy_node_match(puVar30,uVar13,*(undefined8 *)(lVar12 + 8));
                if (iVar10 != 0) {
                  lVar15 = level_add_node(puVar28,lVar12,uVar13,0);
                  if (lVar15 == 0) goto LAB_00b687c4;
                  bVar3 = true;
                }
                iVar9 = iVar9 + 1;
                iVar10 = OPENSSL_sk_num(puVar30[1]);
              } while (iVar9 < iVar10);
              if (!bVar3) goto LAB_00b68114;
            }
                    /* try { // try from 00b68134 to 00c681bf has its CatchHandler @ 00b6801c */
            iVar8 = iVar8 + 1;
            iVar9 = OPENSSL_sk_num(plVar14[1]);
          } while (iVar8 < iVar9);
        }
        if ((*(byte *)((long)puVar30 + 0x39) >> 1 & 1) == 0) {
          iVar8 = OPENSSL_sk_num(puVar30[1]);
          if (0 < iVar8) {
            iVar8 = 0;
            do {
              puVar29 = (undefined8 *)OPENSSL_sk_value(puVar30[1],iVar8);
              if (((*(byte *)((long)puVar30 + 0x19) >> 2 & 1) == 0) &&
                 ((*(byte *)*puVar29 & 1) != 0)) {
                uVar13 = *(undefined8 *)((byte *)*puVar29 + 0x18);
                iVar9 = *(int *)(puVar29 + 2);
                iVar10 = OPENSSL_sk_num(uVar13);
                if ((iVar9 != iVar10) && (iVar9 = OPENSSL_sk_num(uVar13), 0 < iVar9)) {
                  iVar9 = 0;
                  do {
                    lVar12 = OPENSSL_sk_value(uVar13,iVar9);
                    lVar15 = level_find_node(puVar28,puVar29,lVar12);
                    if (lVar15 == 0) {
                      if (lVar12 == 0) {
                        lVar12 = *(long *)((uint *)*puVar29 + 2);
                      }
                      puVar16 = (uint *)policy_data_new(0,lVar12,*(uint *)*puVar29 & 0x10);
                      if (puVar16 != (uint *)0x0) {
                        uVar21 = *(undefined8 *)(*plVar14 + 0x10);
                        *puVar16 = *puVar16 | 4;
                        *(undefined8 *)(puVar16 + 4) = uVar21;
                        lVar12 = level_add_node(puVar28,puVar16,puVar29,tree);
                        if (lVar12 != 0) {
                          uVar7 = 0;
                          goto LAB_00b682a4;
                        }
                        policy_data_free(puVar16);
                      }
                      uVar7 = 1;
                    }
                    else {
                      uVar7 = 4;
                    }
LAB_00b682a4:
                    if ((uVar7 | 4) != 4) {
                      if (uVar7 != 0) goto LAB_00b687c4;
                      break;
                    }
                    iVar9 = iVar9 + 1;
                    iVar10 = OPENSSL_sk_num(uVar13);
                  } while (iVar9 < iVar10);
                }
              }
              else {
                    /* catch() { ... } // from try @ 00b680d4 with catch @ 00b68184 */
                if (*(int *)(puVar29 + 2) == 0) {
                  puVar16 = (uint *)policy_data_new(0,*(undefined8 *)((uint *)*puVar29 + 2),
                                                    *(uint *)*puVar29 & 0x10);
                    /* catch() { ... } // from try @ 00b68118 with catch @ 00b681a4 */
                  if (puVar16 == (uint *)0x0) goto LAB_00b687c4;
                  uVar13 = *(undefined8 *)(*plVar14 + 0x10);
                  *puVar16 = *puVar16 | 4;
                  *(undefined8 *)(puVar16 + 4) = uVar13;
                  lVar12 = level_add_node(puVar28,puVar16,puVar29,tree);
                  if (lVar12 == 0) {
                    policy_data_free(puVar16);
                    goto LAB_00b687c4;
                  }
                }
              }
              iVar8 = iVar8 + 1;
              iVar9 = OPENSSL_sk_num(puVar30[1]);
            } while (iVar8 < iVar9);
          }
          if ((puVar30[2] != 0) &&
             (lVar12 = level_add_node(puVar28,*plVar14,puVar30[2],0), lVar12 == 0))
          goto LAB_00b687c4;
        }
        puVar25 = puVar28;
        if ((*(byte *)((long)puVar30 + 0x39) >> 2 & 1) != 0) {
          uVar13 = puVar30[5];
          iVar8 = OPENSSL_sk_num(uVar13);
          if (0 < iVar8) {
            iVar8 = iVar8 + 1;
            do {
              puVar29 = (undefined8 *)OPENSSL_sk_value(uVar13,iVar8 + -2);
              if ((*(byte *)*puVar29 & 3) != 0) {
                *(int *)(puVar29[1] + 0x10) = *(int *)(puVar29[1] + 0x10) + -1;
                CRYPTO_free(puVar29);
                OPENSSL_sk_delete(uVar13,iVar8 + -2);
              }
              iVar8 = iVar8 + -1;
            } while (1 < iVar8);
          }
        }
        do {
          uVar13 = puVar25[-3];
          iVar8 = OPENSSL_sk_num(uVar13);
          if (0 < iVar8) {
            iVar8 = iVar8 + 1;
            do {
                    /* try { // try from 00b683a0 to 00c68687 has its CatchHandler @ 00b683a0
                       catch() { ... } // from try @ 00b683a0 with catch @ 00b683a0
                       catch() { ... } // from try @ 00b686e4 with catch @ 00b683a0 */
              pvVar17 = (void *)OPENSSL_sk_value(uVar13,iVar8 + -2);
              if (*(int *)((long)pvVar17 + 0x10) == 0) {
                *(int *)(*(long *)((long)pvVar17 + 8) + 0x10) =
                     *(int *)(*(long *)((long)pvVar17 + 8) + 0x10) + -1;
                CRYPTO_free(pvVar17);
                OPENSSL_sk_delete(uVar13,iVar8 + -2);
              }
              iVar8 = iVar8 + -1;
            } while (1 < iVar8);
          }
          pvVar17 = (void *)puVar25[-2];
          puVar29 = puVar25 + -4;
          if ((pvVar17 != (void *)0x0) && (*(int *)((long)pvVar17 + 0x10) == 0)) {
            lVar12 = *(long *)((long)pvVar17 + 8);
            if (lVar12 != 0) {
              *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + -1;
            }
            CRYPTO_free(pvVar17);
            pvVar17 = (void *)0x0;
            puVar25[-2] = 0;
          }
          puVar25 = puVar29;
        } while (puVar29 != *(undefined8 **)tree);
        if (pvVar17 == (void *)0x0) {
          X509_policy_tree_free(tree);
          if (!bVar1) {
            return -2;
          }
          return 1;
        }
        iVar8 = *(int *)(tree + 8);
        iVar11 = iVar11 + 1;
        puVar30 = puVar28;
      } while (iVar11 < iVar8);
    }
    lVar12 = puVar29[(long)iVar8 * 4 + -2];
    pXVar2 = tree + 0x18;
    pXVar26 = pXVar2;
    if (lVar12 != 0) {
      lVar15 = *(long *)pXVar2;
      if (lVar15 == 0) {
        lVar15 = policy_node_cmp_new();
        *(long *)pXVar2 = lVar15;
        if (lVar15 == 0) goto LAB_00b687c4;
      }
      iVar8 = OPENSSL_sk_find(lVar15,lVar12);
      if ((iVar8 == -1) && (iVar8 = OPENSSL_sk_push(*(undefined8 *)pXVar2,lVar12), iVar8 == 0)) {
LAB_00b687c4:
        X509_policy_tree_free(tree);
        return 0;
      }
      pXVar26 = (X509_POLICY_TREE *)&local_68;
    }
    if (1 < *(int *)(tree + 8)) {
      iVar8 = 1;
      lVar12 = *(long *)tree;
      do {
        lVar15 = *(long *)(lVar12 + 0x10);
        if (lVar15 == 0) break;
        iVar11 = OPENSSL_sk_num(*(undefined8 *)(lVar12 + 0x28));
        if (0 < iVar11) {
          iVar11 = 0;
          do {
            lVar18 = OPENSSL_sk_value(*(undefined8 *)(lVar12 + 0x28),iVar11);
            if (*(long *)(lVar18 + 8) == lVar15) {
              lVar19 = *(long *)pXVar26;
              if (lVar19 == 0) {
                lVar19 = policy_node_cmp_new();
                *(long *)pXVar26 = lVar19;
                if (lVar19 != 0) goto LAB_00b68538;
              }
              else {
LAB_00b68538:
                iVar9 = OPENSSL_sk_find(lVar19,lVar18);
                if ((iVar9 != -1) ||
                   (iVar9 = OPENSSL_sk_push(*(undefined8 *)pXVar26,lVar18), iVar9 != 0))
                goto LAB_00b68558;
              }
              if (pXVar26 == (X509_POLICY_TREE *)&local_68) {
                OPENSSL_sk_free(local_68);
                local_68 = 0;
              }
              goto LAB_00b687c4;
            }
LAB_00b68558:
            iVar11 = iVar11 + 1;
            iVar9 = OPENSSL_sk_num(*(undefined8 *)(lVar12 + 0x28));
          } while (iVar11 < iVar9);
        }
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 0x20;
      } while (iVar8 < *(int *)(tree + 8));
    }
    if (pXVar26 == (X509_POLICY_TREE *)&local_68) {
      iVar8 = 2;
    }
    else {
      local_68 = *(undefined8 *)pXVar2;
      iVar8 = 1;
    }
    uVar13 = local_68;
    iVar11 = OPENSSL_sk_num(policy_oids);
    if (0 < iVar11) {
      plVar14 = *(long **)(*(long *)tree + (long)*(int *)(tree + 8) * 0x20 + -0x10);
      iVar11 = OPENSSL_sk_num(policy_oids);
      if (0 < iVar11) {
        iVar11 = 0;
        do {
          pAVar20 = (ASN1_OBJECT *)OPENSSL_sk_value(policy_oids,iVar11);
          iVar9 = OBJ_obj2nid(pAVar20);
          if (iVar9 == 0x2ea) {
            *(uint *)(tree + 0x28) = *(uint *)(tree + 0x28) | 2;
            goto joined_r0x00b68714;
          }
          iVar11 = iVar11 + 1;
          iVar9 = OPENSSL_sk_num(policy_oids);
        } while (iVar11 < iVar9);
      }
      iVar11 = OPENSSL_sk_num(policy_oids);
      if (0 < iVar11) {
        if (plVar14 == (long *)0x0) {
          iVar11 = 0;
          do {
                    /* catch() { ... } // from try @ 00b68688 with catch @ 00b68728 */
            uVar21 = OPENSSL_sk_value(policy_oids,iVar11);
                    /* catch() { ... } // from try @ 00b686c8 with catch @ 00b6872c */
            lVar12 = tree_find_sk(uVar13,uVar21);
            if (lVar12 != 0) {
              lVar15 = *(long *)(tree + 0x20);
                    /* try { // try from 00b68748 to 00c688cf has its CatchHandler @ 00b68748
                       catch() { ... } // from try @ 00b68748 with catch @ 00b68748
                       catch() { ... } // from try @ 00b688f8 with catch @ 00b68748
                       catch() { ... } // from try @ 00b68a40 with catch @ 00b68748
                       catch() { ... } // from try @ 00b68a5c with catch @ 00b68748 */
              if (lVar15 == 0) {
                lVar15 = OPENSSL_sk_new_null();
                *(long *)(tree + 0x20) = lVar15;
                if (lVar15 == 0) break;
              }
              iVar9 = OPENSSL_sk_push(lVar15,lVar12);
              if (iVar9 == 0) goto LAB_00b687c4;
            }
            iVar11 = iVar11 + 1;
            iVar9 = OPENSSL_sk_num(policy_oids);
          } while (iVar11 < iVar9);
        }
        else {
          iVar11 = 0;
          do {
            uVar21 = OPENSSL_sk_value(policy_oids,iVar11);
            lVar12 = tree_find_sk(uVar13,uVar21);
            if (lVar12 == 0) {
                    /* try { // try from 00b68688 to 00c686a3 has its CatchHandler @ 00b68728 */
              puVar22 = (undefined4 *)policy_data_new(0,uVar21,*(uint *)*plVar14 & 0x10);
              if (puVar22 == (undefined4 *)0x0) goto LAB_00b687c4;
              uVar21 = *(undefined8 *)(*plVar14 + 0x10);
              *puVar22 = 0xc;
              *(undefined8 *)(puVar22 + 4) = uVar21;
              lVar12 = level_add_node(0,puVar22,plVar14[1],tree);
            }
            lVar15 = *(long *)(tree + 0x20);
                    /* try { // try from 00b686c8 to 00c686e3 has its CatchHandler @ 00b6872c */
            if (lVar15 == 0) {
              lVar15 = OPENSSL_sk_new_null();
              *(long *)(tree + 0x20) = lVar15;
              if (lVar15 == 0) break;
            }
            iVar9 = OPENSSL_sk_push(lVar15,lVar12);
                    /* try { // try from 00b686e4 to 00c68747 has its CatchHandler @ 00b683a0 */
            if (iVar9 == 0) goto LAB_00b687c4;
            iVar11 = iVar11 + 1;
            iVar9 = OPENSSL_sk_num(policy_oids);
          } while (iVar11 < iVar9);
        }
      }
    }
joined_r0x00b68714:
    if (iVar8 == 2) {
      OPENSSL_sk_free(local_68);
    }
    *ptree = tree;
    if (!bVar1) {
      X509_policy_tree_get0_user_policies(tree);
      iVar8 = OPENSSL_sk_num();
      if (iVar8 < 1) {
        return -2;
      }
    }
  }
  return 1;
}

