
void * ASN1_item_d2i_fp(ASN1_ITEM *it,FILE *in,void *x)

{
  BUF_MEM *a;
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  ASN1_VALUE *pAVar2;
  uchar *local_40;
  BUF_MEM *local_38;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0xd,0xce,7,"crypto/asn1/a_d2i_fp.c",0x53);
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  else {
    BIO_ctrl(bp,0x6a,0,in);
    local_38 = (BUF_MEM *)0x0;
    iVar1 = FUN_00b7acc4(bp,&local_38);
    a = local_38;
    if (iVar1 < 0) {
      pAVar2 = (ASN1_VALUE *)0x0;
    }
    else {
      local_40 = (uchar *)local_38->data;
      pAVar2 = ASN1_item_d2i(x,&local_40,(long)iVar1,it);
    }
    BUF_MEM_free(a);
    BIO_free(bp);
  }
  return pAVar2;
}

