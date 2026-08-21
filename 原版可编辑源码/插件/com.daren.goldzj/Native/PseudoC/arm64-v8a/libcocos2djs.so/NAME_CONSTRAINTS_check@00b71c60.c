
int NAME_CONSTRAINTS_check(X509 *x,NAME_CONSTRAINTS *nc)

{
  int iVar1;
  int iVar2;
  int iVar3;
  X509_NAME *name;
  X509_NAME_ENTRY *ne;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_50 [2];
  X509_NAME *local_48;
  
  name = X509_get_subject_name(x);
  iVar1 = X509_NAME_entry_count(name);
  if (0 < iVar1) {
    local_50[0] = 4;
    local_48 = name;
    iVar1 = FUN_00b71db0(local_50,nc);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar2 = -1;
    local_50[0] = 1;
    iVar1 = 0;
    do {
      iVar2 = X509_NAME_get_index_by_NID(name,0x30,iVar2);
      if (iVar2 == -1) {
        iVar5 = 2;
        iVar2 = 2;
        goto LAB_00b71d40;
      }
      ne = X509_NAME_get_entry(name,iVar2);
      local_48 = (X509_NAME *)X509_NAME_ENTRY_get_data(ne);
      if (*(int *)((long)&local_48->entries + 4) != 0x16) {
        iVar1 = 0x35;
        iVar5 = 1;
        iVar2 = 1;
        goto LAB_00b71d40;
      }
      iVar3 = FUN_00b71db0(local_50,nc);
    } while (iVar3 == 0);
    iVar2 = 1;
    iVar5 = 1;
    iVar1 = iVar3;
LAB_00b71d40:
    if ((iVar2 != 2) && (iVar5 != 0)) {
      return iVar1;
    }
  }
  iVar1 = OPENSSL_sk_num(x[1].ex_pathlen);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar4 = OPENSSL_sk_value(x[1].ex_pathlen,iVar1);
      iVar2 = FUN_00b71db0(uVar4,nc);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(x[1].ex_pathlen);
    } while (iVar1 < iVar2);
  }
  return 0;
}

