
int SSL_CTX_use_certificate_chain_file(SSL_CTX *ctx,char *file)

{
  int iVar1;
  
  iVar1 = FUN_00acc848((int)ctx,0,file);
  return iVar1;
}

