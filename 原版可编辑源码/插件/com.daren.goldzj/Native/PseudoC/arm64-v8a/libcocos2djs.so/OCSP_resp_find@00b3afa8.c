
int OCSP_resp_find(OCSP_BASICRESP *bs,OCSP_CERTID *id,int last)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  OCSP_RESPDATA *pOVar4;
  
  if (bs != (OCSP_BASICRESP *)0x0) {
    pOVar4 = bs[1].tbsResponseData;
    iVar1 = 0;
    if (-1 < last) {
      iVar1 = last + 1;
    }
    for (; iVar2 = OPENSSL_sk_num(pOVar4), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      puVar3 = (undefined8 *)OPENSSL_sk_value(pOVar4,iVar1);
      iVar2 = OCSP_id_cmp(id,(OCSP_CERTID *)*puVar3);
      if (iVar2 == 0) {
        return iVar1;
      }
    }
  }
  return -1;
}

