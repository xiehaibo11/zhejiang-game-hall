
X509_REQ * X509_to_X509_REQ(X509 *x,EVP_PKEY *pkey,EVP_MD *md)

{
  int iVar1;
  X509_REQ *req;
  undefined1 *puVar2;
  X509_NAME *name;
  EVP_PKEY *pkey_00;
  
  req = X509_REQ_new();
  if (req == (X509_REQ *)0x0) {
    ERR_put_error(0xb,0x7e,0x41,"crypto/x509/x509_req.c",0x1f);
  }
  else {
    **(undefined4 **)&req->references = 1;
    puVar2 = CRYPTO_malloc(1,"crypto/x509/x509_req.c",0x26);
    *(undefined1 **)(*(long *)&req->references + 8) = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      name = X509_get_subject_name(x);
      iVar1 = X509_REQ_set_subject_name(req,name);
      if (((iVar1 != 0) && (pkey_00 = (EVP_PKEY *)X509_get0_pubkey(x), pkey_00 != (EVP_PKEY *)0x0))
         && (iVar1 = X509_REQ_set_pubkey(req,pkey_00), iVar1 != 0)) {
        if (pkey == (EVP_PKEY *)0x0) {
          return req;
        }
        iVar1 = X509_REQ_sign(req,pkey,md);
        if (iVar1 != 0) {
          return req;
        }
      }
    }
  }
  X509_REQ_free(req);
  return (X509_REQ *)0x0;
}

