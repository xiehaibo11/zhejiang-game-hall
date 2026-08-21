
/* v8::base::RegionAllocator::AllocateRegion(v8::base::RandomNumberGenerator*, unsigned long) */

ulong __thiscall
v8::base::RegionAllocator::AllocateRegion
          (RegionAllocator *this,RandomNumberGenerator *param_1,ulong param_2)

{
  RegionAllocator *pRVar1;
  ulong uVar2;
  RegionAllocator *pRVar3;
  RegionAllocator *pRVar4;
  ulong uVar5;
  RegionAllocator *pRVar6;
  Region *pRVar7;
  ulong local_38;
  
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x28)) {
    local_38 = 0;
    RandomNumberGenerator::NextBytes(param_1,&local_38,8);
    uVar5 = *(ulong *)(this + 0x18);
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = local_38 / uVar5;
    }
    uVar5 = *(long *)this + (local_38 - uVar2 * uVar5) * *(long *)(this + 0x30);
    uVar2 = AllocateRegionAt(this,uVar5,param_2);
    if ((uVar2 & 1) != 0) {
      return uVar5;
    }
    RandomNumberGenerator::NextBytes(param_1,&local_38,8);
    uVar5 = *(ulong *)(this + 0x18);
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = local_38 / uVar5;
    }
    uVar5 = *(long *)this + (local_38 - uVar2 * uVar5) * *(long *)(this + 0x30);
    uVar2 = AllocateRegionAt(this,uVar5,param_2);
    if ((uVar2 & 1) != 0) {
      return uVar5;
    }
    RandomNumberGenerator::NextBytes(param_1,&local_38,8);
    uVar5 = *(ulong *)(this + 0x18);
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = local_38 / uVar5;
    }
    uVar5 = *(long *)this + (local_38 - uVar2 * uVar5) * *(long *)(this + 0x30);
    uVar2 = AllocateRegionAt(this,uVar5,param_2);
    if ((uVar2 & 1) != 0) {
      return uVar5;
    }
  }
  pRVar3 = this + 0x58;
  pRVar1 = *(RegionAllocator **)pRVar3;
  pRVar6 = pRVar3;
  if (*(RegionAllocator **)pRVar3 != (RegionAllocator *)0x0) {
    do {
      while (pRVar4 = pRVar1,
            *(ulong *)(*(long *)(pRVar4 + 0x20) + 8) != param_2 &&
            *(ulong *)(*(long *)(pRVar4 + 0x20) + 8) < param_2) {
        pRVar1 = *(RegionAllocator **)(pRVar4 + 8);
        if (*(RegionAllocator **)(pRVar4 + 8) == (RegionAllocator *)0x0) goto LAB_014751b0;
      }
      pRVar1 = *(RegionAllocator **)pRVar4;
      pRVar6 = pRVar4;
    } while (*(RegionAllocator **)pRVar4 != (RegionAllocator *)0x0);
LAB_014751b0:
    if ((pRVar6 != pRVar3) && (pRVar7 = *(Region **)(pRVar6 + 0x20), pRVar7 != (Region *)0x0)) {
      if (*(ulong *)(pRVar7 + 8) != param_2) {
        Split(this,pRVar7,param_2);
      }
      FreeListRemoveRegion(this,pRVar7);
      pRVar7[0x10] = (Region)0x1;
      return *(ulong *)pRVar7;
    }
  }
  return 0xffffffffffffffff;
}

