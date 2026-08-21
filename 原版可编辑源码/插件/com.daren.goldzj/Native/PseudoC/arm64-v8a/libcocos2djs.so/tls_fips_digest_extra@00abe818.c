
int tls_fips_digest_extra
              (EVP_CIPHER_CTX *param_1,EVP_MD_CTX *param_2,void *param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  EVP_CIPHER *cipher;
  ulong uVar4;
  EVP_MD *md;
  ulong uVar5;
  
  cipher = EVP_CIPHER_CTX_cipher(param_1);
  uVar4 = EVP_CIPHER_flags(cipher);
                    /* try { // try from 00abe840 to 00bbe84b has its CatchHandler @ 00abe880 */
                    /* try { // try from 00abe84c to 00bbe893 has its CatchHandler @ 00abe754 */
  if ((uVar4 & 0xf0007) == 2) {
    md = EVP_MD_CTX_md(param_2);
    iVar3 = EVP_MD_block_size(md);
    lVar1 = 0x15;
    if (iVar3 != 0x40) {
      lVar1 = 0x1d;
    }
    uVar5 = (ulong)iVar3;
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = (ulong)(lVar1 + param_5) / uVar5;
    }
                    /* catch() { ... } // from try @ 00abe840 with catch @ 00abe880 */
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = (ulong)(lVar1 + param_4) / uVar5;
    }
    iVar3 = EVP_DigestUpdate(param_2,param_3,((uVar4 + 1) - uVar2) * uVar5);
    return iVar3;
  }
  return 1;
}

