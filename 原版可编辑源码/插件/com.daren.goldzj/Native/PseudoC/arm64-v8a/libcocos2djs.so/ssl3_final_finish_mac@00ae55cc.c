
int ssl3_final_finish_mac(long param_1,void *param_2,int param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  EVP_MD *pEVar3;
  EVP_MD_CTX *out;
  
                    /* try { // try from 00ae55f0 to 00be55ff has its CatchHandler @ 00ae6308 */
  iVar1 = ssl3_digest_cached_records(param_1,0);
  if (iVar1 != 0) {
    pEVar3 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(*(long *)(param_1 + 0x90) + 0xe0));
    iVar1 = EVP_MD_type(pEVar3);
    if (iVar1 == 0x72) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (out == (EVP_MD_CTX *)0x0) {
        iVar1 = 0x41;
        iVar2 = 0x1a2;
      }
      else {
                    /* try { // try from 00ae5620 to 00be5633 has its CatchHandler @ 00ae63a8 */
        iVar1 = EVP_MD_CTX_copy_ex(out,*(EVP_MD_CTX **)(*(long *)(param_1 + 0x90) + 0xe0));
        if (iVar1 != 0) {
          pEVar3 = EVP_MD_CTX_md(out);
          iVar1 = EVP_MD_size(pEVar3);
          if (iVar1 < 0) {
            EVP_MD_CTX_reset(out);
            return 0;
          }
          if ((((param_2 != (void *)0x0) &&
               (iVar2 = EVP_DigestUpdate(out,param_2,(long)param_3), iVar2 < 1)) ||
              (iVar2 = EVP_MD_CTX_ctrl(out,0x1d,*(undefined4 *)(*(long *)(param_1 + 0x178) + 4),
                                       *(long *)(param_1 + 0x178) + 8), iVar2 < 1)) ||
             (iVar2 = EVP_DigestFinal_ex(out,param_4,(uint *)0x0), iVar2 < 1)) {
            ERR_put_error(0x14,0x11d,0x44,"ssl/s3_enc.c",0x1b5);
            iVar1 = 0;
          }
          EVP_MD_CTX_free(out);
          return iVar1;
        }
        iVar1 = 0x44;
        iVar2 = 0x1a6;
      }
    }
    else {
      iVar1 = 0x144;
      iVar2 = 0x19c;
    }
    ERR_put_error(0x14,0x11d,iVar1,"ssl/s3_enc.c",iVar2);
  }
  return 0;
}

