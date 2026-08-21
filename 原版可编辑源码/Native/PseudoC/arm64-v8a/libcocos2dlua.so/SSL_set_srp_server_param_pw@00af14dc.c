
undefined4
SSL_set_srp_server_param_pw(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  BIGNUM *pBVar3;
  undefined4 uVar4;
  
  lVar2 = SRP_get_default_gN(param_4);
  uVar4 = 0xffffffff;
  if (lVar2 != 0) {
    pBVar3 = BN_dup(*(BIGNUM **)(lVar2 + 0x10));
    *(BIGNUM **)(param_1 + 0x340) = pBVar3;
    pBVar3 = BN_dup(*(BIGNUM **)(lVar2 + 8));
    *(BIGNUM **)(param_1 + 0x348) = pBVar3;
    BN_clear_free(*(BIGNUM **)(param_1 + 0x378));
    *(undefined8 *)(param_1 + 0x378) = 0;
    BN_clear_free(*(BIGNUM **)(param_1 + 0x350));
    *(undefined8 *)(param_1 + 0x350) = 0;
    iVar1 = SRP_create_verifier_BN
                      (param_2,param_3,param_1 + 0x350,param_1 + 0x378,*(undefined8 *)(lVar2 + 0x10)
                       ,*(undefined8 *)(lVar2 + 8));
    uVar4 = 1;
    if (iVar1 == 0) {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

