
int FUN_00b278e4(void)

{
  int iVar1;
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_md_data();
  iVar1 = SHA256_Init(c);
  return iVar1;
}

