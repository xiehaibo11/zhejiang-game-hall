
int FUN_00bdb15c(void)

{
  int iVar1;
  WHIRLPOOL_CTX *c;
  
  c = (WHIRLPOOL_CTX *)EVP_MD_CTX_md_data();
  iVar1 = WHIRLPOOL_Init(c);
  return iVar1;
}

