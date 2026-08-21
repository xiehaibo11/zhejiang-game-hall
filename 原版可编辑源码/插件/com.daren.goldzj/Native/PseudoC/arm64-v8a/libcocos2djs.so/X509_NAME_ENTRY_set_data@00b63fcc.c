
int X509_NAME_ENTRY_set_data(X509_NAME_ENTRY *ne,int type,uchar *bytes,int len)

{
  int iVar1;
  uint uVar2;
  ASN1_STRING *pAVar3;
  size_t sVar4;
  
  uVar2 = 0;
  if (ne != (X509_NAME_ENTRY *)0x0) {
    if ((bytes == (uchar *)0x0) && (len != 0)) {
                    /* try { // try from 00b63ff8 to 00c6401f has its CatchHandler @ 00b641f0 */
      uVar2 = 0;
    }
    else if ((type < 1) || (((uint)type >> 0xc & 1) == 0)) {
      if (len < 0) {
        sVar4 = strlen((char *)bytes);
        len = (int)sVar4;
                    /* try { // try from 00b64044 to 00c6405f has its CatchHandler @ 00b640e4 */
      }
      iVar1 = ASN1_STRING_set(ne->value,bytes,len);
      uVar2 = 0;
      if (iVar1 != 0) {
                    /* try { // try from 00b64060 to 00c640d3 has its CatchHandler @ 00b63af8 */
        if (type != -1) {
          if (type == -2) {
            type = ASN1_PRINTABLE_type(bytes,len);
          }
          ne->value->type = type;
        }
        uVar2 = 1;
      }
    }
    else {
      iVar1 = OBJ_obj2nid(ne->object);
      pAVar3 = ASN1_STRING_set_by_NID(&ne->value,bytes,len,type,iVar1);
      uVar2 = (uint)(pAVar3 != (ASN1_STRING *)0x0);
    }
  }
  return uVar2;
}

