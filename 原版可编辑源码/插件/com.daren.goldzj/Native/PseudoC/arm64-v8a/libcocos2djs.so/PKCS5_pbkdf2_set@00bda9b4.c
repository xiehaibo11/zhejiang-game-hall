
X509_ALGOR * PKCS5_pbkdf2_set(int iter,uchar *salt,int saltlen,int prf_nid,int keylen)

{
  int iVar1;
  ASN1_VALUE *val;
  ASN1_OCTET_STRING *pAVar2;
  uchar *buf;
  ASN1_INTEGER *a;
  X509_ALGOR *pXVar3;
  ASN1_OBJECT *pAVar4;
  long lVar5;
  
  val = ASN1_item_new((ASN1_ITEM *)PBKDF2PARAM_it);
  if ((val != (ASN1_VALUE *)0x0) &&
     (pAVar2 = ASN1_OCTET_STRING_new(), pAVar2 != (ASN1_OCTET_STRING *)0x0)) {
    iVar1 = 8;
    if (saltlen != 0) {
      iVar1 = saltlen;
    }
    *(ASN1_OCTET_STRING **)(*(long *)val + 8) = pAVar2;
    **(undefined4 **)val = 4;
    buf = CRYPTO_malloc(iVar1,"crypto/asn1/p5_pbev2.c",0xaa);
    pAVar2->data = buf;
    if (buf != (uchar *)0x0) {
      pAVar2->length = iVar1;
      if (salt == (uchar *)0x0) {
        iVar1 = RAND_bytes(buf,iVar1);
        if (iVar1 < 1) goto LAB_00bdab24;
      }
      else {
        memcpy(buf,salt,(long)iVar1);
      }
      lVar5 = 0x800;
      if (0 < iter) {
        lVar5 = (long)iter;
      }
      iVar1 = ASN1_INTEGER_set(*(ASN1_INTEGER **)(val + 8),lVar5);
      if (iVar1 != 0) {
        if (0 < keylen) {
          a = ASN1_INTEGER_new();
          *(ASN1_INTEGER **)(val + 0x10) = a;
          if ((a == (ASN1_INTEGER *)0x0) || (iVar1 = ASN1_INTEGER_set(a,(long)keylen), iVar1 == 0))
          goto LAB_00bdab24;
        }
        if ((0 < prf_nid) && (prf_nid != 0xa3)) {
          pXVar3 = X509_ALGOR_new();
          *(X509_ALGOR **)(val + 0x18) = pXVar3;
          if (pXVar3 == (X509_ALGOR *)0x0) goto LAB_00bdab24;
          pAVar4 = OBJ_nid2obj(prf_nid);
          X509_ALGOR_set0(pXVar3,pAVar4,5,(void *)0x0);
        }
        pXVar3 = X509_ALGOR_new();
        if (pXVar3 != (X509_ALGOR *)0x0) {
          pAVar4 = OBJ_nid2obj(0x45);
          pXVar3->algorithm = pAVar4;
          lVar5 = ASN1_TYPE_pack_sequence(PBKDF2PARAM_it,val,&pXVar3->parameter);
          if (lVar5 != 0) {
            ASN1_item_free(val,(ASN1_ITEM *)PBKDF2PARAM_it);
            return pXVar3;
          }
        }
        goto LAB_00bdab28;
      }
    }
  }
LAB_00bdab24:
  pXVar3 = (X509_ALGOR *)0x0;
LAB_00bdab28:
  ERR_put_error(0xd,0xdb,0x41,"crypto/asn1/p5_pbev2.c",0xdd);
  ASN1_item_free(val,(ASN1_ITEM *)PBKDF2PARAM_it);
  X509_ALGOR_free(pXVar3);
  return (X509_ALGOR *)0x0;
}

