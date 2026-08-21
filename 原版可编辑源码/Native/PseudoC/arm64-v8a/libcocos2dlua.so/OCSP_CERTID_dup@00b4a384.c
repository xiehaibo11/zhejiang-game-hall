
OCSP_CERTID * OCSP_CERTID_dup(OCSP_CERTID *id)

{
  OCSP_CERTID *pOVar1;
  
  pOVar1 = ASN1_item_dup((ASN1_ITEM *)OCSP_CERTID_it,id);
  return pOVar1;
}

