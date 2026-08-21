
/* v8::internal::DateCache::ProbeDST(int) */

void __thiscall v8::internal::DateCache::ProbeDST(DateCache *this,int param_1)

{
  DateCache *pDVar1;
  DateCache *pDVar2;
  DateCache *pDVar3;
  long lVar4;
  DateCache *pDVar5;
  
  lVar4 = 0;
  pDVar1 = (DateCache *)0x0;
  pDVar2 = (DateCache *)0x0;
  do {
    pDVar5 = this + lVar4 + 0x10;
    pDVar3 = pDVar2;
    if (param_1 < *(int *)pDVar5) {
      if ((param_1 < *(int *)(this + lVar4 + 0x14)) &&
         ((pDVar1 == (DateCache *)0x0 || (*(int *)(this + lVar4 + 0x14) < *(int *)(pDVar1 + 4))))) {
        pDVar1 = pDVar5;
      }
    }
    else {
      pDVar3 = pDVar5;
      if ((pDVar2 != (DateCache *)0x0) && (*(int *)pDVar5 <= *(int *)pDVar2)) {
        pDVar3 = pDVar2;
      }
    }
    lVar4 = lVar4 + 0x10;
    pDVar2 = pDVar3;
  } while (lVar4 != 0x200);
  if ((pDVar3 == (DateCache *)0x0) &&
     (pDVar3 = *(DateCache **)(this + 0x218), *(int *)pDVar3 <= *(int *)(pDVar3 + 4))) {
    lVar4 = 0;
    pDVar3 = (DateCache *)0x0;
    if ((long)pDVar1 - (long)this != 0x10) goto LAB_00efa1d8;
    while (lVar4 = lVar4 + 0x10, lVar4 != 0x200) {
      if (((long)pDVar1 - (long)this) + -0x10 != lVar4) {
LAB_00efa1d8:
        if ((pDVar3 == (DateCache *)0x0) || (*(int *)(this + lVar4 + 0x1c) < *(int *)(pDVar3 + 0xc))
           ) {
          pDVar3 = this + lVar4 + 0x10;
        }
      }
    }
    *(undefined8 *)(pDVar3 + 8) = 0;
    *(undefined8 *)pDVar3 = 0x800000017fffffff;
  }
  if ((pDVar1 == (DateCache *)0x0) &&
     ((pDVar1 = *(DateCache **)(this + 0x220), pDVar3 == pDVar1 ||
      (*(int *)pDVar1 <= *(int *)(pDVar1 + 4))))) {
    lVar4 = 0;
    pDVar1 = (DateCache *)0x0;
    if ((long)pDVar3 - (long)this != 0x10) goto LAB_00efa254;
    while (lVar4 = lVar4 + 0x10, lVar4 != 0x200) {
      if (((long)pDVar3 - (long)this) + -0x10 != lVar4) {
LAB_00efa254:
        if ((pDVar1 == (DateCache *)0x0) || (*(int *)(this + lVar4 + 0x1c) < *(int *)(pDVar1 + 0xc))
           ) {
          pDVar1 = this + lVar4 + 0x10;
        }
      }
    }
    *(undefined8 *)(pDVar1 + 8) = 0;
    *(undefined8 *)pDVar1 = 0x800000017fffffff;
  }
  *(DateCache **)(this + 0x218) = pDVar3;
  *(DateCache **)(this + 0x220) = pDVar1;
  return;
}

