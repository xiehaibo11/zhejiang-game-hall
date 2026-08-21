
int FUN_00bcc014(undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  MD4_CTX *c;
  
  c = (MD4_CTX *)EVP_MD_CTX_md_data();
  iVar1 = MD4_Update(c,param_2,param_3);
  return iVar1;
}

