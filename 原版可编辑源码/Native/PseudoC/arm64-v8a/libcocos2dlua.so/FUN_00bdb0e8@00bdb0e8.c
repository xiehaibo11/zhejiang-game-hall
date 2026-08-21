
int FUN_00bdb0e8(void)

{
  int iVar1;
  RIPEMD160_CTX *c;
  
  c = (RIPEMD160_CTX *)EVP_MD_CTX_md_data();
  iVar1 = RIPEMD160_Init(c);
  return iVar1;
}

