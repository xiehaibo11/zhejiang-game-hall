
/* v8::base::RegionAllocator::IsFree(unsigned long, unsigned long) */

bool __thiscall v8::base::RegionAllocator::IsFree(RegionAllocator *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  RegionAllocator *pRVar2;
  RegionAllocator *pRVar3;
  RegionAllocator *pRVar4;
  long *plVar5;
  RegionAllocator *pRVar6;
  
  if ((*(ulong *)(this + 8) <= param_1 - *(long *)this) ||
     (*(ulong *)(this + 8) < (param_1 - *(long *)this) + param_2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","contains(address, size)");
  }
  pRVar3 = this + 0x40;
  pRVar4 = *(RegionAllocator **)pRVar3;
  pRVar6 = pRVar3;
  if (pRVar4 != (RegionAllocator *)0x0) {
    do {
      uVar1 = (*(long **)(pRVar4 + 0x20))[1] + **(long **)(pRVar4 + 0x20);
      pRVar2 = pRVar4;
      if (uVar1 <= param_1) {
        pRVar2 = pRVar6;
      }
      pRVar4 = *(RegionAllocator **)(pRVar4 + (ulong)(uVar1 <= param_1) * 8);
      pRVar6 = pRVar2;
    } while (pRVar4 != (RegionAllocator *)0x0);
    if (pRVar2 != pRVar3) {
      plVar5 = *(long **)(pRVar2 + 0x20);
      if ((char)plVar5[2] == '\0') {
        return param_1 - *plVar5 < (ulong)plVar5[1] &&
               (param_1 - *plVar5) + param_2 <= (ulong)plVar5[1];
      }
      return false;
    }
  }
  return true;
}

