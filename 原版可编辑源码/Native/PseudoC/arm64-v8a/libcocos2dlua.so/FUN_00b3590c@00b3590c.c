
int FUN_00b3590c(undefined8 param_1,uchar *param_2)

{
  int iVar1;
  MD5_CTX *c;
  
  c = (MD5_CTX *)EVP_MD_CTX_md_data();
  iVar1 = MD5_Final(param_2,c);
  if (iVar1 != 0) {
    iVar1 = SHA1_Final(param_2 + 0x10,(SHA_CTX *)(c + 1));
    return iVar1;
  }
  return 0;
}

