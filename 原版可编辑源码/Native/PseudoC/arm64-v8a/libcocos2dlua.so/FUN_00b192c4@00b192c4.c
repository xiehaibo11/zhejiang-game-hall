
bool FUN_00b192c4(EC_KEY *param_1)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = EC_KEY_get0_group(param_1);
  return pEVar1 == (EC_GROUP *)0x0;
}

