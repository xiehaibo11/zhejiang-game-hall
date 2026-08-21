
void * OBJ_bsearch_(void *key,void *base,int num,int size,cmp *cmp)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (num == 0) {
LAB_00b39cfc:
    pvVar2 = (void *)0x0;
  }
  else {
    iVar3 = 0;
    iVar1 = 0;
    pvVar2 = (void *)0x0;
    do {
      iVar4 = num;
      if (iVar4 <= iVar3) {
        if (iVar1 == 0) {
          return pvVar2;
        }
        goto LAB_00b39cfc;
      }
      iVar1 = iVar4 + iVar3;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      num = iVar1 >> 1;
      pvVar2 = (void *)((long)base + (long)(num * size));
      iVar1 = (*cmp)(key,pvVar2);
    } while ((iVar1 < 0) || (iVar3 = num + 1, num = iVar4, iVar1 != 0));
  }
  return pvVar2;
}

