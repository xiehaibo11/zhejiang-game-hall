
int FUN_00bf355c(EC_GROUP *param_1,EC_POINT *param_2,long param_3,EC_POINT *param_4,BN_CTX *param_5)

{
  bool bVar1;
  BIGNUM *a;
  BIGNUM *a_00;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  BIGNUM *pBVar6;
  BIGNUM *a_01;
  long lVar7;
  long lVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  BIGNUM *a_02;
  ulong uVar11;
  ulong uVar12;
  BIGNUM *pBVar13;
  ulong local_78;
  
  if (param_2 == param_4) {
    ERR_put_error(0x10,0xd0,0x70,"crypto/ec/ec2_mult.c",0xe6);
    return 0;
  }
  if ((((param_3 == 0) || (iVar3 = BN_is_zero(param_3), param_4 == (EC_POINT *)0x0)) || (iVar3 != 0)
      ) || (iVar3 = EC_POINT_is_at_infinity(param_1,param_4), iVar3 != 0)) {
    iVar3 = EC_POINT_set_to_infinity(param_1,param_2);
    return iVar3;
  }
  if (*(int *)(param_4 + 0x20) == 0) {
    return 0;
  }
  BN_CTX_start(param_5);
  pBVar6 = BN_CTX_get(param_5);
  a_01 = BN_CTX_get(param_5);
  if (a_01 != (BIGNUM *)0x0) {
    a = *(BIGNUM **)(param_2 + 8);
    a_00 = *(BIGNUM **)(param_2 + 0x10);
    uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
    bn_wexpand(pBVar6,uVar4);
    uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
    bn_wexpand(a_01,uVar4);
    uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
    bn_wexpand(a,uVar4);
    uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
    bn_wexpand(a_00,uVar4);
    iVar3 = BN_GF2m_mod_arr(pBVar6,*(undefined8 *)(param_4 + 8),param_1 + 0x48);
    if (((iVar3 != 0) && (iVar3 = BN_set_word(a_01,1), iVar3 != 0)) &&
       ((iVar3 = (**(code **)(*(long *)param_1 + 0x110))(param_1,a_00,pBVar6,param_5), iVar3 != 0 &&
        ((iVar3 = (**(code **)(*(long *)param_1 + 0x110))(param_1,a,a_00,param_5), iVar3 != 0 &&
         (iVar3 = BN_GF2m_add(a,a,*(undefined8 *)(param_1 + 0x68)), iVar3 != 0)))))) {
      iVar3 = bn_get_top(param_3);
      lVar7 = bn_get_words(param_3);
      uVar11 = 0x8000000000000000;
      do {
        uVar12 = uVar11 & *(ulong *)(lVar7 + (long)(iVar3 + -1) * 8);
        uVar11 = uVar11 >> 1;
      } while (uVar12 == 0);
      iVar5 = iVar3 + -2;
      if (uVar11 != 0) {
        iVar5 = iVar3 + -1;
      }
      if (-1 < iVar5) {
        local_78 = 0x8000000000000000;
        if (uVar11 != 0) {
          local_78 = uVar11;
        }
        lVar7 = (long)iVar5;
        do {
          lVar8 = bn_get_words(param_3);
          uVar11 = *(ulong *)(lVar8 + lVar7 * 8);
          do {
            uVar12 = local_78 & uVar11;
            uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
            BN_consttime_swap(uVar12,pBVar6,a,uVar4);
            uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
            BN_consttime_swap(uVar12,a_01,a_00,uVar4);
            pBVar13 = *(BIGNUM **)(param_4 + 8);
            BN_CTX_start(param_5);
            pBVar9 = BN_CTX_get(param_5);
            pBVar10 = BN_CTX_get(param_5);
            if (((((pBVar10 == (BIGNUM *)0x0) ||
                  (pBVar13 = BN_copy(pBVar9,pBVar13), pBVar13 == (BIGNUM *)0x0)) ||
                 (iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a,a,a_01,param_5),
                 iVar3 == 0)) ||
                ((iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a_00,a_00,pBVar6,param_5),
                 iVar3 == 0 ||
                 (iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar10,a,a_00,param_5),
                 iVar3 == 0)))) ||
               ((iVar3 = BN_GF2m_add(a_00,a_00,a), iVar3 == 0 ||
                ((iVar3 = (**(code **)(*(long *)param_1 + 0x110))(param_1,a_00,a_00,param_5),
                 iVar3 == 0 ||
                 (iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a,a_00,pBVar9,param_5),
                 iVar3 == 0)))))) {
LAB_00bf3ab8:
              BN_CTX_end(param_5);
              goto LAB_00bf3ac0;
            }
            iVar3 = BN_GF2m_add(a,a,pBVar10);
            BN_CTX_end(param_5);
            if (iVar3 == 0) goto LAB_00bf3ac0;
            BN_CTX_start(param_5);
            pBVar9 = BN_CTX_get(param_5);
            if (((((pBVar9 == (BIGNUM *)0x0) ||
                  (iVar3 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar6,pBVar6,param_5),
                  iVar3 == 0)) ||
                 (iVar3 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar9,a_01,param_5),
                 iVar3 == 0)) ||
                ((iVar3 = (**(code **)(*(long *)param_1 + 0x108))
                                    (param_1,a_01,pBVar6,pBVar9,param_5), iVar3 == 0 ||
                 (iVar3 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar6,pBVar6,param_5),
                 iVar3 == 0)))) ||
               ((iVar3 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar9,pBVar9,param_5),
                iVar3 == 0 ||
                (iVar3 = (**(code **)(*(long *)param_1 + 0x108))
                                   (param_1,pBVar9,*(undefined8 *)(param_1 + 0x68),pBVar9,param_5),
                iVar3 == 0)))) goto LAB_00bf3ab8;
            iVar3 = BN_GF2m_add(pBVar6,pBVar6,pBVar9);
            BN_CTX_end(param_5);
            if (iVar3 == 0) goto LAB_00bf3ac0;
            uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
            BN_consttime_swap(uVar12,pBVar6,a,uVar4);
            uVar4 = bn_get_top(*(undefined8 *)(param_1 + 0x40));
            BN_consttime_swap(uVar12,a_01,a_00,uVar4);
            local_78 = local_78 >> 1;
          } while (local_78 != 0);
          local_78 = 0x8000000000000000;
          bVar1 = 0 < lVar7;
          lVar7 = lVar7 + -1;
        } while (bVar1);
      }
      pBVar9 = *(BIGNUM **)(param_4 + 8);
      uVar2 = *(undefined8 *)(param_4 + 0x10);
      iVar3 = BN_is_zero(a_01);
      if (iVar3 == 0) {
        iVar3 = BN_is_zero(a_00);
        if (iVar3 == 0) {
          BN_CTX_start(param_5);
          pBVar10 = BN_CTX_get(param_5);
          pBVar13 = BN_CTX_get(param_5);
          a_02 = BN_CTX_get(param_5);
          if ((((((a_02 == (BIGNUM *)0x0) || (iVar3 = BN_set_word(a_02,1), iVar3 == 0)) ||
                ((iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar10,a_01,a_00,param_5)
                 , iVar3 == 0 ||
                 (((iVar3 = (**(code **)(*(long *)param_1 + 0x108))
                                      (param_1,a_01,a_01,pBVar9,param_5), iVar3 == 0 ||
                   (iVar3 = BN_GF2m_add(a_01,a_01,pBVar6), iVar3 == 0)) ||
                  (iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a_00,a_00,pBVar9,param_5)
                  , iVar3 == 0)))))) ||
               ((iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar6,a_00,pBVar6,param_5)
                , iVar3 == 0 || (iVar3 = BN_GF2m_add(a_00,a_00,a), iVar3 == 0)))) ||
              (iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a_00,a_00,a_01,param_5),
              iVar3 == 0)) ||
             ((((iVar3 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar13,pBVar9,param_5),
                iVar3 == 0 || (iVar3 = BN_GF2m_add(pBVar13,pBVar13,uVar2), iVar3 == 0)) ||
               ((iVar3 = (**(code **)(*(long *)param_1 + 0x108))
                                   (param_1,pBVar13,pBVar13,pBVar10,param_5), iVar3 == 0 ||
                ((((iVar3 = BN_GF2m_add(pBVar13,pBVar13,a_00), iVar3 == 0 ||
                   (iVar3 = (**(code **)(*(long *)param_1 + 0x108))
                                      (param_1,pBVar10,pBVar10,pBVar9,param_5), iVar3 == 0)) ||
                  (iVar3 = (**(code **)(*(long *)param_1 + 0x118))
                                     (param_1,pBVar10,a_02,pBVar10,param_5), iVar3 == 0)) ||
                 ((iVar3 = (**(code **)(*(long *)param_1 + 0x108))
                                     (param_1,pBVar13,pBVar10,pBVar13,param_5), iVar3 == 0 ||
                  (iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a,pBVar6,pBVar10,param_5)
                  , iVar3 == 0)))))))) ||
              ((iVar3 = BN_GF2m_add(a_00,a,pBVar9), iVar3 == 0 ||
               (iVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a_00,a_00,pBVar13,param_5),
               iVar3 == 0)))))) {
            iVar3 = 0;
          }
          else {
            iVar5 = BN_GF2m_add(a_00,a_00,uVar2);
            iVar3 = 0;
            if (iVar5 != 0) {
              iVar3 = 2;
            }
          }
          BN_CTX_end(param_5);
        }
        else {
          pBVar6 = BN_copy(a,pBVar9);
          if (pBVar6 == (BIGNUM *)0x0) goto LAB_00bf3ac0;
          iVar5 = BN_GF2m_add(a_00,pBVar9,uVar2);
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = 2;
          }
        }
        if (iVar3 != 0) {
          if (iVar3 == 1) goto LAB_00bf3a88;
          iVar3 = BN_set_word(*(BIGNUM **)(param_2 + 0x18),1);
          if (iVar3 == 0) goto LAB_00bf3ac0;
          *(undefined4 *)(param_2 + 0x20) = 1;
          goto LAB_00bf3a98;
        }
      }
      else {
        BN_set_word(a,0);
        BN_set_word(a_00,0);
LAB_00bf3a88:
        iVar3 = EC_POINT_set_to_infinity(param_1,param_2);
        if (iVar3 != 0) {
LAB_00bf3a98:
          BN_set_negative(*(BIGNUM **)(param_2 + 8),0);
          BN_set_negative(*(BIGNUM **)(param_2 + 0x10),0);
          iVar3 = 1;
          goto LAB_00bf3ac4;
        }
      }
    }
  }
LAB_00bf3ac0:
  iVar3 = 0;
LAB_00bf3ac4:
  BN_CTX_end(param_5);
  return iVar3;
}

