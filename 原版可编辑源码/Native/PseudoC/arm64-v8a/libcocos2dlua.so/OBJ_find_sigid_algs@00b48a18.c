
int OBJ_find_sigid_algs(int signid,int *pdig_nid,int *ppkey_nid)

{
  int iVar1;
  void *pvVar2;
  int local_40 [4];
  
  local_40[0] = signid;
  if ((((DAT_01784a30 == 0) || (iVar1 = OPENSSL_sk_find(DAT_01784a30,local_40), iVar1 < 0)) ||
      (pvVar2 = (void *)OPENSSL_sk_value(DAT_01784a30,iVar1), pvVar2 == (void *)0x0)) &&
     (pvVar2 = OBJ_bsearch_(local_40,&DAT_013ec5a4,0x2a,0xc,(cmp *)&LAB_00b48ce0),
     pvVar2 == (void *)0x0)) {
    return 0;
  }
  if (pdig_nid != (int *)0x0) {
    *pdig_nid = *(int *)((long)pvVar2 + 4);
  }
  if (ppkey_nid != (int *)0x0) {
    *ppkey_nid = *(int *)((long)pvVar2 + 8);
  }
  return 1;
}

