
bool FUN_00b3a12c(undefined8 param_1,uchar *param_2,size_t param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_MD_CTX_pkey_ctx();
  iVar1 = HMAC_Update(*(HMAC_CTX **)(*(long *)(lVar2 + 0x28) + 0x20),param_2,param_3);
  return iVar1 != 0;
}

