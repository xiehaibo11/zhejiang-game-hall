
undefined * SRP_check_known_gN_param(BIGNUM *param_1,BIGNUM *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = (undefined *)0x0;
  if ((param_1 != (BIGNUM *)0x0) && (param_2 != (BIGNUM *)0x0)) {
    iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_19_01d208b8,param_1);
    if ((iVar1 == 0) && (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_8192_01d208c0,param_2), iVar1 == 0))
    {
      lVar3 = 0;
    }
    else {
      iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_5_01d208d0,param_1);
      if ((iVar1 == 0) && (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_6144_01d208d8,param_2), iVar1 == 0)
         ) {
        lVar3 = 1;
      }
      else {
        iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_5_01d208e8,param_1);
        if ((iVar1 == 0) &&
           (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_4096_01d208f0,param_2), iVar1 == 0)) {
          lVar3 = 2;
        }
        else {
          iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_5_01d20900,param_1);
          if ((iVar1 == 0) &&
             (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_3072_01d20908,param_2), iVar1 == 0)) {
            lVar3 = 3;
          }
          else {
            iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_2_01d20918,param_1);
            if ((iVar1 == 0) &&
               (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_2048_01d20920,param_2), iVar1 == 0)) {
              lVar3 = 4;
            }
            else {
              iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_2_01d20930,param_1);
              if ((iVar1 == 0) &&
                 (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_1536_01d20938,param_2), iVar1 == 0)) {
                lVar3 = 5;
              }
              else {
                iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_2_01d20948,param_1);
                if ((iVar1 != 0) ||
                   (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_1024_01d20950,param_2), iVar1 != 0)) {
                  return (undefined *)0x0;
                }
                lVar3 = 6;
              }
            }
          }
        }
      }
    }
    puVar2 = (&PTR_DAT_01d208b0)[lVar3 * 3];
  }
  return puVar2;
}

