
int ec_wNAF_mul(EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,ulong param_4,long param_5,
               long param_6,BN_CTX *param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void *ptr;
  undefined8 *ptr_00;
  void *ptr_01;
  BIGNUM *pBVar6;
  long lVar7;
  EC_POINT *pEVar8;
  void *ptr_02;
  void *__dest;
  EC_POINT *pEVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  long *plVar17;
  size_t *psVar18;
  bool bVar19;
  uint uVar20;
  ulong uVar21;
  void *__src;
  long lVar22;
  EC_POINT **ppEVar23;
  ulong uVar24;
  ulong uVar25;
  EC_POINT **points;
  BN_CTX *c;
  long lVar26;
  void *pvVar27;
  size_t num;
  long local_d8;
  EC_POINT *local_d0;
  ulong local_c8;
  ulong local_b8;
  long local_a8;
  long local_98;
  ulong local_68;
  
  if (*(long *)param_1 != *(long *)param_2) {
    iVar3 = 0x9b;
LAB_00b10388:
    ERR_put_error(0x10,0xbb,0x65,"crypto/ec/ec_mult.c",iVar3);
    return 0;
  }
  if ((param_3 == (BIGNUM *)0x0) && (param_4 == 0)) {
    iVar3 = EC_POINT_set_to_infinity(param_1,param_2);
    return iVar3;
  }
  if (param_4 != 0) {
    uVar12 = 0;
    do {
      if (*(long *)param_1 != **(long **)(param_5 + uVar12 * 8)) {
        iVar3 = 0xa5;
        goto LAB_00b10388;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_4);
  }
  if (param_7 == (BN_CTX *)0x0) {
    c = BN_CTX_new();
    param_7 = c;
    if (c != (BN_CTX *)0x0) goto joined_r0x00b1045c;
LAB_00b106c0:
    points = (EC_POINT **)0x0;
    ptr_00 = (undefined8 *)0x0;
    ptr = (void *)0x0;
    pvVar5 = (void *)0x0;
    pEVar8 = (EC_POINT *)0x0;
    ptr_01 = (void *)0x0;
    iVar3 = 0;
    goto LAB_00b106cc;
  }
  c = (BN_CTX *)0x0;
joined_r0x00b1045c:
  if (param_3 == (BIGNUM *)0x0) {
    local_b8 = 0;
    local_98 = 0;
    local_d8 = 0;
    local_d0 = (EC_POINT *)0x0;
    uVar12 = 0;
    local_a8 = 0;
  }
  else {
    local_d0 = EC_GROUP_get0_generator(param_1);
    if (local_d0 == (EC_POINT *)0x0) {
      ERR_put_error(0x10,0xbb,0x71,"crypto/ec/ec_mult.c",0xb3);
      goto LAB_00b106c0;
    }
    local_a8 = *(long *)(param_1 + 0xa0);
    if (((local_a8 == 0) || (*(long *)(local_a8 + 0x10) == 0)) ||
       (iVar3 = EC_POINT_cmp(param_1,local_d0,(EC_POINT *)**(undefined8 **)(local_a8 + 0x20),param_7
                            ), iVar3 != 0)) {
      local_b8 = 0;
      local_d8 = 0;
      local_a8 = 0;
      uVar12 = 1;
      local_98 = 1;
    }
    else {
      local_b8 = *(ulong *)(local_a8 + 8);
      iVar3 = BN_num_bits(param_3);
      uVar24 = *(ulong *)(local_a8 + 0x10);
      uVar13 = 0;
      if (local_b8 != 0) {
        uVar13 = (ulong)(long)iVar3 / local_b8;
      }
      uVar25 = *(long *)(local_a8 + 0x18) - 1;
      uVar12 = uVar24;
      if (uVar13 + 1 <= uVar24) {
        uVar12 = uVar13 + 1;
      }
      if (*(long *)(local_a8 + 0x28) != uVar24 << (uVar25 & 0x3f)) {
        ERR_put_error(0x10,0xbb,0x44,"crypto/ec/ec_mult.c",0xcf);
        goto LAB_00b106c0;
      }
      local_d8 = 1L << (uVar25 & 0x3f);
      local_98 = 0;
    }
  }
  local_c8 = uVar12 + param_4;
  iVar3 = (int)local_c8 * 8;
  pvVar5 = CRYPTO_malloc(iVar3,"crypto/ec/ec_mult.c",0xdd);
  ptr = CRYPTO_malloc(iVar3,"crypto/ec/ec_mult.c",0xde);
  ptr_00 = CRYPTO_malloc(iVar3 + 8,"crypto/ec/ec_mult.c",0xdf);
  ptr_01 = CRYPTO_malloc(iVar3,"crypto/ec/ec_mult.c",0xe1);
  if (((ptr_00 == (undefined8 *)0x0) || (*ptr_00 = 0, pvVar5 == (void *)0x0)) ||
     ((ptr == (void *)0x0 || (ptr_01 == (void *)0x0)))) {
    ERR_put_error(0x10,0xbb,0x41,"crypto/ec/ec_mult.c",0xe8);
    points = (EC_POINT **)0x0;
  }
  else {
    uVar24 = local_98 + param_4;
    if (uVar24 == 0) {
      uVar13 = 0;
      num = 0;
    }
    else {
      lVar26 = 0;
      num = 0;
      uVar25 = 0;
      uVar21 = 0;
      do {
        pBVar6 = param_3;
        if (uVar25 < param_4) {
          pBVar6 = *(BIGNUM **)(param_6 + uVar25 * 8);
        }
        uVar4 = BN_num_bits(pBVar6);
        if (uVar4 < 2000) {
          if (uVar4 < 800) {
            if (uVar4 < 300) {
              if (uVar4 < 0x46) {
                lVar22 = 1;
                if (0x13 < uVar4) {
                  lVar22 = 2;
                }
              }
              else {
                lVar22 = 3;
              }
            }
            else {
              lVar22 = 4;
            }
          }
          else {
            lVar22 = 5;
          }
        }
        else {
          lVar22 = 6;
        }
        *(long *)((long)pvVar5 + uVar25 * 8) = lVar22;
        ptr_00[uVar25 + 1] = 0;
        pBVar6 = param_3;
        if (uVar25 < param_4) {
          pBVar6 = *(BIGNUM **)(param_6 + uVar25 * 8);
        }
        lVar7 = bn_compute_wNAF(pBVar6,lVar22,(long)ptr + lVar26);
        *(long *)((long)ptr_00 + lVar26) = lVar7;
        if (lVar7 == 0) {
          points = (EC_POINT **)0x0;
          pEVar8 = (EC_POINT *)0x0;
          iVar3 = 0;
          goto LAB_00b106cc;
        }
        uVar13 = *(ulong *)((long)ptr + uVar25 * 8);
        num = (1L << (lVar22 - 1U & 0x3f)) + num;
        uVar25 = uVar25 + 1;
        if (uVar13 <= uVar21) {
          uVar13 = uVar21;
        }
        lVar26 = lVar26 + 8;
        uVar21 = uVar13;
      } while (uVar25 < uVar24);
    }
    if (uVar12 == 0) {
LAB_00b10ab0:
      points = CRYPTO_malloc((int)num * 8 + 8,"crypto/ec/ec_mult.c",0x173);
      if (points != (EC_POINT **)0x0) {
        points[num] = (EC_POINT *)0x0;
        ppEVar23 = points;
        if (uVar24 != 0) {
          uVar12 = 0;
          do {
            uVar25 = 0;
            *(EC_POINT ***)((long)ptr_01 + uVar12 * 8) = ppEVar23;
            do {
              pEVar8 = EC_POINT_new(param_1);
              *ppEVar23 = pEVar8;
              if (pEVar8 == (EC_POINT *)0x0) goto LAB_00b10b90;
              uVar25 = uVar25 + 1;
              ppEVar23 = ppEVar23 + 1;
            } while (uVar25 < (ulong)(1L << (*(long *)((long)pvVar5 + uVar12 * 8) - 1U & 0x3f)));
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar24);
        }
        if (ppEVar23 != points + num) {
          ERR_put_error(0x10,0xbb,0x44,"crypto/ec/ec_mult.c",0x186);
LAB_00b10b90:
          pEVar8 = (EC_POINT *)0x0;
LAB_00b10b98:
          iVar3 = 0;
          goto LAB_00b106cc;
        }
        pEVar8 = EC_POINT_new(param_1);
        if (pEVar8 == (EC_POINT *)0x0) {
          iVar3 = 0;
          goto LAB_00b106cc;
        }
        if (uVar24 != 0) {
          uVar12 = 0;
          do {
            pEVar9 = (EC_POINT *)**(undefined8 **)((long)ptr_01 + uVar12 * 8);
            if (uVar12 < param_4) {
              iVar3 = EC_POINT_copy(pEVar9,*(EC_POINT **)(param_5 + uVar12 * 8));
            }
            else {
              iVar3 = EC_POINT_copy(pEVar9,local_d0);
            }
            if (iVar3 == 0) goto LAB_00b10b98;
            if (1 < *(ulong *)((long)pvVar5 + uVar12 * 8)) {
              iVar3 = EC_POINT_dbl(param_1,pEVar8,
                                   (EC_POINT *)**(undefined8 **)((long)ptr_01 + uVar12 * 8),param_7)
              ;
              if (iVar3 == 0) goto LAB_00b10b98;
              if (*(long *)((long)pvVar5 + uVar12 * 8) != 1) {
                lVar26 = 0;
                do {
                  puVar16 = (undefined8 *)(*(long *)((long)ptr_01 + uVar12 * 8) + lVar26 * 8);
                  iVar3 = EC_POINT_add(param_1,(EC_POINT *)puVar16[1],(EC_POINT *)*puVar16,pEVar8,
                                       param_7);
                  if (iVar3 == 0) goto LAB_00b10b98;
                  uVar25 = lVar26 + 2;
                  lVar26 = lVar26 + 1;
                } while (uVar25 < (ulong)(1L << (*(long *)((long)pvVar5 + uVar12 * 8) - 1U & 0x3f)))
                ;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar24);
        }
        iVar3 = EC_POINTs_make_affine(param_1,num,points,param_7);
        if (iVar3 == 0) {
LAB_00b10e00:
          iVar3 = 0;
        }
        else {
          uVar4 = (int)uVar13 - 1;
          if ((int)uVar4 < 0) {
LAB_00b10f28:
            iVar3 = EC_POINT_set_to_infinity(param_1,param_2);
joined_r0x00b10f34:
            if (iVar3 == 0) goto LAB_00b10e00;
          }
          else {
            if (local_c8 == 0) {
              uVar20 = 0xffffffff;
              if ((int)uVar4 < 0) {
                uVar20 = ~uVar4;
              }
              if (uVar20 + uVar4 < 0xfffffffe) {
                uVar20 = uVar20 + uVar4 + 2;
                uVar11 = uVar20 & 0xfffffffe;
                if (uVar11 != 0) {
                  uVar4 = uVar4 - uVar11;
                  uVar14 = uVar11;
                  do {
                    uVar14 = uVar14 - 2;
                  } while (uVar14 != 0);
                  if (uVar20 == uVar11) goto LAB_00b10f28;
                }
              }
              iVar3 = uVar4 + 1;
              do {
                iVar3 = iVar3 + -1;
              } while (0 < iVar3);
              goto LAB_00b10f28;
            }
            uVar20 = 0;
            bVar19 = true;
            uVar12 = (long)(int)uVar4;
            do {
              if (!bVar19) {
                iVar3 = EC_POINT_dbl(param_1,param_2,param_2,param_7);
                bVar19 = false;
                if (iVar3 == 0) {
LAB_00b10e68:
                  iVar3 = 0;
                  goto LAB_00b106cc;
                }
              }
              uVar24 = 0;
              do {
                if ((uVar12 < *(ulong *)((long)ptr + uVar24 * 8)) &&
                   (cVar2 = *(char *)(ptr_00[uVar24] + uVar12), cVar2 != '\0')) {
                  uVar11 = (uint)cVar2;
                  uVar4 = -uVar11;
                  if (-1 < cVar2) {
                    uVar4 = uVar11;
                  }
                  if (uVar20 != (uVar11 & 0x80) >> 7) {
                    if ((!bVar19) && (iVar3 = EC_POINT_invert(param_1,param_2,param_7), iVar3 == 0))
                    {
                      iVar3 = 0;
                      goto LAB_00b106cc;
                    }
                    uVar20 = (uint)(uVar20 == 0);
                  }
                  pEVar9 = *(EC_POINT **)
                            (*(long *)((long)ptr_01 + uVar24 * 8) + (long)((int)uVar4 >> 1) * 8);
                  if (bVar19) {
                    iVar3 = EC_POINT_copy(param_2,pEVar9);
                    bVar19 = false;
                  }
                  else {
                    iVar3 = EC_POINT_add(param_1,param_2,param_2,pEVar9,param_7);
                  }
                  if (iVar3 == 0) goto LAB_00b10e68;
                }
                uVar24 = uVar24 + 1;
              } while (uVar24 < local_c8);
              bVar1 = 0 < (long)uVar12;
              uVar12 = uVar12 - 1;
            } while (bVar1);
            if (bVar19) goto LAB_00b10f28;
            if (uVar20 != 0) {
              iVar3 = EC_POINT_invert(param_1,param_2,param_7);
              goto joined_r0x00b10f34;
            }
          }
          iVar3 = 1;
        }
        goto LAB_00b106cc;
      }
      ERR_put_error(0x10,0xbb,0x41,"crypto/ec/ec_mult.c",0x175);
    }
    else {
      if (local_a8 == 0) {
        if ((int)local_98 != 0) goto LAB_00b10ab0;
        iVar3 = 0x106;
LAB_00b10874:
        ERR_put_error(0x10,0xbb,0x44,"crypto/ec/ec_mult.c",iVar3);
      }
      else {
        local_68 = 0;
        if ((int)local_98 != 0) {
          iVar3 = 0x10f;
          goto LAB_00b10874;
        }
        uVar10 = *(undefined8 *)(local_a8 + 0x18);
        *(undefined8 *)((long)pvVar5 + param_4 * 8) = uVar10;
        ptr_02 = (void *)bn_compute_wNAF(param_3,uVar10,&local_68);
        if (ptr_02 != (void *)0x0) {
          if (local_68 <= uVar13) {
            local_c8 = param_4 + 1;
            ptr_00[param_4] = ptr_02;
            ptr_00[local_c8] = 0;
            *(ulong *)((long)ptr + param_4 * 8) = local_68;
            *(undefined8 *)((long)ptr_01 + param_4 * 8) = *(undefined8 *)(local_a8 + 0x20);
            goto LAB_00b10ab0;
          }
          if (local_68 < uVar12 * local_b8) {
            local_c8 = 0;
            if (local_b8 != 0) {
              local_c8 = ((local_b8 + local_68) - 1) / local_b8;
            }
            if (*(ulong *)(local_a8 + 0x10) < local_c8) {
              ERR_put_error(0x10,0xbb,0x44,"crypto/ec/ec_mult.c",0x13a);
              CRYPTO_free(ptr_02);
              goto LAB_00b10878;
            }
            local_c8 = local_c8 + param_4;
          }
          if (param_4 < local_c8) {
            lVar26 = param_4 * 8;
            plVar17 = *(long **)(local_a8 + 0x20);
            pvVar15 = ptr_01;
            puVar16 = ptr_00;
            uVar25 = uVar13;
            __src = ptr_02;
            uVar12 = param_4;
            pvVar27 = ptr;
            do {
              if (uVar12 < local_c8 - 1) {
                psVar18 = (size_t *)((long)pvVar27 + lVar26);
                *psVar18 = local_b8;
                if (local_b8 <= local_68) {
                  uVar13 = *(ulong *)((long)pvVar27 + lVar26);
                  local_68 = local_68 - local_b8;
                  goto LAB_00b10a04;
                }
                ERR_put_error(0x10,0xbb,0x44,"crypto/ec/ec_mult.c",0x149);
LAB_00b10ea0:
                CRYPTO_free(ptr_02);
                goto LAB_00b10878;
              }
              psVar18 = (size_t *)((long)ptr + uVar12 * 8);
              *(ulong *)((long)pvVar27 + lVar26) = local_68;
              uVar13 = local_68;
LAB_00b10a04:
              (puVar16 + param_4)[1] = 0;
              __dest = CRYPTO_malloc((int)uVar13,"crypto/ec/ec_mult.c",0x156);
              puVar16[param_4] = __dest;
              if (__dest == (void *)0x0) {
                ERR_put_error(0x10,0xbb,0x41,"crypto/ec/ec_mult.c",0x158);
                goto LAB_00b10ea0;
              }
              memcpy(__dest,__src,*psVar18);
              if (*plVar17 == 0) {
                ERR_put_error(0x10,0xbb,0x44,"crypto/ec/ec_mult.c",0x161);
                goto LAB_00b10ea0;
              }
              uVar13 = *psVar18;
              uVar12 = uVar12 + 1;
              *(long **)((long)pvVar15 + lVar26) = plVar17;
              if (uVar13 <= uVar25) {
                uVar13 = uVar25;
              }
              __src = (void *)((long)__src + local_b8);
              pvVar27 = (void *)((long)pvVar27 + 8);
              puVar16 = puVar16 + 1;
              plVar17 = plVar17 + local_d8;
              pvVar15 = (void *)((long)pvVar15 + 8);
              uVar25 = uVar13;
            } while (uVar12 < local_c8);
          }
          CRYPTO_free(ptr_02);
          goto LAB_00b10ab0;
        }
      }
LAB_00b10878:
      points = (EC_POINT **)0x0;
    }
  }
  pEVar8 = (EC_POINT *)0x0;
  iVar3 = 0;
LAB_00b106cc:
  BN_CTX_free(c);
  EC_POINT_free(pEVar8);
  CRYPTO_free(pvVar5);
  CRYPTO_free(ptr);
  if (ptr_00 != (undefined8 *)0x0) {
    pvVar5 = (void *)*ptr_00;
    puVar16 = ptr_00;
    while (pvVar5 != (void *)0x0) {
      puVar16 = puVar16 + 1;
      CRYPTO_free(pvVar5);
      pvVar5 = (void *)*puVar16;
    }
    CRYPTO_free(ptr_00);
  }
  if (points != (EC_POINT **)0x0) {
    pEVar8 = *points;
    ppEVar23 = points;
    while (pEVar8 != (EC_POINT *)0x0) {
      ppEVar23 = ppEVar23 + 1;
      EC_POINT_clear_free(pEVar8);
      pEVar8 = *ppEVar23;
    }
    CRYPTO_free(points);
  }
  CRYPTO_free(ptr_01);
  return iVar3;
}

