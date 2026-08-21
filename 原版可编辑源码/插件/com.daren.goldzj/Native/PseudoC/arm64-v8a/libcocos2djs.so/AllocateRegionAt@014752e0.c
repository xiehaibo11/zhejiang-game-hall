
/* v8::base::RegionAllocator::AllocateRegionAt(unsigned long, unsigned long) */

undefined8 __thiscall
v8::base::RegionAllocator::AllocateRegionAt(RegionAllocator *this,ulong param_1,ulong param_2)

{
  RegionAllocator *pRVar1;
  ulong uVar2;
  ulong uVar3;
  RegionAllocator *pRVar4;
  ulong uVar5;
  RegionAllocator *pRVar6;
  RegionAllocator *pRVar7;
  Region *pRVar8;
  
  if (param_1 - *(long *)this < *(ulong *)(this + 8)) {
    pRVar1 = this + 0x40;
    pRVar6 = *(RegionAllocator **)pRVar1;
    if (pRVar6 != (RegionAllocator *)0x0) {
      uVar2 = param_2 + param_1;
      pRVar7 = pRVar1;
      do {
        uVar3 = (*(long **)(pRVar6 + 0x20))[1] + **(long **)(pRVar6 + 0x20);
        pRVar4 = pRVar6;
        if (uVar3 <= param_1) {
          pRVar4 = pRVar7;
        }
        pRVar6 = *(RegionAllocator **)(pRVar6 + (ulong)(uVar3 <= param_1) * 8);
        pRVar7 = pRVar4;
      } while (pRVar6 != (RegionAllocator *)0x0);
      if ((pRVar4 != pRVar1) && (pRVar8 = *(Region **)(pRVar4 + 0x20), pRVar8[0x10] == (Region)0x0))
      {
        uVar3 = *(ulong *)pRVar8;
        uVar5 = *(ulong *)(pRVar8 + 8);
        if (uVar2 <= uVar5 + uVar3) {
          if (uVar3 != param_1) {
            pRVar8 = (Region *)Split(this,pRVar8,param_1 - uVar3);
            param_1 = *(ulong *)pRVar8;
            uVar5 = *(ulong *)(pRVar8 + 8);
          }
          if (uVar5 + param_1 != uVar2) {
            Split(this,pRVar8,param_2);
          }
          FreeListRemoveRegion(this,pRVar8);
          pRVar8[0x10] = (Region)0x1;
          return 1;
        }
      }
    }
  }
  return 0;
}

