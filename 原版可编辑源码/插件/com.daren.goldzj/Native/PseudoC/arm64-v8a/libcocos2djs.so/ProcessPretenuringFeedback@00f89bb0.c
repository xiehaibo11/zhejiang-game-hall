
/* v8::internal::Heap::ProcessPretenuringFeedback() */

void __thiscall v8::internal::Heap::ProcessPretenuringFeedback(Heap *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Heap *pHVar11;
  long lVar12;
  code *pcVar13;
  undefined **ppuVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  void *pvVar18;
  long *plVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  undefined8 local_d0;
  undefined **local_c0;
  uint local_b8;
  char local_b4 [4];
  undefined **local_b0;
  uint *puStack_a8;
  char *local_a0;
  undefined ***local_90;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_b4[0] = '\0';
  if (FLAG_allocation_site_pretenuring == '\0') goto LAB_00f89efc;
  local_b8 = 0;
  local_c0 = (undefined **)0x0;
  plVar19 = *(long **)(this + 0x8a8);
  pHVar11 = this;
  if (plVar19 == (long *)0x0) {
    uVar22 = 0;
    uVar21 = 0;
    local_d0._4_4_ = 0;
    uVar20 = 0;
  }
  else {
    local_d0 = 0;
    iVar3 = *(int *)(this + 0x7dc);
    local_b8 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar16 = 0x8000000;
    if (iVar3 != 0) {
      uVar16 = 0x2c000000;
    }
    do {
      while( true ) {
        local_b8 = local_b8 + 1;
        ppuVar14 = (undefined **)plVar19[2];
        uVar1 = *(uint *)((long)ppuVar14 + 0xf) & 0x3ffffff;
        local_c0 = ppuVar14;
        if (uVar1 != 0) break;
LAB_00f89db0:
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_00f89dd8;
      }
      pvVar18 = *(void **)(this + 0x30);
      uVar4 = *(uint *)((long)ppuVar14 + 0xf);
      uVar5 = *(uint *)((long)ppuVar14 + 0x13);
      if ((FLAG_trace_pretenuring_statistics != '\0') || (dVar23 = 0.0, 99 < (int)uVar5)) {
        dVar23 = (double)(uVar4 & 0x3ffffff) / (double)(int)uVar5;
      }
      bVar7 = false;
      if ((99 < (int)uVar5) && ((uVar4 & 0x14000000) == 0)) {
        uVar2 = 0x4000000;
        if (0.85 <= dVar23) {
          uVar2 = uVar16;
        }
        uVar17 = 0xe3ffffff;
        if (0.85 <= dVar23 && iVar3 != 0) {
          uVar17 = 0xc3ffffff;
        }
        bVar7 = 0.85 <= dVar23 && iVar3 != 0;
        *(uint *)((long)ppuVar14 + 0xf) = uVar4 & uVar17 | uVar2;
      }
      local_b0 = ppuVar14;
      if (FLAG_trace_pretenuring_statistics != '\0') {
        uVar9 = AllocationSite::PretenureDecisionName((AllocationSite *)&local_b0,uVar4 >> 0x1a & 7)
        ;
        uVar10 = AllocationSite::PretenureDecisionName
                           ((AllocationSite *)&local_b0,*(uint *)((long)local_b0 + 0xf) >> 0x1a & 7)
        ;
        PrintIsolate(pvVar18,
                     "pretenuring: AllocationSite(%p): (created, found, ratio) (%d, %d, %f) %s => %s\n"
                     ,dVar23,ppuVar14,(ulong)uVar5,(ulong)(uVar4 & 0x3ffffff),uVar9,uVar10);
      }
      uVar22 = uVar22 + 1;
      uVar21 = uVar1 + uVar21;
      *(uint *)((long)local_b0 + 0xf) = *(uint *)((long)local_b0 + 0xf) & 0xfc000000;
      *(undefined4 *)((long)local_b0 + 0x13) = 0;
      if (bVar7) {
        local_b4[0] = '\x01';
      }
      pHVar11 = (Heap *)AllocationSite::GetAllocationType((AllocationSite *)&local_c0);
      if (((uint)pHVar11 & 0xff) == 1) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
        goto LAB_00f89db0;
      }
      local_d0 = CONCAT44(local_d0._4_4_ + 1,(int)local_d0);
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0);
LAB_00f89dd8:
    uVar20 = local_d0 & 0xffffffff;
  }
  if ((*(long *)(*(long *)(this + 0xe8) + 0x138) == *(long *)(*(long *)(this + 0xe8) + 0x140)) &&
     (*(int *)(this + 0x7dc) == 0)) {
    puStack_a8 = &local_b8;
    local_a0 = local_b4;
    local_b0 = &PTR_FUN_01ca7d60;
    local_90 = &local_b0;
    ForeachAllocationSite(pHVar11,*(undefined8 *)(this + 0x5f0),&local_b0);
    if (&local_b0 == local_90) {
      pcVar13 = (code *)(*local_90)[4];
LAB_00f89f84:
      (*pcVar13)();
    }
    else if (local_90 != (undefined ***)0x0) {
      pcVar13 = (code *)(*local_90)[5];
      goto LAB_00f89f84;
    }
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
  }
  if (local_b4[0] != '\0') {
    StackGuard::RequestInterrupt((StackGuard *)(*(long *)(this + 0x30) + 0x48),0x10);
  }
  if ((FLAG_trace_pretenuring_statistics != '\0') &&
     (((0 < (int)local_d0._4_4_ || (0 < (int)uVar21)) || (0 < (int)uVar20)))) {
    PrintIsolate(this + -0x8850,
                 "pretenuring: deopt_maybe_tenured=%d visited_sites=%d active_sites=%d mementos=%d tenured=%d not_tenured=%d\n"
                 ,(ulong)uVar16,(ulong)local_b8,(ulong)uVar22,(ulong)uVar21,uVar20,
                 (ulong)local_d0._4_4_);
  }
  if (*(long *)(this + 0x8b0) != 0) {
    puVar8 = *(void **)(this + 0x8a8);
    while (puVar8 != (void *)0x0) {
      pvVar18 = (void *)*puVar8;
      operator_delete(puVar8);
      puVar8 = pvVar18;
    }
    lVar12 = *(long *)(this + 0x8a0);
    *(undefined8 *)(this + 0x8a8) = 0;
    if (lVar12 != 0) {
      lVar15 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x898) + lVar15 * 8) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
    }
    *(undefined8 *)(this + 0x8b0) = 0;
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
            *)(this + 0x898),(long)(256.0 / *(float *)(this + 0x8b8)));
LAB_00f89efc:
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

