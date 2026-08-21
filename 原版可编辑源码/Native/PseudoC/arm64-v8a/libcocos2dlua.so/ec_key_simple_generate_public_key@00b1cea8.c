
int ec_key_simple_generate_public_key(long param_1)

{
  int iVar1;
  
  iVar1 = EC_POINT_mul(*(EC_GROUP **)(param_1 + 0x18),*(EC_POINT **)(param_1 + 0x20),
                       *(BIGNUM **)(param_1 + 0x28),(EC_POINT *)0x0,(BIGNUM *)0x0,(BN_CTX *)0x0);
  return iVar1;
}

