
int FUN_00b35d64(void)

{
  int iVar1;
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_md_data();
  iVar1 = SHA256_Init(c);
  return iVar1;
}

