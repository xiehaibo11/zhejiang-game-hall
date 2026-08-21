
bool SRP_Calc_A_param(long param_1)

{
  bool bVar1;
  int iVar2;
  BIGNUM *pBVar3;
  long lVar4;
  uchar auStack_50 [48];
  
                    /* try { // try from 00af1a04 to 00bf1a17 has its CatchHandler @ 00af2038 */
  iVar2 = RAND_bytes(auStack_50,0x30);
  if (iVar2 < 1) {
    bVar1 = false;
  }
  else {
    pBVar3 = BN_bin2bn(auStack_50,0x30,*(BIGNUM **)(param_1 + 0x368));
    *(BIGNUM **)(param_1 + 0x368) = pBVar3;
    OPENSSL_cleanse(auStack_50,0x30);
                    /* try { // try from 00af1a40 to 00bf1a7f has its CatchHandler @ 00af2050 */
    lVar4 = SRP_Calc_A(*(undefined8 *)(param_1 + 0x368),*(undefined8 *)(param_1 + 0x340),
                       *(undefined8 *)(param_1 + 0x348));
    bVar1 = lVar4 != 0;
    *(long *)(param_1 + 0x360) = lVar4;
  }
  return bVar1;
}

