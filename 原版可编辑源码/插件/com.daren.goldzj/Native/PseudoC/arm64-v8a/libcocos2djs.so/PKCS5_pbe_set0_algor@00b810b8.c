
int PKCS5_pbe_set0_algor(X509_ALGOR *algor,int alg,int iter,uchar *salt,int saltlen)

{
  long v;
  int iVar1;
  int iVar2;
  ASN1_VALUE *val;
  uchar *buf;
  ASN1_STRING *pAVar3;
  ASN1_OBJECT *aobj;
  ASN1_OCTET_STRING *local_48;
  
  local_48 = (ASN1_STRING *)0x0;
  val = ASN1_item_new((ASN1_ITEM *)PBEPARAM_it);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(0xd,0xd7,0x41,"crypto/asn1/p5_pbe.c",0x24);
  }
  else {
    v = 0x800;
    if (0 < iter) {
      v = (long)iter;
    }
    iVar1 = ASN1_INTEGER_set(*(ASN1_INTEGER **)(val + 8),v);
    if (iVar1 == 0) {
      ERR_put_error(0xd,0xd7,0x41,"crypto/asn1/p5_pbe.c",0x2a);
    }
    else {
      iVar1 = 8;
      if (saltlen != 0) {
        iVar1 = saltlen;
      }
      buf = CRYPTO_malloc(iVar1,"crypto/asn1/p5_pbe.c",0x30);
      if (buf == (uchar *)0x0) {
        ERR_put_error(0xd,0xd7,0x41,"crypto/asn1/p5_pbe.c",0x32);
        goto LAB_00b81258;
      }
      if (salt == (uchar *)0x0) {
        iVar2 = RAND_bytes(buf,iVar1);
        if (iVar2 < 1) goto LAB_00b81258;
      }
      else {
        memcpy(buf,salt,(long)iVar1);
      }
      ASN1_STRING_set0(*(ASN1_STRING **)val,buf,iVar1);
      pAVar3 = ASN1_item_pack(val,(ASN1_ITEM *)PBEPARAM_it,&local_48);
      if (pAVar3 == (ASN1_STRING *)0x0) {
        ERR_put_error(0xd,0xd7,0x41,"crypto/asn1/p5_pbe.c",0x3e);
      }
      else {
        ASN1_item_free(val,(ASN1_ITEM *)PBEPARAM_it);
        aobj = OBJ_nid2obj(alg);
        iVar1 = X509_ALGOR_set0(algor,aobj,0x10,local_48);
        if (iVar1 != 0) {
          return 1;
        }
        val = (ASN1_VALUE *)0x0;
      }
    }
  }
  buf = (uchar *)0x0;
LAB_00b81258:
  CRYPTO_free(buf);
  ASN1_item_free(val,(ASN1_ITEM *)PBEPARAM_it);
  ASN1_STRING_free(local_48);
  return 0;
}

