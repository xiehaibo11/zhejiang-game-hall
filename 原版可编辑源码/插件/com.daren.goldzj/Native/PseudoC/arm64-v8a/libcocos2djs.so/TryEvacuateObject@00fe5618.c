
/* v8::internal::EvacuateVisitorBase::TryEvacuateObject(v8::internal::AllocationSpace,
   v8::internal::HeapObject, int, v8::internal::HeapObject*) */

undefined8 __thiscall
v8::internal::EvacuateVisitorBase::TryEvacuateObject
          (EvacuateVisitorBase *this,int param_2,ulong param_3,uint param_4,ulong *param_5)

{
  LocalAllocator *pLVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  NewSpace *pNVar6;
  
  uVar5 = (ulong)param_4;
  if ((FLAG_stress_compaction != '\0') &&
     ((param_3 & 0x3ffff) == ((ulong)FLAG_random_seed & 0x3fffc))) {
    uVar3 = param_3 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar3 + 8);
    if (((uint)uVar4 >> 0x10 & 1) == 0) {
      *(ulong *)(uVar3 + 8) = uVar4 | 0x10000;
      return 0;
    }
    *(ulong *)(uVar3 + 8) = uVar4 & 0xfffffffffffeffff;
  }
  pLVar1 = *(LocalAllocator **)(this + 0x10);
  if (param_2 == 3) {
    pLVar1 = pLVar1 + 0x100;
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if ((int)param_4 < 0x2001) {
        uVar3 = LocalAllocator::AllocateInLAB(pLVar1,uVar5,0);
        goto joined_r0x00fe576c;
      }
      pNVar6 = *(NewSpace **)(pLVar1 + 8);
      base::Mutex::Lock((Mutex *)(pNVar6 + 0x98));
      uVar3 = *(ulong *)(pNVar6 + 0x68);
      if (uVar3 < *(ulong *)(pNVar6 + 0x78)) {
        *(ulong *)(pNVar6 + 0x78) = uVar3;
      }
      uVar4 = uVar3 + uVar5;
      if (*(ulong *)(pNVar6 + 0x70) < uVar4) {
        uVar3 = NewSpace::EnsureAllocation(pNVar6,uVar5,0);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(pNVar6 + 0x68);
          uVar4 = uVar3 + uVar5;
          goto LAB_00fe5710;
        }
        uVar3 = 2;
      }
      else {
LAB_00fe5710:
        *(ulong *)(pNVar6 + 0x68) = uVar4;
        uVar3 = uVar3 + 1;
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar6,2);
        }
        if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!object.IsSmi()");
        }
      }
      base::Mutex::Unlock((Mutex *)(pNVar6 + 0x98));
      goto joined_r0x00fe576c;
    }
    pLVar1 = pLVar1 + 0x18;
  }
  uVar3 = PagedSpace::AllocateRaw((PagedSpace *)pLVar1,uVar5,0,2);
joined_r0x00fe576c:
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    *param_5 = uVar3;
    (**(code **)(this + 0x38))(this,uVar3,param_3,uVar5,param_2);
    if (param_2 == 3) {
      CodeObjectRegistry::RegisterNewlyAllocatedCodeObject
                (*(CodeObjectRegistry **)((*param_5 & 0xfffffffffffc0000) + 0x110),*param_5 - 1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

