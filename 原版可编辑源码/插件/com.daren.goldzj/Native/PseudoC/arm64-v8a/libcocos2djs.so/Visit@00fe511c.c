
/* v8::internal::EvacuateNewSpaceVisitor::Visit(v8::internal::HeapObject, int) */

undefined8 __thiscall
v8::internal::EvacuateNewSpaceVisitor::Visit
          (EvacuateNewSpaceVisitor *this,undefined1 *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  AllocationSite *pAVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  NewSpace *pNVar9;
  long lVar10;
  ulong local_60 [2];
  undefined1 *local_38;
  
  if (((this[0x70] == (EvacuateNewSpaceVisitor)0x0) &&
      (*(char *)(((ulong)param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + -1)) + 6) == '0')
      ) && ((*(byte *)(((ulong)param_2 & 0xffffffff00000000 |
                       (ulong)*(uint *)(param_2 + 0xb) & 0xfffc0000) + 8) >> 6 & 1) == 0)) {
    *(uint *)(param_2 + -1) = *(uint *)(param_2 + 0xb) - 1;
    return 1;
  }
  lVar10 = *(long *)(this + 8);
  if (this[0x71] != (EvacuateNewSpaceVisitor)0x0) {
    puVar8 = param_2 + -1;
    if ((FLAG_allocation_site_pretenuring != '\0') &&
       ((*(ushort *)(((ulong)param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + -1)) + 7) | 2
        ) == 0x423)) {
      pAVar6 = *(AllocationSite **)(this + 0x68);
      local_38 = param_2;
      iVar1 = HeapObject::SizeFromMap((HeapObject *)&local_38);
      uVar2 = (ulong)puVar8 & 0xfffffffffffc0000;
      if ((((uVar2 == ((ulong)((long)(puVar8 + iVar1) + 4) & 0xfffffffffffc0000)) &&
           (*(int *)(puVar8 + iVar1) == *(int *)(lVar10 + -0x7b78))) &&
          (((*(byte *)(uVar2 + 10) >> 3 & 1) == 0 ||
           (((puVar5 = *(undefined1 **)(*(long *)(uVar2 + 0x58) + 0x80),
             *(undefined1 **)(uVar2 + 0x20) <= puVar5 && (puVar5 <= puVar8)) &&
            (puVar5 < *(undefined1 **)(uVar2 + 0x28))))))) &&
         (puVar8 = param_2 + iVar1, (int)puVar8 != 0)) {
        local_60[0] = (ulong)puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(puVar8 + 3);
        local_38 = (undefined1 *)local_60;
        lVar10 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                 ::
                 __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                           (pAVar6,(piecewise_construct_t *)local_60,(tuple *)&DAT_019c5885,
                            (tuple *)&local_38);
        *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
      }
    }
    if ((FLAG_stress_compaction != '\0') &&
       (((ulong)param_2 & 0x3ffff) == ((ulong)FLAG_random_seed & 0x3fffc))) {
      uVar2 = (ulong)param_2 & 0xfffffffffffc0000;
      uVar4 = *(ulong *)(uVar2 + 8);
      if (((uint)uVar4 >> 0x10 & 1) == 0) {
        *(ulong *)(uVar2 + 8) = uVar4 | 0x10000;
        goto LAB_00fe55a8;
      }
      *(ulong *)(uVar2 + 8) = uVar4 & 0xfffffffffffeffff;
    }
    uVar2 = PagedSpace::AllocateRaw((PagedSpace *)(*(long *)(this + 0x10) + 0x18),param_3,0,2);
    if ((uVar2 & 1) == 0) {
LAB_00fe55a8:
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory
                (*(Heap **)(this + 8),"MarkCompactCollector: young object promotion failed");
    }
    goto LAB_00fe55bc;
  }
  puVar8 = param_2 + -1;
  uVar4 = (ulong)puVar8 & 0xfffffffffffc0000;
  if (((*(byte *)(uVar4 + 10) >> 3 & 1) != 0) &&
     (((puVar5 = *(undefined1 **)(*(long *)(lVar10 + 0xe8) + 0x1f0),
       puVar5 < *(undefined1 **)(uVar4 + 0x20) || (puVar8 < puVar5)) ||
      (*(undefined1 **)(uVar4 + 0x28) < puVar5)))) {
    if ((FLAG_stress_compaction != '\0') &&
       (((ulong)param_2 & 0x3ffff) == ((ulong)FLAG_random_seed & 0x3fffc))) {
      uVar2 = (ulong)param_2 & 0xfffffffffffc0000;
      uVar3 = *(ulong *)(uVar2 + 8);
      if (((uint)uVar3 >> 0x10 & 1) == 0) {
        *(ulong *)(uVar2 + 8) = uVar3 | 0x10000;
        goto LAB_00fe5304;
      }
      *(ulong *)(uVar2 + 8) = uVar3 & 0xfffffffffffeffff;
    }
    uVar2 = PagedSpace::AllocateRaw((PagedSpace *)(*(long *)(this + 0x10) + 0x18),param_3,0,2);
    if ((uVar2 & 1) != 0) {
LAB_00fe55bc:
      (**(code **)(this + 0x38))(this,uVar2,param_2,param_3,2);
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + (long)(int)param_3;
      return 1;
    }
  }
LAB_00fe5304:
  lVar10 = *(long *)(this + 8);
  if ((FLAG_allocation_site_pretenuring != '\0') &&
     ((*(ushort *)(((ulong)param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + -1)) + 7) | 2)
      == 0x423)) {
    pAVar6 = *(AllocationSite **)(this + 0x68);
    local_38 = param_2;
    iVar1 = HeapObject::SizeFromMap((HeapObject *)&local_38);
    if ((((uVar4 == ((ulong)((long)(puVar8 + iVar1) + 4) & 0xfffffffffffc0000)) &&
         (*(int *)(puVar8 + iVar1) == *(int *)(lVar10 + -0x7b78))) &&
        (((*(byte *)(uVar4 + 10) >> 3 & 1) == 0 ||
         (((puVar5 = *(undefined1 **)(*(long *)(uVar4 + 0x58) + 0x80),
           *(undefined1 **)(uVar4 + 0x20) <= puVar5 && (puVar5 <= puVar8)) &&
          (puVar5 < *(undefined1 **)(uVar4 + 0x28))))))) &&
       (puVar8 = param_2 + iVar1, (int)puVar8 != 0)) {
      local_60[0] = (ulong)puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(puVar8 + 3);
      local_38 = (undefined1 *)local_60;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
               ::
               __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                         (pAVar6,(piecewise_construct_t *)local_60,(tuple *)&DAT_019c5885,
                          (tuple *)&local_38);
      *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
    }
  }
  if ((int)param_3 < 0x2001) {
    uVar2 = LocalAllocator::AllocateInLAB(*(LocalAllocator **)(this + 0x10),param_3,0);
    goto joined_r0x00fe549c;
  }
  pNVar9 = *(NewSpace **)(*(LocalAllocator **)(this + 0x10) + 8);
  base::Mutex::Lock((Mutex *)(pNVar9 + 0x98));
  uVar2 = *(ulong *)(pNVar9 + 0x68);
  if (uVar2 < *(ulong *)(pNVar9 + 0x78)) {
    *(ulong *)(pNVar9 + 0x78) = uVar2;
  }
  uVar4 = uVar2 + param_3;
  if (*(ulong *)(pNVar9 + 0x70) < uVar4) {
    uVar2 = NewSpace::EnsureAllocation(pNVar9,param_3,0);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(pNVar9 + 0x68);
      uVar4 = uVar2 + param_3;
      goto LAB_00fe5450;
    }
    uVar2 = 2;
  }
  else {
LAB_00fe5450:
    *(ulong *)(pNVar9 + 0x68) = uVar4;
    uVar2 = uVar2 + 1;
    if (FLAG_trace_allocations_origins != '\0') {
      SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar9,2);
    }
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!object.IsSmi()");
    }
  }
  base::Mutex::Unlock((Mutex *)(pNVar9 + 0x98));
joined_r0x00fe549c:
  if ((uVar2 & 1) == 0) {
    uVar7 = 2;
    uVar2 = PagedSpace::AllocateRaw((PagedSpace *)(*(long *)(this + 0x10) + 0x18),param_3,0,2);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory
                (*(Heap **)(this + 8),"MarkCompactCollector: semi-space copy, fallback in old gen");
    }
  }
  else {
    uVar7 = 1;
  }
  (**(code **)(this + 0x38))(this,uVar2,param_2,param_3,uVar7);
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + (long)(int)param_3;
  return 1;
}

