
undefined8 OCSP_REQ_CTX_nbio_d2i(undefined4 *param_1,undefined8 *param_2,ASN1_ITEM *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ASN1_VALUE *pAVar3;
  uchar *puStack_28;
  
  uVar1 = OCSP_REQ_CTX_nbio();
  if ((int)uVar1 == 1) {
    lVar2 = BIO_ctrl(*(BIO **)(param_1 + 8),3,0,&puStack_28);
    pAVar3 = ASN1_item_d2i((ASN1_VALUE **)0x0,&puStack_28,(long)(int)lVar2,param_3);
    *param_2 = pAVar3;
    if (pAVar3 == (ASN1_VALUE *)0x0) {
      *param_1 = 0x1000;
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

