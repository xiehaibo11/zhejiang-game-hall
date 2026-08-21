
bool ec_GFp_simple_set_compressed_coordinates
               (EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,int param_4,BN_CTX *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  BIGNUM *pBVar4;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *ret;
  ulong uVar5;
  int line;
  code *pcVar6;
  BN_CTX *c;
  
  ERR_clear_error();
  if (param_5 == (BN_CTX *)0x0) {
    param_5 = BN_CTX_new();
    c = param_5;
    if (param_5 == (BN_CTX *)0x0) {
      return false;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_5);
  pBVar4 = BN_CTX_get(param_5);
  r = BN_CTX_get(param_5);
  r_00 = BN_CTX_get(param_5);
  ret = BN_CTX_get(param_5);
  if ((ret != (BIGNUM *)0x0) &&
     (iVar2 = BN_nnmod(r_00,param_3,*(BIGNUM **)(param_1 + 0x40),param_5), iVar2 != 0)) {
    if (*(long *)(*(long *)param_1 + 0x128) == 0) {
      iVar2 = (**(code **)(*(long *)param_1 + 0x110))(param_1,r,param_3,param_5);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar4,r,param_3,param_5);
        goto joined_r0x00b2501c;
      }
    }
    else {
      iVar2 = BN_mod_sqr(r,param_3,*(BIGNUM **)(param_1 + 0x40),param_5);
      if (iVar2 != 0) {
        iVar2 = BN_mod_mul(pBVar4,r,param_3,*(BIGNUM **)(param_1 + 0x40),param_5);
joined_r0x00b2501c:
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x70) == 0) {
            pcVar6 = *(code **)(*(long *)param_1 + 0x128);
            if (pcVar6 == (code *)0x0) {
              iVar2 = (**(code **)(*(long *)param_1 + 0x108))
                                (param_1,r,*(undefined8 *)(param_1 + 0x60),r_00,param_5);
            }
            else {
              iVar2 = (*pcVar6)(param_1,r,*(undefined8 *)(param_1 + 0x60),param_5);
              if (iVar2 == 0) goto LAB_00b25234;
              iVar2 = BN_mod_mul(r,r,r_00,*(BIGNUM **)(param_1 + 0x40),param_5);
            }
            if (iVar2 != 0) {
              iVar2 = BN_mod_add_quick(pBVar4,pBVar4,r,*(BIGNUM **)(param_1 + 0x40));
              goto joined_r0x00b2509c;
            }
          }
          else {
            iVar2 = BN_mod_lshift1_quick(r,r_00,*(BIGNUM **)(param_1 + 0x40));
            if ((iVar2 != 0) &&
               (iVar2 = BN_mod_add_quick(r,r,r_00,*(BIGNUM **)(param_1 + 0x40)), iVar2 != 0)) {
              iVar2 = BN_mod_sub_quick(pBVar4,pBVar4,r,*(BIGNUM **)(param_1 + 0x40));
joined_r0x00b2509c:
              if (iVar2 != 0) {
                if (*(code **)(*(long *)param_1 + 0x128) == (code *)0x0) {
                  iVar2 = BN_mod_add_quick(pBVar4,pBVar4,*(BIGNUM **)(param_1 + 0x68),
                                           *(BIGNUM **)(param_1 + 0x40));
                }
                else {
                  iVar2 = (**(code **)(*(long *)param_1 + 0x128))
                                    (param_1,r,*(BIGNUM **)(param_1 + 0x68),param_5);
                  if (iVar2 == 0) goto LAB_00b25234;
                  iVar2 = BN_mod_add_quick(pBVar4,pBVar4,r,*(BIGNUM **)(param_1 + 0x40));
                }
                if (iVar2 != 0) {
                  pBVar4 = BN_mod_sqrt(ret,pBVar4,*(BIGNUM **)(param_1 + 0x40),param_5);
                  if (pBVar4 == (BIGNUM *)0x0) {
                    uVar5 = ERR_peek_last_error();
                    if ((uVar5 & 0xff000fff) == 0x300006f) {
                      ERR_clear_error();
                      iVar2 = 0x6e;
                      line = 0x71;
                    }
                    else {
                      iVar2 = 3;
                      line = 0x74;
                    }
                  }
                  else {
                    uVar3 = BN_is_odd(ret);
                    if (uVar3 != (param_4 != 0)) {
                      iVar2 = BN_is_zero(ret);
                      if (iVar2 == 0) {
                        iVar2 = BN_usub(ret,*(BIGNUM **)(param_1 + 0x40),ret);
                        if (iVar2 != 0) goto LAB_00b2511c;
                      }
                      else {
                        iVar2 = BN_kronecker(r_00,*(BIGNUM **)(param_1 + 0x40),param_5);
                        if (iVar2 != -2) {
                          if (iVar2 == 1) {
                            iVar2 = 0x6d;
                            line = 0x82;
                          }
                          else {
                            iVar2 = 0x6e;
                            line = 0x88;
                          }
                          goto LAB_00b25230;
                        }
                      }
                      goto LAB_00b25234;
                    }
LAB_00b2511c:
                    uVar3 = BN_is_odd(ret);
                    if (uVar3 == (param_4 != 0)) {
                      iVar2 = EC_POINT_set_affine_coordinates_GFp(param_1,param_2,r_00,ret,param_5);
                      bVar1 = iVar2 != 0;
                      goto LAB_00b25238;
                    }
                    iVar2 = 0x44;
                    line = 0x90;
                  }
LAB_00b25230:
                  ERR_put_error(0x10,0xa9,iVar2,"crypto/ec/ecp_oct.c",line);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00b25234:
  bVar1 = false;
LAB_00b25238:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return bVar1;
}

