
int EVP_PBE_find(int type,int pbe_nid,int *pcnid,int *pmnid,undefined1 **pkeygen)

{
  int iVar1;
  void *pvVar2;
  int local_48;
  int iStack_44;
  
  if (pbe_nid == 0) {
    return 0;
  }
  local_48 = type;
  iStack_44 = pbe_nid;
  if ((((DAT_01785190 == 0) || (iVar1 = OPENSSL_sk_find(DAT_01785190,&local_48), iVar1 == -1)) ||
      (pvVar2 = (void *)OPENSSL_sk_value(DAT_01785190,iVar1), pvVar2 == (void *)0x0)) &&
     (pvVar2 = OBJ_bsearch_(&local_48,&DAT_016c6708,0x19,0x18,(cmp *)&LAB_00bdafcc),
     pvVar2 == (void *)0x0)) {
    return 0;
  }
  if (pcnid != (int *)0x0) {
    *pcnid = *(int *)((long)pvVar2 + 8);
  }
  if (pmnid != (int *)0x0) {
    *pmnid = *(int *)((long)pvVar2 + 0xc);
  }
  if (pkeygen != (undefined1 **)0x0) {
    *pkeygen = *(undefined1 **)((long)pvVar2 + 0x10);
  }
  return 1;
}

