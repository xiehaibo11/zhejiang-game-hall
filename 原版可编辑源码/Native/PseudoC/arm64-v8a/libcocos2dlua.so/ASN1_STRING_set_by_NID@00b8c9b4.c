
ASN1_STRING * ASN1_STRING_set_by_NID(ASN1_STRING **out,uchar *in,int inlen,int inform,int nid)

{
  ASN1_STRING **out_00;
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  ASN1_STRING *pAVar4;
  int local_68 [10];
  ASN1_STRING *local_38;
  
  out_00 = &local_38;
                    /* try { // try from 00b8c9d8 to 00c8c9df has its CatchHandler @ 00b8ca34 */
                    /* try { // try from 00b8c9e0 to 00c8ca4f has its CatchHandler @ 00b8c9b0 */
  if (out != (ASN1_STRING **)0x0) {
    out_00 = out;
  }
  local_38 = (ASN1_STRING *)0x0;
  local_68[0] = nid;
  if ((DAT_017850d0 == 0) || (iVar2 = OPENSSL_sk_find(DAT_017850d0,local_68), iVar2 < 0)) {
    pvVar3 = OBJ_bsearch_(local_68,&DAT_013f1398,0x17,0x28,(cmp *)&LAB_00b8cd1c);
  }
  else {
    pvVar3 = (void *)OPENSSL_sk_value(DAT_017850d0,iVar2);
  }
  if (pvVar3 == (void *)0x0) {
                    /* catch() { ... } // from try @ 00b8c9d8 with catch @ 00b8ca34 */
    iVar2 = ASN1_mbstring_copy(out_00,in,inlen,inform,DAT_0176f210 & 0x2806);
  }
  else {
    uVar1 = DAT_0176f210;
    if ((*(ulong *)((long)pvVar3 + 0x20) & 2) != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    iVar2 = ASN1_mbstring_ncopy(out_00,in,inlen,inform,uVar1 & *(ulong *)((long)pvVar3 + 0x18),
                                *(long *)((long)pvVar3 + 8),*(long *)((long)pvVar3 + 0x10));
  }
  if (iVar2 < 1) {
    pAVar4 = (ASN1_STRING *)0x0;
  }
  else {
    pAVar4 = *out_00;
  }
  return pAVar4;
}

