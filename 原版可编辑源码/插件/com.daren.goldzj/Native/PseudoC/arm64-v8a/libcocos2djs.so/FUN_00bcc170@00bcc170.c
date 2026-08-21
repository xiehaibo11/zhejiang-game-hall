
int FUN_00bcc170(undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  WHIRLPOOL_CTX *c;
  
  c = (WHIRLPOOL_CTX *)EVP_MD_CTX_md_data();
  iVar1 = WHIRLPOOL_Update(c,param_2,param_3);
  return iVar1;
}

