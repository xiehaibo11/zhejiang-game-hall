
int OCSP_REQ_CTX_set1_req(OCSP_REQ_CTX *rctx,OCSP_REQUEST *req)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = ASN1_item_i2d((ASN1_VALUE *)req,(uchar **)0x0,(ASN1_ITEM *)OCSP_REQUEST_it);
  iVar2 = BIO_printf(*(BIO **)(rctx + 0x20),
                     "Content-Type: application/ocsp-request\r\nContent-Length: %d\r\n\r\n",
                     (ulong)uVar1);
  if ((iVar2 < 1) ||
     (iVar2 = ASN1_item_i2d_bio((ASN1_ITEM *)OCSP_REQUEST_it,*(BIO **)(rctx + 0x20),req), iVar2 < 1)
     ) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
    *(undefined4 *)rctx = 0x1005;
  }
  return iVar2;
}

