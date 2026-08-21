
int OCSP_sendreq_nbio(OCSP_RESPONSE **presp,OCSP_REQ_CTX *rctx)

{
  int iVar1;
  long lVar2;
  OCSP_RESPONSE *pOVar3;
  uchar *puStack_28;
  
  iVar1 = OCSP_REQ_CTX_nbio(rctx);
  if (iVar1 == 1) {
    lVar2 = BIO_ctrl(*(BIO **)(rctx + 0x20),3,0,&puStack_28);
    pOVar3 = (OCSP_RESPONSE *)
             ASN1_item_d2i((ASN1_VALUE **)0x0,&puStack_28,(long)(int)lVar2,
                           (ASN1_ITEM *)OCSP_RESPONSE_it);
    *presp = pOVar3;
    if (pOVar3 == (OCSP_RESPONSE *)0x0) {
      *(undefined4 *)rctx = 0x1000;
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}

