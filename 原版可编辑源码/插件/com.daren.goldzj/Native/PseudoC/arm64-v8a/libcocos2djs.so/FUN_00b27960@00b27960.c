
int FUN_00b27960(void)

{
  int iVar1;
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_md_data();
  iVar1 = SHA512_Init(c);
  return iVar1;
}

