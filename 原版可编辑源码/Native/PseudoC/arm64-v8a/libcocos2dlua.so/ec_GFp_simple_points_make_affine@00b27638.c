
undefined4
ec_GFp_simple_points_make_affine(long *param_1,ulong param_2,long *param_3,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *ret;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BN_CTX *c;
  undefined8 *ptr;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_4 == (BN_CTX *)0x0) {
    param_4 = BN_CTX_new();
    c = param_4;
    if (param_4 == (BN_CTX *)0x0) {
      return 0;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_4);
  ret = BN_CTX_get(param_4);
  pBVar2 = BN_CTX_get(param_4);
  uVar4 = 0;
  ptr = (undefined8 *)0x0;
  if ((ret == (BIGNUM *)0x0) || (ptr = (undefined8 *)0x0, pBVar2 == (BIGNUM *)0x0))
  goto LAB_00b279f8;
  ptr = CRYPTO_malloc((int)(param_2 << 3),"crypto/ec/ecp_smpl.c",0x4c8);
  if (ptr != (undefined8 *)0x0) {
    uVar5 = 0;
    do {
      pBVar3 = BN_new();
      ptr[uVar5] = pBVar3;
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_00b279f0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_2);
    iVar1 = BN_is_zero(*(undefined8 *)(*param_3 + 0x18));
    if (iVar1 == 0) {
      pBVar3 = BN_copy((BIGNUM *)*ptr,*(BIGNUM **)(*param_3 + 0x18));
      if (pBVar3 != (BIGNUM *)0x0) goto LAB_00b2772c;
    }
    else {
      if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
        iVar1 = BN_set_word((BIGNUM *)*ptr,1);
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x130))(param_1,(BIGNUM *)*ptr,param_4);
      }
      if (iVar1 != 0) {
LAB_00b2772c:
        if (1 < param_2) {
          lVar6 = 0;
          do {
            iVar1 = BN_is_zero(*(undefined8 *)(param_3[lVar6 + 1] + 0x18));
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*param_1 + 0x108))
                                (param_1,(ptr + lVar6)[1],ptr[lVar6],
                                 *(undefined8 *)(param_3[lVar6 + 1] + 0x18),param_4);
              if (iVar1 == 0) goto LAB_00b279f0;
            }
            else {
              pBVar3 = BN_copy((BIGNUM *)(ptr + lVar6)[1],(BIGNUM *)ptr[lVar6]);
              if (pBVar3 == (BIGNUM *)0x0) goto LAB_00b279f0;
            }
            uVar5 = lVar6 + 2;
            lVar6 = lVar6 + 1;
          } while (uVar5 < param_2);
        }
        lVar6 = param_2 - 1;
        pBVar3 = BN_mod_inverse(ret,(BIGNUM *)ptr[lVar6],(BIGNUM *)param_1[8],param_4);
        if (pBVar3 == (BIGNUM *)0x0) {
          ERR_put_error(0x10,0x89,3,"crypto/ec/ecp_smpl.c",0x4f5);
        }
        else if ((*(code **)(*param_1 + 0x120) == (code *)0x0) ||
                ((iVar1 = (**(code **)(*param_1 + 0x120))(param_1,ret,ret,param_4), iVar1 != 0 &&
                 (iVar1 = (**(code **)(*param_1 + 0x120))(param_1,ret,ret,param_4), iVar1 != 0)))) {
          while (lVar6 != 0) {
            while (iVar1 = BN_is_zero(*(undefined8 *)(param_3[lVar6] + 0x18)), iVar1 != 0) {
              lVar6 = lVar6 + -1;
              if (lVar6 == 0) goto LAB_00b27888;
            }
            iVar1 = (**(code **)(*param_1 + 0x108))(param_1,pBVar2,ptr[lVar6 + -1],ret,param_4);
            if (((iVar1 == 0) ||
                (iVar1 = (**(code **)(*param_1 + 0x108))
                                   (param_1,ret,ret,*(undefined8 *)(param_3[lVar6] + 0x18),param_4),
                iVar1 == 0)) ||
               (pBVar3 = BN_copy(*(BIGNUM **)(param_3[lVar6] + 0x18),pBVar2), lVar6 = lVar6 + -1,
               pBVar3 == (BIGNUM *)0x0)) goto LAB_00b279f0;
          }
LAB_00b27888:
          iVar1 = BN_is_zero(*(undefined8 *)(*param_3 + 0x18));
          if ((iVar1 != 0) ||
             (pBVar2 = BN_copy(*(BIGNUM **)(*param_3 + 0x18),ret), pBVar2 != (BIGNUM *)0x0)) {
            uVar5 = 0;
            goto LAB_00b278b4;
          }
        }
      }
    }
  }
LAB_00b279f0:
  uVar4 = 0;
LAB_00b279f8:
  BN_CTX_end(param_4);
  BN_CTX_free(c);
  if (ptr != (undefined8 *)0x0) {
    uVar5 = 0;
    do {
      if ((BIGNUM *)ptr[uVar5] == (BIGNUM *)0x0) break;
      BN_clear_free((BIGNUM *)ptr[uVar5]);
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_2);
    CRYPTO_free(ptr);
  }
  return uVar4;
LAB_00b278b4:
  do {
    lVar6 = param_3[uVar5];
    iVar1 = BN_is_zero(*(undefined8 *)(lVar6 + 0x18));
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x110))(param_1,ret,*(undefined8 *)(lVar6 + 0x18),param_4);
      if (((iVar1 == 0) ||
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 8),ret,
                              param_4), iVar1 == 0)) ||
         ((iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,ret,ret,*(undefined8 *)(lVar6 + 0x18),param_4), iVar1 == 0 ||
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x10),
                              ret,param_4), iVar1 == 0)))) goto LAB_00b279f0;
      if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
        iVar1 = BN_set_word(*(BIGNUM **)(lVar6 + 0x18),1);
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x130))(param_1,*(BIGNUM **)(lVar6 + 0x18),param_4);
      }
      if (iVar1 == 0) goto LAB_00b279f0;
      *(undefined4 *)(lVar6 + 0x20) = 1;
    }
    uVar5 = uVar5 + 1;
    uVar4 = 1;
  } while (uVar5 < param_2);
  goto LAB_00b279f8;
}

