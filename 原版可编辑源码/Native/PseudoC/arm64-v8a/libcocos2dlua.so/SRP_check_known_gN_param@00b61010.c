
undefined * SRP_check_known_gN_param(BIGNUM *param_1,BIGNUM *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = (undefined *)0x0;
  if ((param_1 != (BIGNUM *)0x0) && (param_2 != (BIGNUM *)0x0)) {
    iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_19_0176eb08,param_1);
    if ((iVar1 == 0) && (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_8192_0176eb10,param_2), iVar1 == 0))
    {
      lVar3 = 0;
    }
    else {
      iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_5_0176eb20,param_1);
      if ((iVar1 == 0) && (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_6144_0176eb28,param_2), iVar1 == 0)
         ) {
        lVar3 = 1;
      }
      else {
        iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_5_0176eb38,param_1);
        if ((iVar1 == 0) &&
           (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_4096_0176eb40,param_2), iVar1 == 0)) {
          lVar3 = 2;
        }
        else {
          iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_5_0176eb50,param_1);
          if ((iVar1 == 0) &&
             (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_3072_0176eb58,param_2), iVar1 == 0)) {
            lVar3 = 3;
          }
          else {
            iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_2_0176eb68,param_1);
            if ((iVar1 == 0) &&
               (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_2048_0176eb70,param_2), iVar1 == 0)) {
              lVar3 = 4;
            }
            else {
              iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_2_0176eb80,param_1);
              if ((iVar1 == 0) &&
                 (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_1536_0176eb88,param_2), iVar1 == 0)) {
                lVar3 = 5;
              }
              else {
                iVar1 = BN_cmp((BIGNUM *)PTR_bn_generator_2_0176eb98,param_1);
                if ((iVar1 != 0) ||
                   (iVar1 = BN_cmp((BIGNUM *)PTR_bn_group_1024_0176eba0,param_2), iVar1 != 0)) {
                  return (undefined *)0x0;
                }
                lVar3 = 6;
              }
            }
          }
        }
      }
    }
    puVar2 = (&PTR_DAT_0176eb00)[lVar3 * 3];
  }
  return puVar2;
}

