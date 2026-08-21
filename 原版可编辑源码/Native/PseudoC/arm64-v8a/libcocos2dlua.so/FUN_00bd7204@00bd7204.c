
int FUN_00bd7204(void)

{
  int iVar1;
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_md_data();
  iVar1 = SHA1_Init(c);
  return iVar1;
}

