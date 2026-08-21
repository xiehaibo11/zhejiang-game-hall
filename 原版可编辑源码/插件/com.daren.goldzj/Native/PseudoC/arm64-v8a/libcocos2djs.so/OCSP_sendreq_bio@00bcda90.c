
OCSP_RESPONSE * OCSP_sendreq_bio(BIO *b,char *path,OCSP_REQUEST *req)

{
  int iVar1;
  OCSP_REQ_CTX *ptr;
  long lVar2;
  OCSP_RESPONSE *pOVar3;
  OCSP_RESPONSE *pOVar4;
  uchar *puStack_38;
  
  ptr = OCSP_sendreq_new(b,path,req,-1);
  pOVar3 = (OCSP_RESPONSE *)0x0;
  if (ptr != (OCSP_REQ_CTX *)0x0) {
    do {
      iVar1 = OCSP_REQ_CTX_nbio(ptr);
      if (iVar1 == 1) {
        lVar2 = BIO_ctrl(*(BIO **)(ptr + 0x20),3,0,&puStack_38);
        pOVar4 = (OCSP_RESPONSE *)
                 ASN1_item_d2i((ASN1_VALUE **)0x0,&puStack_38,(long)(int)lVar2,
                               (ASN1_ITEM *)OCSP_RESPONSE_it);
        if (pOVar4 == (OCSP_RESPONSE *)0x0) {
          iVar1 = 0;
          *(undefined4 *)ptr = 0x1000;
        }
        else {
          iVar1 = 1;
        }
        goto LAB_00bcdb38;
      }
      if (iVar1 != -1) goto LAB_00bcdae8;
      iVar1 = BIO_test_flags(b,8);
    } while (iVar1 != 0);
    iVar1 = -1;
LAB_00bcdae8:
    pOVar4 = (OCSP_RESPONSE *)0x0;
LAB_00bcdb38:
    BIO_free(*(BIO **)(ptr + 0x20));
    CRYPTO_free(*(void **)(ptr + 8));
    CRYPTO_free(ptr);
    pOVar3 = (OCSP_RESPONSE *)0x0;
    if (iVar1 != 0) {
      pOVar3 = pOVar4;
    }
  }
  return pOVar3;
}

