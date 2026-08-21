
/* v8::base::RegionAllocator::AllocateRegion(unsigned long) */

undefined8 __thiscall v8::base::RegionAllocator::AllocateRegion(RegionAllocator *this,ulong param_1)

{
  RegionAllocator *pRVar1;
  RegionAllocator *pRVar2;
  RegionAllocator *pRVar3;
  RegionAllocator *pRVar4;
  Region *pRVar5;
  
  pRVar2 = this + 0x58;
  pRVar1 = *(RegionAllocator **)pRVar2;
  pRVar4 = pRVar2;
  if (*(RegionAllocator **)pRVar2 != (RegionAllocator *)0x0) {
    do {
      while (pRVar3 = pRVar1,
            *(ulong *)(*(long *)(pRVar3 + 0x20) + 8) != param_1 &&
            *(ulong *)(*(long *)(pRVar3 + 0x20) + 8) < param_1) {
        pRVar1 = *(RegionAllocator **)(pRVar3 + 8);
        if (*(RegionAllocator **)(pRVar3 + 8) == (RegionAllocator *)0x0) goto LAB_014750f4;
      }
      pRVar1 = *(RegionAllocator **)pRVar3;
      pRVar4 = pRVar3;
    } while (*(RegionAllocator **)pRVar3 != (RegionAllocator *)0x0);
LAB_014750f4:
    if ((pRVar4 != pRVar2) && (pRVar5 = *(Region **)(pRVar4 + 0x20), pRVar5 != (Region *)0x0)) {
      if (*(ulong *)(pRVar5 + 8) != param_1) {
        Split(this,pRVar5,param_1);
      }
      FreeListRemoveRegion(this,pRVar5);
      pRVar5[0x10] = (Region)0x1;
      return *(undefined8 *)pRVar5;
    }
  }
  return 0xffffffffffffffff;
}

