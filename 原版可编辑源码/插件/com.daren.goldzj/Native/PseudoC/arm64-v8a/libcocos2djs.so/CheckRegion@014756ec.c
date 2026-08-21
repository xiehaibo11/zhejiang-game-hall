
/* v8::base::RegionAllocator::CheckRegion(unsigned long) */

ulong __thiscall v8::base::RegionAllocator::CheckRegion(RegionAllocator *this,ulong param_1)

{
  RegionAllocator *pRVar1;
  ulong uVar2;
  RegionAllocator *pRVar3;
  ulong *puVar4;
  RegionAllocator *pRVar5;
  RegionAllocator *pRVar6;
  
  if (param_1 - *(long *)this < *(ulong *)(this + 8)) {
    pRVar1 = this + 0x40;
    pRVar6 = *(RegionAllocator **)pRVar1;
    pRVar5 = pRVar1;
    if (pRVar6 != (RegionAllocator *)0x0) {
      do {
        uVar2 = (*(long **)(pRVar6 + 0x20))[1] + **(long **)(pRVar6 + 0x20);
        pRVar3 = pRVar6;
        if (uVar2 <= param_1) {
          pRVar3 = pRVar5;
        }
        pRVar6 = *(RegionAllocator **)(pRVar6 + (ulong)(uVar2 <= param_1) * 8);
        pRVar5 = pRVar3;
      } while (pRVar6 != (RegionAllocator *)0x0);
      if (((pRVar3 != pRVar1) && (puVar4 = *(ulong **)(pRVar3 + 0x20), *puVar4 == param_1)) &&
         ((char)puVar4[2] != '\0')) {
        return puVar4[1];
      }
    }
  }
  return 0;
}

