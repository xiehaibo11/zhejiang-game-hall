
int asn1_do_lock(ASN1_VALUE **pval,int op,ASN1_ITEM *it)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  ASN1_VALUE *pAVar5;
  int local_24;
  
  if ((((it->itype == '\x06') || (it->itype == '\x01')) &&
      (pvVar3 = it->funcs, pvVar3 != (void *)0x0)) && ((*(byte *)((long)pvVar3 + 8) & 1) != 0)) {
    pAVar5 = *pval;
    iVar4 = *(int *)((long)pvVar3 + 0x10);
                    /* try { // try from 00af0acc to 00bf0ad3 has its CatchHandler @ 00af0f5c */
    if (op == 0) {
      *(undefined4 *)(pAVar5 + *(int *)((long)pvVar3 + 0xc)) = 1;
      lVar2 = CRYPTO_THREAD_lock_new();
      *(long *)(pAVar5 + iVar4) = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
      ERR_put_error(0xd,0xe9,0x41,"crypto/asn1/tasn_utl.c",0x4a);
    }
    else {
      iVar1 = CRYPTO_atomic_add(pAVar5 + *(int *)((long)pvVar3 + 0xc),op,&local_24,
                                *(undefined8 *)(pAVar5 + iVar4));
      if (-1 < iVar1) {
        if (local_24 != 0) {
          return local_24;
        }
        CRYPTO_THREAD_lock_free(*(undefined8 *)(pAVar5 + iVar4));
        *(undefined8 *)(pAVar5 + iVar4) = 0;
        return local_24;
      }
    }
    iVar4 = -1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

