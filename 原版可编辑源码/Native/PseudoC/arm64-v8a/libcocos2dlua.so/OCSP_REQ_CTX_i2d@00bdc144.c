
undefined8 OCSP_REQ_CTX_i2d(undefined4 *param_1,ASN1_ITEM *param_2,ASN1_VALUE *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = ASN1_item_i2d(param_3,(uchar **)0x0,param_2);
  iVar2 = BIO_printf(*(BIO **)(param_1 + 8),
                     "Content-Type: application/ocsp-request\r\nContent-Length: %d\r\n\r\n",
                     (ulong)uVar1);
  if ((iVar2 < 1) || (iVar2 = ASN1_item_i2d_bio(param_2,*(BIO **)(param_1 + 8),param_3), iVar2 < 1))
  {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *param_1 = 0x1005;
  }
  return uVar3;
}

