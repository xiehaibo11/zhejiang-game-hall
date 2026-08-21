
int FUN_00b35d8c(undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  SHA512_CTX *c;
  
  c = (SHA512_CTX *)EVP_MD_CTX_md_data();
  iVar1 = SHA512_Update(c,param_2,param_3);
  return iVar1;
}

