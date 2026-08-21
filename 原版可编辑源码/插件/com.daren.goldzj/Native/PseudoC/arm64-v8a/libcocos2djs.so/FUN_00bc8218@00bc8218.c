
int FUN_00bc8218(undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_md_data();
  iVar1 = SHA1_Update(c,param_2,param_3);
  return iVar1;
}

