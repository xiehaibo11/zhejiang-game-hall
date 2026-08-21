
OCSP_REQ_CTX * OCSP_sendreq_new(BIO *io,char *path,OCSP_REQUEST *req,int maxline)

{
  int iVar1;
  uint uVar2;
  OCSP_REQ_CTX *ptr;
  
  ptr = (OCSP_REQ_CTX *)OCSP_REQ_CTX_new(io,maxline);
  if (ptr == (OCSP_REQ_CTX *)0x0) {
    return (OCSP_REQ_CTX *)0x0;
  }
  if (path == (char *)0x0) {
    path = "/";
  }
  iVar1 = BIO_printf(*(BIO **)(ptr + 0x20),"%s %s HTTP/1.0\r\n","POST",path);
  if (0 < iVar1) {
    *(undefined4 *)ptr = 0x1009;
    if (req == (OCSP_REQUEST *)0x0) {
      return ptr;
    }
    uVar2 = ASN1_item_i2d((ASN1_VALUE *)req,(uchar **)0x0,(ASN1_ITEM *)OCSP_REQUEST_it);
    iVar1 = BIO_printf(*(BIO **)(ptr + 0x20),
                       "Content-Type: application/ocsp-request\r\nContent-Length: %d\r\n\r\n",
                       (ulong)uVar2);
    if ((0 < iVar1) &&
       (iVar1 = ASN1_item_i2d_bio((ASN1_ITEM *)OCSP_REQUEST_it,*(BIO **)(ptr + 0x20),req), 0 < iVar1
       )) {
      *(undefined4 *)ptr = 0x1005;
      return ptr;
    }
  }
  BIO_free(*(BIO **)(ptr + 0x20));
  CRYPTO_free(*(void **)(ptr + 8));
  CRYPTO_free(ptr);
  return (OCSP_REQ_CTX *)0x0;
}

