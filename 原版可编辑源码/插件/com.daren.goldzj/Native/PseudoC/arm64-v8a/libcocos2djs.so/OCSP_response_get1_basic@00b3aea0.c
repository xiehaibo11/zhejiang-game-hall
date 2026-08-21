
OCSP_BASICRESP * OCSP_response_get1_basic(OCSP_RESPONSE *resp)

{
  int iVar1;
  OCSP_BASICRESP *pOVar2;
  int line;
  OCSP_RESPBYTES *pOVar3;
  
  pOVar3 = resp->responseBytes;
  if (pOVar3 == (OCSP_RESPBYTES *)0x0) {
    iVar1 = 0x6c;
    line = 0x99;
  }
  else {
    iVar1 = OBJ_obj2nid(pOVar3->responseType);
    if (iVar1 == 0x16d) {
      pOVar2 = ASN1_item_unpack(pOVar3->response,(ASN1_ITEM *)OCSP_BASICRESP_it);
      return pOVar2;
    }
    iVar1 = 0x68;
    line = 0x9d;
  }
  ERR_put_error(0x27,0x6f,iVar1,"crypto/ocsp/ocsp_cl.c",line);
  return (OCSP_BASICRESP *)0x0;
}

