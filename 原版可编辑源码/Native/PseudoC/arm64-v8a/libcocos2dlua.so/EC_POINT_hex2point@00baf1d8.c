
EC_POINT * EC_POINT_hex2point(EC_GROUP *param_1,char *param_2,EC_POINT *param_3,BN_CTX *param_4)

{
  int iVar1;
  EC_POINT *pEVar2;
  BIGNUM *local_28;
  
  local_28 = (BIGNUM *)0x0;
  iVar1 = BN_hex2bn(&local_28,param_2);
  if (iVar1 == 0) {
    pEVar2 = (EC_POINT *)0x0;
  }
  else {
    pEVar2 = EC_POINT_bn2point(param_1,local_28,param_3,param_4);
    BN_clear_free(local_28);
  }
                    /* try { // try from 00baf234 to 00caf2bb has its CatchHandler @ 00baf234
                       catch() { ... } // from try @ 00baf234 with catch @ 00baf234
                       catch() { ... } // from try @ 00baf2c4 with catch @ 00baf234
                       catch() { ... } // from try @ 00baf330 with catch @ 00baf234 */
  return pEVar2;
}

