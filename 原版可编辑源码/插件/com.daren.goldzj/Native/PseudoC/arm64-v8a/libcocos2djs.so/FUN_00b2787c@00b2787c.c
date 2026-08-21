
int FUN_00b2787c(void)

{
  int iVar1;
  SHA256_CTX *c;
  
  c = (SHA256_CTX *)EVP_MD_CTX_md_data();
  iVar1 = SHA224_Init(c);
  return iVar1;
}

