
/* v8::internal::Heap::AllocateRaw(int, v8::internal::AllocationType,
   v8::internal::AllocationOrigin, v8::internal::AllocationAlignment) */

ulong __thiscall
v8::internal::Heap::AllocateRaw
          (Heap *this,int param_1,char param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  PagedSpace *pPVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  SpaceWithLinearArea *pSVar7;
  undefined8 *puVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  
  switch(param_3) {
  case '\0':
    if (param_1 < 0x20001) {
      pSVar7 = *(SpaceWithLinearArea **)(this + 0xe8);
      uVar4 = *(ulong *)(pSVar7 + 0x68);
      if (uVar4 < *(ulong *)(pSVar7 + 0x78)) {
        *(ulong *)(pSVar7 + 0x78) = uVar4;
      }
      uVar6 = uVar4 + (long)param_1;
      if (*(ulong *)(pSVar7 + 0x70) < uVar6) {
        uVar4 = NewSpace::EnsureAllocation((NewSpace *)pSVar7,param_1,0);
        if ((uVar4 & 1) == 0) {
          return 2;
        }
        uVar4 = *(ulong *)(pSVar7 + 0x68);
        uVar6 = uVar4 + (long)param_1;
      }
      *(ulong *)(pSVar7 + 0x68) = uVar6;
      uVar4 = uVar4 + 1;
      if (FLAG_trace_allocations_origins != '\0') goto LAB_00f6c7d8;
      goto LAB_00f6c7dc;
    }
    if (FLAG_young_generation_large_objects == '\0') goto LAB_00f6c740;
    uVar4 = NewLargeObjectSpace::AllocateRaw(*(NewLargeObjectSpace **)(this + 0x118),param_1);
    goto joined_r0x00f6c800;
  case '\x01':
    if (0x20000 < param_1) {
LAB_00f6c740:
      uVar4 = OldLargeObjectSpace::AllocateRaw(*(OldLargeObjectSpace **)(this + 0x108),param_1);
      goto joined_r0x00f6c800;
    }
    pPVar3 = *(PagedSpace **)(this + 0xf0);
    goto LAB_00f6c7ec;
  case '\x02':
    if ((param_1 < 0x20001) &&
       (pSVar7 = *(SpaceWithLinearArea **)(this + 0xf8), param_1 <= *(int *)(pSVar7 + 0xa0))) {
      lVar5 = *(long *)(pSVar7 + 0x68);
      uVar4 = *(ulong *)(pSVar7 + 0x70);
      goto LAB_00f6c6e4;
    }
    uVar4 = CodeLargeObjectSpace::AllocateRaw(*(CodeLargeObjectSpace **)(this + 0x110),param_1);
    break;
  case '\x03':
    pSVar7 = *(SpaceWithLinearArea **)(this + 0x100);
    lVar5 = *(long *)(pSVar7 + 0x68);
    uVar4 = *(ulong *)(pSVar7 + 0x70);
LAB_00f6c6e4:
    uVar6 = lVar5 + param_1;
    if (uVar4 < uVar6) {
      uVar4 = (**(code **)(*(long *)pSVar7 + 0xb8))(pSVar7,param_1,1);
      if ((uVar4 & 1) == 0) {
        return (long)*(int *)(pSVar7 + 0x48) << 1;
      }
      lVar5 = *(long *)(pSVar7 + 0x68);
      uVar6 = lVar5 + param_1;
    }
    *(ulong *)(pSVar7 + 0x68) = uVar6;
    uVar4 = lVar5 + 1;
    if (FLAG_trace_allocations_origins != '\0') {
      param_4 = 1;
LAB_00f6c7d8:
      SpaceWithLinearArea::UpdateAllocationOrigins(pSVar7,param_4);
    }
LAB_00f6c7dc:
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!object.IsSmi()");
    }
    break;
  case '\x04':
    pPVar3 = *(PagedSpace **)(this + 0x120);
LAB_00f6c7ec:
    uVar4 = PagedSpace::AllocateRaw(pPVar3,param_1,param_5,param_4);
joined_r0x00f6c800:
    if ((uVar4 & 1) == 0) {
      return uVar4;
    }
    goto LAB_00f6c804;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if ((uVar4 & 1) != 0) {
LAB_00f6c804:
    if (param_3 == '\x02') {
      UnprotectAndRegisterMemoryChunk(this,uVar4);
      ZapCodeObject((ulong)this,(int)(uVar4 - 1));
      if (param_1 < 0x20001) {
        CodeObjectRegistry::RegisterNewlyAllocatedCodeObject
                  (*(CodeObjectRegistry **)((uVar4 & 0xfffffffffffc0000) + 0x110),uVar4 - 1);
      }
    }
    puVar10 = *(undefined8 **)(this + 0xc10);
    if (*(undefined8 **)(this + 0xc08) != puVar10) {
      puVar8 = *(undefined8 **)(this + 0xc08);
      do {
        puVar9 = puVar8 + 1;
        (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,uVar4 - 1,param_1);
        puVar8 = puVar9;
      } while (puVar10 != puVar9);
    }
    if (FLAG_fuzzer_gc_analysis == '\0') {
      if (0 < (int)FLAG_trace_allocation_stack_interval) {
        uVar1 = *(int *)(this + 0x180) + 1;
        uVar2 = 0;
        if (FLAG_trace_allocation_stack_interval != 0) {
          uVar2 = uVar1 / FLAG_trace_allocation_stack_interval;
        }
        uVar2 = uVar2 * FLAG_trace_allocation_stack_interval;
        *(uint *)(this + 0x180) = uVar1;
        if (uVar1 == uVar2) {
          Isolate::PrintStack((Isolate *)(this + -0x8850),waitpid,0);
        }
      }
    }
    else {
      *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
    }
  }
  return uVar4;
}

