
int FUN_00b27398(undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  MD5_CTX *c;
  
  c = (MD5_CTX *)EVP_MD_CTX_md_data();
  iVar1 = MD5_Update(c,param_2,param_3);
  return iVar1;
}

