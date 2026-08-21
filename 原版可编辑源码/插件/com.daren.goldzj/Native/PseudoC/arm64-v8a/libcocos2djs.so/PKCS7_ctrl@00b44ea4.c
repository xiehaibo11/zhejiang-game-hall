
long PKCS7_ctrl(PKCS7 *p7,int cmd,long larg,char *parg)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if (cmd == 2) {
    if (iVar2 == 0x16) {
      if ((p7->d).sign == (PKCS7_SIGNED *)0x0) {
        p7->detached = 1;
        return 1;
      }
      bVar1 = (((p7->d).sign)->contents->d).ptr == (char *)0x0;
      p7->detached = (uint)bVar1;
      return (ulong)bVar1;
    }
    iVar2 = 0x68;
    iVar3 = 0x33;
  }
  else if (cmd == 1) {
    if (iVar2 == 0x16) {
      iVar2 = (int)larg;
      p7->detached = iVar2;
      if ((larg & 0xffffffffU) == 0) {
        return 0;
      }
      iVar3 = OBJ_obj2nid(((p7->d).sign)->contents->type);
      if (iVar3 == 0x15) {
        ASN1_OCTET_STRING_free((((p7->d).sign)->contents->d).data);
        (((p7->d).sign)->contents->d).ptr = (char *)0x0;
        return (long)iVar2;
      }
      return (long)iVar2;
    }
    iVar2 = 0x68;
    iVar3 = 0x25;
  }
  else {
    iVar2 = 0x6e;
    iVar3 = 0x39;
  }
  ERR_put_error(0x21,0x68,iVar2,"crypto/pkcs7/pk7_lib.c",iVar3);
  return 0;
}

