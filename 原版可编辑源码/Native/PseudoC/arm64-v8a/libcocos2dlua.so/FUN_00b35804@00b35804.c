
int FUN_00b35804(void)

{
  int iVar1;
  MD5_CTX *c;
  
  c = (MD5_CTX *)EVP_MD_CTX_md_data();
  iVar1 = MD5_Init(c);
  return iVar1;
}

