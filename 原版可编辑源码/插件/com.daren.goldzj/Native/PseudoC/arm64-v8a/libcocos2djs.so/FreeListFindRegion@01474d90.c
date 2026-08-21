
/* v8::base::RegionAllocator::FreeListFindRegion(unsigned long) */

undefined8 __thiscall
v8::base::RegionAllocator::FreeListFindRegion(RegionAllocator *this,ulong param_1)

{
  RegionAllocator *pRVar1;
  RegionAllocator *pRVar2;
  RegionAllocator *pRVar3;
  RegionAllocator *pRVar4;
  
  pRVar2 = this + 0x58;
  pRVar1 = *(RegionAllocator **)pRVar2;
  pRVar4 = pRVar2;
  if (*(RegionAllocator **)pRVar2 != (RegionAllocator *)0x0) {
    do {
      while (pRVar3 = pRVar1,
            *(ulong *)(*(long *)(pRVar3 + 0x20) + 8) == param_1 ||
            param_1 <= *(ulong *)(*(long *)(pRVar3 + 0x20) + 8)) {
        pRVar1 = *(RegionAllocator **)pRVar3;
        pRVar4 = pRVar3;
        if (*(RegionAllocator **)pRVar3 == (RegionAllocator *)0x0) goto LAB_01474dcc;
      }
      pRVar1 = *(RegionAllocator **)(pRVar3 + 8);
    } while (*(RegionAllocator **)(pRVar3 + 8) != (RegionAllocator *)0x0);
LAB_01474dcc:
    if (pRVar4 != pRVar2) {
      return *(undefined8 *)(pRVar4 + 0x20);
    }
  }
  return 0;
}

