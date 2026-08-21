
int X509_NAME_add_entry(X509_NAME *name,X509_NAME_ENTRY *ne,int loc,int set)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  X509_NAME_ENTRY *a;
  stack_st_X509_NAME_ENTRY *psVar4;
  int iVar5;
  
  if (name != (X509_NAME *)0x0) {
    psVar4 = name->entries;
    iVar2 = OPENSSL_sk_num(psVar4);
    iVar5 = iVar2;
    if (loc <= iVar2 && -1 < loc) {
      iVar5 = loc;
    }
    name->modified = 1;
    if (set == -1) {
      if (iVar5 == 0) {
        iVar2 = 0;
        bVar1 = true;
      }
      else {
        lVar3 = OPENSSL_sk_value(psVar4,iVar5 + -1);
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar1 = false;
      }
    }
    else {
      if (iVar5 < iVar2) {
        lVar3 = OPENSSL_sk_value(psVar4,iVar5);
        iVar2 = *(int *)(lVar3 + 0x10);
      }
      else if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        lVar3 = OPENSSL_sk_value(psVar4,iVar5 + -1);
        iVar2 = *(int *)(lVar3 + 0x10) + 1;
      }
      bVar1 = iVar2 == 0;
    }
    a = X509_NAME_ENTRY_dup(ne);
    if (a != (X509_NAME_ENTRY *)0x0) {
      a->set = iVar2;
      iVar2 = OPENSSL_sk_insert(psVar4,a,iVar5);
      if (iVar2 != 0) {
        if ((bVar1) && (iVar2 = OPENSSL_sk_num(psVar4), iVar5 + 1 < iVar2)) {
          do {
            lVar3 = OPENSSL_sk_value(psVar4,iVar5);
            iVar5 = iVar5 + 1;
            *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
          } while (iVar2 + -1 != iVar5);
        }
        return 1;
      }
      ERR_put_error(0xb,0x71,0x41,"crypto/x509/x509name.c",0xe1);
    }
    X509_NAME_ENTRY_free(a);
  }
  return 0;
}

