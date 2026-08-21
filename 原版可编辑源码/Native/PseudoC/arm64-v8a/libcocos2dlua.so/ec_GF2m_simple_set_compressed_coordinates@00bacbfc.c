
bool ec_GF2m_simple_set_compressed_coordinates
               (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,BN_CTX *param_5)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  ulong uVar9;
  BN_CTX *c;
  
                    /* catch() { ... } // from try @ 00bacba0 with catch @ 00bacc08 */
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
  pBVar5 = BN_CTX_get(param_5);
  pBVar6 = BN_CTX_get(param_5);
  pBVar7 = BN_CTX_get(param_5);
  pBVar8 = BN_CTX_get(param_5);
  if (pBVar8 != (BIGNUM *)0x0) {
    plVar1 = param_1 + 9;
    iVar3 = BN_GF2m_mod_arr(pBVar6,param_3,plVar1);
    if (iVar3 != 0) {
      iVar3 = BN_is_zero(pBVar6);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*param_1 + 0x110))(param_1,pBVar5,pBVar6,param_5);
        if ((((iVar3 != 0) &&
             (iVar3 = (**(code **)(*param_1 + 0x118))(param_1,pBVar5,param_1[0xd],pBVar5,param_5),
             iVar3 != 0)) && (iVar3 = BN_GF2m_add(pBVar5,param_1[0xc],pBVar5), iVar3 != 0)) &&
           (iVar3 = BN_GF2m_add(pBVar5,pBVar6,pBVar5), iVar3 != 0)) {
          iVar3 = BN_GF2m_mod_solve_quad_arr(pBVar8,pBVar5,plVar1,param_5);
          if (iVar3 == 0) {
            uVar9 = ERR_peek_last_error();
            if ((uVar9 & 0xff000fff) == 0x3000074) {
              ERR_clear_error();
              iVar3 = 0x6e;
              iVar4 = 0x60;
            }
            else {
              iVar3 = 3;
              iVar4 = 99;
            }
            ERR_put_error(0x10,0xa4,iVar3,"crypto/ec/ec2_oct.c",iVar4);
          }
          else {
            iVar3 = BN_is_odd(pBVar8);
            iVar4 = (**(code **)(*param_1 + 0x108))(param_1,pBVar7,pBVar6,pBVar8,param_5);
            if (iVar4 != 0) {
              if ((param_4 != 0) != (iVar3 != 0)) {
                iVar3 = BN_GF2m_add(pBVar7,pBVar7,pBVar6);
                goto joined_r0x00bacdd4;
              }
              goto LAB_00bacccc;
            }
          }
        }
      }
      else {
        iVar3 = BN_GF2m_mod_sqrt_arr(pBVar7,param_1[0xd],plVar1,param_5);
joined_r0x00bacdd4:
        if (iVar3 != 0) {
LAB_00bacccc:
          iVar3 = EC_POINT_set_affine_coordinates_GF2m(param_1,param_2,pBVar6,pBVar7,param_5);
          bVar2 = iVar3 != 0;
          goto LAB_00bace38;
        }
      }
    }
  }
  bVar2 = false;
LAB_00bace38:
  BN_CTX_end(param_5);
                    /* try { // try from 00bace40 to 00cad02b has its CatchHandler @ 00bace40
                       catch() { ... } // from try @ 00bace40 with catch @ 00bace40
                       catch() { ... } // from try @ 00bad254 with catch @ 00bace40 */
  BN_CTX_free(c);
  return bVar2;
}

