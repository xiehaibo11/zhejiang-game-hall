
/* v8::base::RegionAllocator::FindRegion(unsigned long) */

RegionAllocator * __thiscall
v8::base::RegionAllocator::FindRegion(RegionAllocator *this,ulong param_1)

{
  ulong uVar1;
  RegionAllocator *pRVar2;
  RegionAllocator *pRVar3;
  RegionAllocator *pRVar4;
  
  pRVar3 = this + 0x40;
  if (param_1 - *(long *)this < *(ulong *)(this + 8)) {
    pRVar4 = *(RegionAllocator **)pRVar3;
    for (; pRVar4 != (RegionAllocator *)0x0;
        pRVar4 = *(RegionAllocator **)(pRVar4 + (ulong)(uVar1 <= param_1) * 8)) {
      uVar1 = (*(long **)(pRVar4 + 0x20))[1] + **(long **)(pRVar4 + 0x20);
      pRVar2 = pRVar4;
      if (uVar1 <= param_1) {
        pRVar2 = pRVar3;
      }
      pRVar3 = pRVar2;
    }
  }
  return pRVar3;
}

