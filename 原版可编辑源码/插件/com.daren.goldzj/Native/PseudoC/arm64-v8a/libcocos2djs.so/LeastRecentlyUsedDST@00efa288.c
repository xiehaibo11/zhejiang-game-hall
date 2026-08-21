
/* v8::internal::DateCache::LeastRecentlyUsedDST(v8::internal::DateCache::DST*) */

void __thiscall v8::internal::DateCache::LeastRecentlyUsedDST(DateCache *this,DST *param_1)

{
  DateCache *pDVar1;
  long lVar2;
  
  lVar2 = 0;
  pDVar1 = (DateCache *)0x0;
  if ((long)param_1 - (long)this != 0x10) goto LAB_00efa2c4;
  while (lVar2 = lVar2 + 0x10, lVar2 != 0x200) {
    if (((long)param_1 - (long)this) + -0x10 != lVar2) {
LAB_00efa2c4:
      if ((pDVar1 == (DateCache *)0x0) || (*(int *)(this + lVar2 + 0x1c) < *(int *)(pDVar1 + 0xc)))
      {
        pDVar1 = this + lVar2 + 0x10;
      }
    }
  }
  *(undefined8 *)(pDVar1 + 8) = 0;
  *(undefined8 *)pDVar1 = 0x800000017fffffff;
  return;
}

