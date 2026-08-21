
int BN_GF2m_mod_mul(undefined8 param_1,undefined8 param_2,undefined8 param_3,BIGNUM *param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  void *ptr;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  iVar1 = BN_num_bits(param_4);
  ptr = CRYPTO_malloc((iVar1 + 1) * 4,"crypto/bn/bn_gf2m.c",0x1e2);
  if (ptr == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = BN_is_zero(param_4);
    if (iVar2 == 0) {
      uVar3 = (ulong)(uint)param_4->top;
      iVar2 = 0;
      do {
        uVar6 = (long)(int)uVar3;
        iVar7 = (int)uVar3 * 0x40 + -1;
        do {
          iVar5 = iVar7;
          uVar3 = uVar6 - 1;
          if ((long)uVar6 < 1) {
            if (iVar2 <= iVar1) {
              *(undefined4 *)((long)ptr + (long)iVar2 * 4) = 0xffffffff;
              iVar2 = iVar2 + 1;
            }
            if ((iVar2 == 0) || (iVar1 + 1 < iVar2)) goto LAB_00bdd080;
            iVar2 = BN_GF2m_mod_mul_arr(param_1,param_2,param_3,ptr,param_5);
            goto LAB_00bdd14c;
          }
          uVar4 = param_4->d[uVar3];
          uVar6 = uVar3;
          iVar7 = iVar5 + -0x40;
        } while (uVar4 == 0);
        uVar6 = 0x8000000000000000;
        iVar7 = 0x40;
        do {
          if ((uVar6 & uVar4) != 0) {
            if (iVar2 <= iVar1) {
              *(int *)((long)ptr + (long)iVar2 * 4) = iVar5;
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
LAB_00bdd080:
    ERR_put_error(3,0x85,0x6a,"crypto/bn/bn_gf2m.c",0x1e6);
  }
LAB_00bdd14c:
  CRYPTO_free(ptr);
  return iVar2;
}

