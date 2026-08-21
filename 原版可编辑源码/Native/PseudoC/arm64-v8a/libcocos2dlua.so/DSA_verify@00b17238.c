
int DSA_verify(int type,uchar *dgst,int dgst_len,uchar *sigbuf,int siglen,DSA *dsa)

{
  DSA_SIG *ptr;
  int iVar1;
  int iVar2;
  ASN1_VALUE *pAVar3;
  uchar *local_58;
  uchar *puStack_50;
  DSA_SIG *local_48;
  
  local_58 = (uchar *)0x0;
  puStack_50 = sigbuf;
  local_48 = (DSA_SIG *)CRYPTO_zalloc(0x10,"crypto/dsa/dsa_asn1.c",0x1a);
  if (local_48 == (DSA_SIG *)0x0) {
    ERR_put_error(10,0x66,0x41,"crypto/dsa/dsa_asn1.c",0x1c);
    iVar2 = -1;
  }
  else {
    pAVar3 = ASN1_item_d2i((ASN1_VALUE **)&local_48,&puStack_50,(long)siglen,
                           (ASN1_ITEM *)&DAT_016af8b8);
    if (pAVar3 == (ASN1_VALUE *)0x0) {
      iVar1 = -1;
      iVar2 = -1;
    }
    else {
      iVar1 = ASN1_item_i2d((ASN1_VALUE *)local_48,&local_58,(ASN1_ITEM *)&DAT_016af8b8);
      if (iVar1 == siglen) {
        iVar2 = memcmp(sigbuf,local_58,(long)siglen);
        iVar1 = siglen;
        if (iVar2 == 0) {
          iVar2 = DSA_do_verify(dgst,dgst_len,local_48,dsa);
        }
        else {
          iVar2 = -1;
        }
      }
      else {
        iVar2 = -1;
      }
    }
    CRYPTO_clear_free(local_58,(long)iVar1,"crypto/dsa/dsa_asn1.c",0x98);
    ptr = local_48;
    if (local_48 != (DSA_SIG *)0x0) {
      BN_clear_free(local_48->r);
      BN_clear_free(ptr->s);
      CRYPTO_free(ptr);
    }
  }
  return iVar2;
}

