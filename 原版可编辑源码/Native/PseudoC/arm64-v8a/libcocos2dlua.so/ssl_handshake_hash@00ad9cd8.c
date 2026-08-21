
int ssl_handshake_hash(long param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  EVP_MD *md;
  EVP_MD_CTX *out;
  EVP_MD_CTX *ctx;
  
                    /* try { // try from 00ad9cf0 to 00bd9d37 has its CatchHandler @ 00ad9cf0
                       catch() { ... } // from try @ 00ad9cf0 with catch @ 00ad9cf0
                       catch() { ... } // from try @ 00ad9d78 with catch @ 00ad9cf0 */
  ctx = *(EVP_MD_CTX **)(*(long *)(param_1 + 0x90) + 0xe0);
  md = EVP_MD_CTX_md(ctx);
  iVar1 = EVP_MD_size(md);
  out = (EVP_MD_CTX *)0x0;
  iVar2 = 0;
                    /* try { // try from 00ad9d38 to 00bd9d4f has its CatchHandler @ 00ad9dc8 */
  if (((-1 < iVar1) && (iVar1 <= param_3)) &&
     ((out = (EVP_MD_CTX *)EVP_MD_CTX_new(), out == (EVP_MD_CTX *)0x0 ||
      ((iVar2 = EVP_MD_CTX_copy_ex(out,ctx), iVar2 == 0 ||
       (iVar3 = EVP_DigestFinal_ex(out,param_2,(uint *)0x0), iVar2 = iVar1, iVar3 < 1)))))) {
    iVar2 = 0;
  }
                    /* try { // try from 00ad9d64 to 00bd9d77 has its CatchHandler @ 00ad9dc4 */
  EVP_MD_CTX_free(out);
                    /* try { // try from 00ad9d78 to 00bd9de3 has its CatchHandler @ 00ad9cf0 */
  return iVar2;
}

