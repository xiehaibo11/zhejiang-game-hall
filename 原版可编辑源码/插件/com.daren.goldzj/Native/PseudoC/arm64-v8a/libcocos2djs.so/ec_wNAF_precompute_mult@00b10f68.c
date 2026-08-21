
undefined8 ec_wNAF_precompute_mult(EC_GROUP *param_1,BN_CTX *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *ptr;
  long lVar3;
  EC_POINT *pEVar4;
  BIGNUM *a;
  ulong uVar5;
  BN_CTX *c;
  ulong uVar6;
  EC_POINT **ppEVar7;
  EC_POINT *r;
  EC_POINT *dst;
  ulong uVar8;
  undefined8 uVar9;
  ulong num;
  EC_POINT **points;
  ulong local_88;
  
  EC_pre_comp_free();
  if (param_1 == (EC_GROUP *)0x0) {
    return 0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x40,"crypto/ec/ec_mult.c",0x34);
  if (ptr == (undefined8 *)0x0) {
    ERR_put_error(0x10,0xc4,0x41,"crypto/ec/ec_mult.c",0x36);
    return 0;
  }
  *ptr = param_1;
  ptr[1] = 8;
  ptr[3] = 4;
  *(undefined4 *)(ptr + 6) = 1;
  lVar3 = CRYPTO_THREAD_lock_new();
  ptr[7] = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x10,0xc4,0x41,"crypto/ec/ec_mult.c",0x41);
    CRYPTO_free(ptr);
    return 0;
  }
  pEVar4 = EC_GROUP_get0_generator(param_1);
  if (pEVar4 == (EC_POINT *)0x0) {
    ERR_put_error(0x10,0xbc,0x71,"crypto/ec/ec_mult.c",0x21e);
    c = (BN_CTX *)0x0;
    dst = (EC_POINT *)0x0;
    r = (EC_POINT *)0x0;
    points = (EC_POINT **)0x0;
    uVar9 = 0;
joined_r0x00b11080:
    if (param_2 == (BN_CTX *)0x0) goto LAB_00b110f4;
  }
  else {
    if (param_2 == (BN_CTX *)0x0) {
      param_2 = BN_CTX_new();
      c = param_2;
      if (param_2 == (BN_CTX *)0x0) {
        uVar9 = 0;
        points = (EC_POINT **)0x0;
        r = (EC_POINT *)0x0;
        dst = (EC_POINT *)0x0;
        goto LAB_00b110f4;
      }
    }
    else {
      c = (BN_CTX *)0x0;
    }
    BN_CTX_start(param_2);
    a = (BIGNUM *)EC_GROUP_get0_order(param_1);
    if (a != (BIGNUM *)0x0) {
      iVar1 = BN_is_zero(a);
      if (iVar1 == 0) {
        uVar2 = BN_num_bits(a);
        if (uVar2 < 2000) {
          if (uVar2 < 800) {
            if (uVar2 < 300) {
              if (uVar2 < 0x46) {
                uVar5 = 1;
                if (0x13 < uVar2) {
                  uVar5 = 2;
                }
              }
              else {
                uVar5 = 3;
              }
            }
            else {
              uVar5 = 4;
            }
            goto LAB_00b11180;
          }
          lVar3 = 5;
        }
        else {
          uVar5 = 6;
LAB_00b11180:
          lVar3 = 4;
          if (4 < uVar5) {
            lVar3 = 6;
          }
        }
        uVar5 = (long)(int)uVar2 + 7U >> 3;
        uVar6 = lVar3 - 1;
        num = uVar5 << (uVar6 & 0x3f);
        points = CRYPTO_malloc((int)num * 8 + 8,"crypto/ec/ec_mult.c",0x248);
        if (points != (EC_POINT **)0x0) {
          points[num] = (EC_POINT *)0x0;
          r = EC_POINT_new(param_1);
          if (num != 0) {
            uVar8 = 0;
            do {
              points[uVar8] = r;
              if (r == (EC_POINT *)0x0) {
                iVar1 = 0x252;
                r = (EC_POINT *)0x0;
                goto LAB_00b11414;
              }
              uVar8 = uVar8 + 1;
              r = EC_POINT_new(param_1);
            } while (uVar8 < num);
          }
          if ((r == (EC_POINT *)0x0) || (dst = EC_POINT_new(param_1), dst == (EC_POINT *)0x0)) {
            iVar1 = 0x259;
LAB_00b11414:
            ERR_put_error(0x10,0xbc,0x41,"crypto/ec/ec_mult.c",iVar1);
            dst = (EC_POINT *)0x0;
          }
          else {
            iVar1 = EC_POINT_copy(dst,pEVar4);
            if (iVar1 != 0) {
              if (uVar5 != 0) {
                uVar8 = 0;
                if (uVar6 == 0) {
                  do {
                    iVar1 = EC_POINT_dbl(param_1,r,dst,param_2);
                    if (((iVar1 == 0) || (iVar1 = EC_POINT_copy(points[uVar8],dst), iVar1 == 0)) ||
                       ((uVar8 < uVar5 - 1 &&
                        ((((iVar1 = EC_POINT_dbl(param_1,dst,r,param_2), iVar1 == 0 ||
                           (iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0)) ||
                          (iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0)) ||
                         (((iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0 ||
                           (iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0)) ||
                          ((iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0 ||
                           (iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0))))))))))
                    goto LAB_00b1141c;
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < uVar5);
                }
                else {
                  local_88 = 0;
                  ppEVar7 = points;
                  do {
                    iVar1 = EC_POINT_dbl(param_1,r,dst,param_2);
                    if ((iVar1 == 0) || (iVar1 = EC_POINT_copy(*ppEVar7,dst), iVar1 == 0))
                    goto LAB_00b1141c;
                    ppEVar7 = ppEVar7 + 1;
                    uVar8 = 1;
                    do {
                      iVar1 = EC_POINT_add(param_1,*ppEVar7,r,ppEVar7[-1],param_2);
                      if (iVar1 == 0) goto LAB_00b1141c;
                      uVar8 = uVar8 + 1;
                      ppEVar7 = ppEVar7 + 1;
                    } while (uVar8 < (ulong)(1L << (uVar6 & 0x3f)));
                    if ((local_88 < uVar5 - 1) &&
                       (((((iVar1 = EC_POINT_dbl(param_1,dst,r,param_2), iVar1 == 0 ||
                           (iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0)) ||
                          (iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0)) ||
                         ((iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0 ||
                          (iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0)))) ||
                        ((iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0 ||
                         (iVar1 = EC_POINT_dbl(param_1,dst,dst,param_2), iVar1 == 0))))))
                    goto LAB_00b1141c;
                    local_88 = local_88 + 1;
                  } while (local_88 < uVar5);
                }
              }
              iVar1 = EC_POINTs_make_affine(param_1,num,points,param_2);
              if (iVar1 != 0) {
                ptr[2] = uVar5;
                ptr[5] = num;
                ptr[3] = lVar3;
                ptr[4] = points;
                *ptr = param_1;
                ptr[1] = 8;
                *(undefined4 *)(param_1 + 0x98) = 5;
                *(undefined8 **)(param_1 + 0xa0) = ptr;
                uVar9 = 1;
                points = (EC_POINT **)0x0;
                ptr = (undefined8 *)0x0;
                goto joined_r0x00b11080;
              }
            }
          }
LAB_00b1141c:
          uVar9 = 0;
          goto joined_r0x00b11080;
        }
        ERR_put_error(0x10,0xbc,0x41,"crypto/ec/ec_mult.c",0x24a);
        uVar9 = 0;
        r = (EC_POINT *)0x0;
        dst = (EC_POINT *)0x0;
        goto LAB_00b110ec;
      }
      ERR_put_error(0x10,0xbc,0x72,"crypto/ec/ec_mult.c",0x22e);
    }
    uVar9 = 0;
    points = (EC_POINT **)0x0;
    r = (EC_POINT *)0x0;
    dst = (EC_POINT *)0x0;
  }
LAB_00b110ec:
  BN_CTX_end(param_2);
LAB_00b110f4:
  BN_CTX_free(c);
  EC_ec_pre_comp_free(ptr);
  if (points != (EC_POINT **)0x0) {
    pEVar4 = *points;
    ppEVar7 = points;
    while (pEVar4 != (EC_POINT *)0x0) {
      ppEVar7 = ppEVar7 + 1;
      EC_POINT_free(pEVar4);
      pEVar4 = *ppEVar7;
    }
    CRYPTO_free(points);
  }
  EC_POINT_free(r);
  EC_POINT_free(dst);
  return uVar9;
}

