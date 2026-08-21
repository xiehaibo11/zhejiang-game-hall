
int SSL_srp_server_param_with_username(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  long lVar4;
  uchar auStack_60 [48];
  
  *param_2 = 0x73;
  if (*(code **)(param_1 + 800) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 800))(param_1,param_2,*(undefined8 *)(param_1 + 0x318));
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  *param_2 = 0x50;
  if ((((*(long *)(param_1 + 0x340) == 0) || (*(long *)(param_1 + 0x348) == 0)) ||
      (*(long *)(param_1 + 0x350) == 0)) || (*(long *)(param_1 + 0x378) == 0)) {
    iVar1 = 2;
  }
  else {
    iVar2 = RAND_bytes(auStack_60,0x30);
    iVar1 = 2;
    if (0 < iVar2) {
      pBVar3 = BN_bin2bn(auStack_60,0x30,(BIGNUM *)0x0);
      *(BIGNUM **)(param_1 + 0x370) = pBVar3;
      OPENSSL_cleanse(auStack_60,0x30);
                    /* try { // try from 00ae25ec to 00be25f3 has its CatchHandler @ 00ae26c0 */
      lVar4 = SRP_Calc_B(*(undefined8 *)(param_1 + 0x370),*(undefined8 *)(param_1 + 0x340),
                         *(undefined8 *)(param_1 + 0x348),*(undefined8 *)(param_1 + 0x378));
      iVar1 = 0;
      if (lVar4 == 0) {
        iVar1 = 2;
      }
      *(long *)(param_1 + 0x358) = lVar4;
    }
  }
  return iVar1;
}

