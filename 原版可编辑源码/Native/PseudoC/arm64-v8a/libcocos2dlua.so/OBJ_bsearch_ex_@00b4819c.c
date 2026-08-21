
void * OBJ_bsearch_ex_(void *key,void *base,int num,int size,cmp *cmp,int flags)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (num != 0) {
    iVar5 = 0;
    iVar6 = 0;
    iVar2 = 0;
    pvVar4 = (void *)0x0;
    while (iVar7 = num, iVar5 < iVar7) {
      iVar6 = iVar7 + iVar5;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      iVar6 = iVar6 >> 1;
      pvVar4 = (void *)((long)base + (long)(iVar6 * size));
      iVar2 = (*cmp)(key,pvVar4);
      num = iVar6;
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          bVar1 = false;
          goto LAB_00b48270;
        }
        iVar5 = iVar6 + 1;
        num = iVar7;
      }
    }
    bVar1 = iVar2 != 0;
    if (((flags & 1U) != 0) || (iVar2 == 0)) {
LAB_00b48270:
      if (((uint)flags >> 1 & 1) == 0) {
        return pvVar4;
      }
      if (bVar1) {
        return pvVar4;
      }
      lVar3 = (long)iVar6 + 1;
      pvVar4 = (void *)((long)base + ((long)iVar6 + -1) * (long)size);
      iVar5 = iVar6 * size;
      do {
        iVar6 = iVar5;
        lVar3 = lVar3 + -1;
        if (lVar3 < 1) break;
        iVar2 = (*cmp)(key,pvVar4);
        pvVar4 = (void *)((long)pvVar4 - (long)size);
        iVar5 = iVar6 - size;
      } while (iVar2 == 0);
      return (void *)((long)base + (long)iVar6);
    }
  }
  return (void *)0x0;
}

