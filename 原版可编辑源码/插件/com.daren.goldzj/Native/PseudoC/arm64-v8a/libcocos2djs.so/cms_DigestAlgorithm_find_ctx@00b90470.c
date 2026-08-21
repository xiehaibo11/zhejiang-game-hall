
int cms_DigestAlgorithm_find_ctx(EVP_MD_CTX *param_1,BIO *param_2,X509_ALGOR *param_3)

{
  int iVar1;
  int iVar2;
  BIO *bp;
  EVP_MD *pEVar3;
  EVP_MD_CTX *local_38;
  ASN1_OBJECT *local_28;
  
  X509_ALGOR_get0(&local_28,(int *)0x0,(void **)0x0,param_3);
  iVar1 = OBJ_obj2nid(local_28);
  while( true ) {
    bp = BIO_find_type(param_2,0x208);
    if (bp == (BIO *)0x0) {
      ERR_put_error(0x2e,0x73,0x83,"crypto/cms/cms_lib.c",0x144);
      return 0;
    }
    BIO_ctrl(bp,0x78,0,&local_38);
    pEVar3 = EVP_MD_CTX_md(local_38);
    iVar2 = EVP_MD_type(pEVar3);
    if (iVar2 == iVar1) break;
    pEVar3 = EVP_MD_CTX_md(local_38);
    iVar2 = EVP_MD_pkey_type(pEVar3);
    if (iVar2 == iVar1) break;
    param_2 = BIO_next(bp);
  }
  iVar1 = EVP_MD_CTX_copy_ex(param_1,local_38);
  return iVar1;
}

