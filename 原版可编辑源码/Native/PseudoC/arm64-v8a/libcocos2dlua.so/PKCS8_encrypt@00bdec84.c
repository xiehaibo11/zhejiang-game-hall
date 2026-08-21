
X509_SIG *
PKCS8_encrypt(int pbe_nid,EVP_CIPHER *cipher,char *pass,int passlen,uchar *salt,int saltlen,int iter
             ,PKCS8_PRIV_KEY_INFO *p8)

{
  int iVar1;
  X509_ALGOR *algor;
  ASN1_OCTET_STRING *a;
  X509_SIG *pXVar2;
  
  if (pbe_nid == -1) {
    algor = PKCS5_pbe2_set(cipher,iter,salt,saltlen);
  }
  else {
    iVar1 = EVP_PBE_find(1,pbe_nid,(int *)0x0,(int *)0x0,(undefined1 **)0x0);
    if (iVar1 == 0) {
      ERR_clear_error();
      algor = PKCS5_pbe_set(pbe_nid,iter,salt,saltlen);
    }
    else {
      algor = PKCS5_pbe2_set_iv(cipher,iter,salt,saltlen,(uchar *)0x0,pbe_nid);
    }
  }
  if (algor == (X509_ALGOR *)0x0) {
    ERR_put_error(0x23,0x7d,0xd,"crypto/pkcs12/p12_p8e.c",0x20);
  }
  else {
    a = PKCS12_item_i2d_encrypt(algor,(ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it,pass,passlen,p8,1);
    if (a == (ASN1_OCTET_STRING *)0x0) {
      ERR_put_error(0x23,0x84,0x67,"crypto/pkcs12/p12_p8e.c",0x36);
    }
    else {
      pXVar2 = (X509_SIG *)CRYPTO_zalloc(0x10,"crypto/pkcs12/p12_p8e.c",0x3a);
      if (pXVar2 != (X509_SIG *)0x0) {
        pXVar2->algor = algor;
        pXVar2->digest = a;
        return pXVar2;
      }
      ERR_put_error(0x23,0x84,0x41,"crypto/pkcs12/p12_p8e.c",0x3d);
      ASN1_OCTET_STRING_free(a);
    }
    X509_ALGOR_free(algor);
  }
  return (X509_SIG *)0x0;
}

