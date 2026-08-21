
int BN_GF2m_mod_sqrt(BIGNUM *param_1,undefined8 param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  int iVar2;
  int *ptr;
  BIGNUM *a;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  iVar1 = BN_num_bits(param_3);
  ptr = CRYPTO_malloc((iVar1 + 1) * 4,"crypto/bn/bn_gf2m.c",0x3ff);
  if (ptr == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = BN_is_zero(param_3);
    if (iVar2 == 0) {
      uVar3 = (ulong)(uint)param_3->top;
      iVar2 = 0;
      do {
        uVar6 = (long)(int)uVar3;
        iVar7 = (int)uVar3 * 0x40 + -1;
        do {
          iVar5 = iVar7;
          uVar3 = uVar6 - 1;
          if ((long)uVar6 < 1) {
            if (iVar2 <= iVar1) {
              ptr[iVar2] = -1;
              iVar2 = iVar2 + 1;
            }
            if ((iVar2 == 0) || (iVar1 + 1 < iVar2)) goto LAB_00bdde7c;
            if (*ptr == 0) {
              BN_set_word(param_1,0);
              iVar2 = 1;
            }
            else {
              BN_CTX_start(param_4);
              a = BN_CTX_get(param_4);
              iVar2 = 0;
              if (a != (BIGNUM *)0x0) {
                iVar1 = BN_set_bit(a,*ptr + -1);
                if (iVar1 == 0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = BN_GF2m_mod_exp_arr(param_1,param_2,a,ptr,param_4);
                }
              }
              BN_CTX_end(param_4);
            }
            goto LAB_00bddea0;
          }
          uVar4 = param_3->d[uVar3];
          uVar6 = uVar3;
          iVar7 = iVar5 + -0x40;
        } while (uVar4 == 0);
        uVar6 = 0x8000000000000000;
        iVar7 = 0x40;
        do {
          if ((uVar6 & uVar4) != 0) {
            if (iVar2 <= iVar1) {
              ptr[iVar2] = iVar5;
            }
            iVar2 = iVar2 + 1;
          }
          iVar7 = iVar7 + -1;
          uVar6 = uVar6 >> 1;
          iVar5 = iVar5 + -1;
        } while (0 < iVar7);
      } while( true );
    }
    iVar2 = 0;
LAB_00bdde7c:
    ERR_put_error(3,0x89,0x6a,"crypto/bn/bn_gf2m.c",0x403);
  }
LAB_00bddea0:
  CRYPTO_free(ptr);
  return iVar2;
}

