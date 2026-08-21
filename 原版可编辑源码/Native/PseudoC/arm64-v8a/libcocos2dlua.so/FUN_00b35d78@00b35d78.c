
int FUN_00b35d78(void)

{
  int iVar1;
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_md_data();
  iVar1 = SHA384_Init(c);
  return iVar1;
}

