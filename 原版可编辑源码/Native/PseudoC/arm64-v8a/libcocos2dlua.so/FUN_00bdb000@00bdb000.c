
int FUN_00bdb000(void)

{
  int iVar1;
  MD4_CTX *c;
  
  c = (MD4_CTX *)EVP_MD_CTX_md_data();
  iVar1 = MD4_Init(c);
  return iVar1;
}

