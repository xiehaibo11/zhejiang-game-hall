
ASN1_STRING_TABLE * ASN1_STRING_TABLE_get(int nid)

{
  int iVar1;
  ASN1_STRING_TABLE *pAVar2;
  int local_48 [10];
  
  local_48[0] = nid;
  if ((DAT_01d3b350 != 0) && (iVar1 = OPENSSL_sk_find(DAT_01d3b350,local_48), -1 < iVar1)) {
    pAVar2 = (ASN1_STRING_TABLE *)OPENSSL_sk_value(DAT_01d3b350,iVar1);
    return pAVar2;
  }
  pAVar2 = OBJ_bsearch_(local_48,&DAT_018c2ec8,0x17,0x28,(cmp *)&LAB_00b7e51c);
  return pAVar2;
}

