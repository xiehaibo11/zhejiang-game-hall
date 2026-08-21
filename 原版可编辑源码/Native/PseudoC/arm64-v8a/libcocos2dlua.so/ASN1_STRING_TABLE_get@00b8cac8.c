
ASN1_STRING_TABLE * ASN1_STRING_TABLE_get(int nid)

{
  int iVar1;
  ASN1_STRING_TABLE *pAVar2;
  int local_48 [10];
  
  local_48[0] = nid;
  if ((DAT_017850d0 != 0) && (iVar1 = OPENSSL_sk_find(DAT_017850d0,local_48), -1 < iVar1)) {
    pAVar2 = (ASN1_STRING_TABLE *)OPENSSL_sk_value(DAT_017850d0,iVar1);
    return pAVar2;
  }
  pAVar2 = OBJ_bsearch_(local_48,&DAT_013f1398,0x17,0x28,(cmp *)&LAB_00b8cd1c);
  return pAVar2;
}

