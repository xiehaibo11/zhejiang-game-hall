
int PKCS12_setup_mac(PKCS12 *p12,int iter,uchar *salt,int saltlen,EVP_MD *md_type)

{
  int iVar1;
  PKCS12_MAC_DATA *pPVar2;
  ASN1_INTEGER *a;
  uchar *buf;
  ASN1_OBJECT *aobj;
  ASN1_OCTET_STRING *pAVar3;
  X509_ALGOR *local_38;
  
  pPVar2 = PKCS12_MAC_DATA_new();
  p12->mac = pPVar2;
  if (pPVar2 == (PKCS12_MAC_DATA *)0x0) {
    return 0;
  }
  if (1 < iter) {
    a = ASN1_INTEGER_new();
    p12->mac->iter = a;
    if (a == (ASN1_INTEGER *)0x0) {
      iVar1 = 0xd3;
      goto LAB_00b5051c;
    }
    iVar1 = ASN1_INTEGER_set(a,(long)iter);
    if (iVar1 == 0) {
      iVar1 = 0xd7;
      goto LAB_00b5051c;
    }
  }
  iVar1 = 8;
  if (saltlen != 0) {
    iVar1 = saltlen;
  }
  buf = CRYPTO_malloc(iVar1,"crypto/pkcs12/p12_mutl.c",0xdd);
  pAVar3 = p12->mac->salt;
  pAVar3->data = buf;
  if (buf == (uchar *)0x0) {
    iVar1 = 0xde;
  }
  else {
    pAVar3->length = iVar1;
    if (salt == (uchar *)0x0) {
      iVar1 = RAND_bytes(buf,iVar1);
      if (iVar1 < 1) {
        return 0;
      }
    }
    else {
      memcpy(buf,salt,(long)iVar1);
    }
    X509_SIG_getm(p12->mac->dinfo,&local_38,0);
    iVar1 = EVP_MD_type(md_type);
    aobj = OBJ_nid2obj(iVar1);
    iVar1 = X509_ALGOR_set0(local_38,aobj,5,(void *)0x0);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = 0xea;
  }
LAB_00b5051c:
  ERR_put_error(0x23,0x7a,0x41,"crypto/pkcs12/p12_mutl.c",iVar1);
  return 0;
}

