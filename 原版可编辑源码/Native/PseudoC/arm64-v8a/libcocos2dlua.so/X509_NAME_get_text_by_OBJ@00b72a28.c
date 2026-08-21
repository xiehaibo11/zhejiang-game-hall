
int X509_NAME_get_text_by_OBJ(X509_NAME *name,ASN1_OBJECT *obj,char *buf,int len)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  stack_st_X509_NAME_ENTRY *psVar7;
  int iVar8;
  
  if (name != (X509_NAME *)0x0) {
    psVar7 = name->entries;
    iVar1 = OPENSSL_sk_num(psVar7);
    iVar3 = -2;
    do {
      iVar8 = iVar3;
      if (iVar1 <= iVar8 + 2) {
        return -1;
      }
      puVar4 = (undefined8 *)OPENSSL_sk_value(psVar7);
      iVar2 = OBJ_cmp((ASN1_OBJECT *)*puVar4,obj);
      iVar3 = iVar8 + 1;
    } while (iVar2 != 0);
    if (-2 < iVar8 + 1) {
      iVar3 = OPENSSL_sk_num(name->entries);
      if ((iVar8 + 2 < iVar3) && (lVar5 = OPENSSL_sk_value(name->entries,iVar8 + 2), lVar5 != 0)) {
        piVar6 = *(int **)(lVar5 + 8);
      }
      else {
        piVar6 = (int *)0x0;
      }
      iVar1 = *piVar6;
      iVar3 = iVar1;
      if (len <= iVar1) {
        iVar3 = len + -1;
      }
      if (buf != (char *)0x0) {
        memcpy(buf,*(void **)(piVar6 + 2),(long)iVar3);
        buf[iVar3] = '\0';
        return iVar3;
      }
      return iVar1;
    }
  }
  return -1;
}

