
/* v8::internal::MarkCompactCollector::CollectEvacuationCandidates(v8::internal::PagedSpace*) */

void __thiscall
v8::internal::MarkCompactCollector::CollectEvacuationCandidates
          (MarkCompactCollector *this,PagedSpace *param_1)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  RandomNumberGenerator *this_00;
  undefined8 uVar6;
  Page *pPVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x28;
  long lVar19;
  double dVar20;
  uint local_a4;
  ulong local_a0;
  long *local_98;
  long *plStack_90;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  
  iVar5 = PagedSpace::CountTotalPages(param_1);
  uVar18 = (ulong)*(int *)(param_1 + 0xa0);
  if (((FLAG_stress_compaction_random == '\0' && FLAG_manual_evacuation_candidates_selection == '\0'
       ) && FLAG_stress_compaction == '\0') && FLAG_always_compact == '\0') {
    if (((byte)(*(Heap **)(this + 8))[0xad4] & 1) == 0) {
      uVar16 = Heap::ShouldOptimizeForMemoryUsage(*(Heap **)(this + 8));
      if ((uVar16 & 1) == 0) {
        dVar20 = (double)GCTracer::CompactionSpeedInBytesPerMillisecond
                                   (*(GCTracer **)(*(long *)(this + 8) + 0x7f8));
        if (dVar20 == 0.0) {
          local_a4 = 0x46;
        }
        else {
          local_a4 = (uint)(-50.0 / ((double)uVar18 / dVar20 + 1.0) + 100.0);
          if ((int)local_a4 < 0x15) {
            local_a4 = 0x14;
          }
        }
        local_a0 = 0x400000;
      }
      else {
        local_a4 = 0x14;
        local_a0 = 0x600000;
      }
    }
    else {
      local_a4 = 0x14;
      local_a0 = 0xc00000;
    }
    bVar1 = false;
    unaff_x28 = (uVar18 / 100) * (ulong)local_a4;
  }
  else {
    bVar1 = true;
  }
  puStack_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  if (iVar5 != 0) {
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puStack_78 = operator_new((long)iVar5 * 0x10);
    local_70 = puStack_78 + (long)iVar5 * 2;
  }
  plVar13 = *(long **)(param_1 + 0x20);
  puVar10 = puStack_78;
  puVar11 = puStack_78;
  plVar2 = (long *)0x0;
  if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x70)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x68) - 4U & 0xfffffffffffc0000);
  }
  for (; local_80 = puVar10, puStack_78 = puVar11, plVar13 != (long *)0x0;
      plVar13 = (long *)plVar13[0x1c]) {
    if ((plVar2 != plVar13) && ((plVar13[1] & 0x10c0U) == 0)) {
      if ((*(byte *)(plVar13 + 1) >> 6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!p->IsEvacuationCandidate()");
      }
      if (plVar13[7] != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(p->slot_set<OLD_TO_OLD>()) == nullptr");
      }
      if (plVar13[0x10] != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(p->typed_slot_set<OLD_TO_OLD>()) == nullptr");
      }
      if (plVar13[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","p->SweepingDone()");
      }
      if (bVar1) {
        local_98 = (long *)plVar13[0x18];
        if (puVar11 < local_70) {
          puVar11[1] = plVar13;
          *puVar11 = local_98;
LAB_00fab0f8:
          plStack_90 = plVar13;
          puStack_78 = puVar11 + 2;
        }
        else {
LAB_00fab058:
          plStack_90 = plVar13;
          std::__ndk1::
          vector<std::__ndk1::pair<unsigned_long,v8::internal::Page*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,v8::internal::Page*>>>
          ::__push_back_slow_path<std::__ndk1::pair<unsigned_long,v8::internal::Page*>>
                    ((vector<std::__ndk1::pair<unsigned_long,v8::internal::Page*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,v8::internal::Page*>>>
                      *)&local_80,(pair *)&local_98);
        }
      }
      else {
        plVar8 = (long *)plVar13[0x18];
        if (unaff_x28 <= uVar18 - (long)plVar8) {
          local_98 = plVar8;
          if (local_70 <= puVar11) goto LAB_00fab058;
          puVar11[1] = plVar13;
          *puVar11 = plVar8;
          goto LAB_00fab0f8;
        }
      }
    }
    puVar10 = local_80;
    puVar11 = puStack_78;
  }
  uVar3 = *(uint *)(*(long *)(this + 8) + 0xad4);
  if (FLAG_manual_evacuation_candidates_selection == '\0') {
    if (FLAG_stress_compaction_random != '\0') {
      this_00 = (RandomNumberGenerator *)
                Isolate::fuzzer_rng((Isolate *)(*(long *)(this + 8) + -0x8850));
      base::RandomNumberGenerator::NextDouble(this_00);
      uVar18 = Isolate::fuzzer_rng((Isolate *)(*(long *)(this + 8) + -0x8850));
      base::RandomNumberGenerator::NextSample(uVar18,(long)puStack_78 - (long)local_80 >> 4);
      plVar2 = plStack_90;
      if (local_98 == plStack_90) {
        uVar16 = 0;
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        uVar16 = 0;
        plVar13 = local_98;
        do {
          plVar8 = plVar13 + 1;
          uVar12 = uVar12 + 1;
          uVar16 = local_80[*plVar13 * 2] + uVar16;
          AddEvacuationCandidate(this,(Page *)(local_80 + *plVar13 * 2)[1]);
          plVar13 = plVar8;
        } while (plVar2 != plVar8);
      }
      if (local_98 != (long *)0x0) {
        plStack_90 = local_98;
        operator_delete(local_98);
      }
      goto LAB_00fab2ac;
    }
    if (FLAG_stress_compaction == '\0') {
      FUN_00fe6878(puVar10,puVar11);
      puVar10 = local_80;
      if (puStack_78 == local_80) {
        uVar16 = 0;
        uVar17 = 0;
      }
      else {
        lVar9 = 0;
        uVar17 = 0;
        uVar14 = 0;
        uVar16 = 0;
        puVar11 = puStack_78;
        do {
          lVar19 = *(long *)((long)puVar10 + lVar9);
          bVar1 = local_a0 < lVar19 + uVar16;
          lVar15 = 0;
          if (FLAG_always_compact != '\0' || !bVar1) {
            lVar15 = lVar19;
          }
          uVar16 = lVar15 + uVar16;
          uVar17 = uVar17 + ((FLAG_always_compact == '\0' && bVar1) ^ 1);
          if (FLAG_trace_fragmentation_verbose != '\0') {
            lVar15 = *(long *)(this + 8);
            uVar6 = Heap::GetSpaceName(*(undefined4 *)(param_1 + 0x48));
            PrintIsolate((void *)(lVar15 + -0x8850),
                         "compaction-selection-page: space=%s free_bytes_page=%zu fragmentation_limit_kb=%zu fragmentation_limit_percent=%d sum_compaction_kb=%zu compaction_limit_kb=%zu\n"
                         ,uVar6,uVar18 - lVar19 >> 10,unaff_x28 >> 10,(ulong)local_a4,uVar16 >> 10,
                         local_a0 >> 10);
            puVar10 = local_80;
            puVar11 = puStack_78;
          }
          uVar14 = uVar14 + 1;
          lVar9 = lVar9 + 0x10;
        } while (uVar14 < (ulong)((long)puVar11 - (long)puVar10 >> 4));
      }
      uVar4 = 0;
      if (uVar18 != 0) {
        uVar4 = (uint)(((uVar18 + uVar16) - 1) / uVar18);
      }
      uVar12 = 0;
      if (FLAG_always_compact != '\0' || uVar17 != uVar4) {
        uVar12 = uVar17;
      }
      if ((uVar12 != 0) && (AddEvacuationCandidate(this,(Page *)puVar10[1]), uVar12 != 1)) {
        lVar15 = (ulong)uVar12 - 1;
        lVar9 = 0x18;
        do {
          AddEvacuationCandidate(this,*(Page **)((long)local_80 + lVar9));
          lVar15 = lVar15 + -1;
          lVar9 = lVar9 + 0x10;
        } while (lVar15 != 0);
      }
      goto LAB_00fab2ac;
    }
    if (puVar11 != puVar10) {
      lVar9 = 0;
      uVar12 = 0;
      uVar16 = 0;
      uVar18 = 0;
      do {
        uVar12 = uVar12 + 1;
        uVar16 = *(long *)((long)local_80 + lVar9) + uVar16;
        AddEvacuationCandidate(this,(Page *)((long *)((long)local_80 + lVar9))[1]);
        do {
          uVar18 = uVar18 + 1;
          lVar9 = lVar9 + 0x10;
          if ((ulong)((long)puStack_78 - (long)local_80 >> 4) <= uVar18) goto LAB_00fab2ac;
        } while ((uVar18 & 1) != 0);
      } while( true );
    }
  }
  else if (puVar11 != puVar10) {
    lVar9 = 0;
    uVar12 = 0;
    uVar16 = 0;
    uVar18 = 0;
    do {
      pPVar7 = *(Page **)((long)puVar10 + lVar9 + 8);
      if (((uint)*(ulong *)(pPVar7 + 8) >> 0xb & 1) != 0) {
        uVar12 = uVar12 + 1;
        uVar16 = *(long *)((long)puVar10 + lVar9) + uVar16;
        *(ulong *)(pPVar7 + 8) = *(ulong *)(pPVar7 + 8) & 0xfffffffffffff7ff;
        AddEvacuationCandidate(this,pPVar7);
        puVar10 = local_80;
        puVar11 = puStack_78;
      }
      uVar18 = uVar18 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar18 < (ulong)((long)puVar11 - (long)puVar10 >> 4));
    goto LAB_00fab2ac;
  }
  uVar16 = 0;
  uVar12 = 0;
LAB_00fab2ac:
  if (FLAG_trace_fragmentation != '\0') {
    lVar9 = *(long *)(this + 8);
    uVar6 = Heap::GetSpaceName(*(undefined4 *)(param_1 + 0x48));
    PrintIsolate((void *)(lVar9 + -0x8850),
                 "compaction-selection: space=%s reduce_memory=%d pages=%d total_live_bytes=%zu\n",
                 uVar6,(ulong)(uVar3 & 1),(ulong)uVar12,uVar16 >> 10);
  }
  if (local_80 != (undefined8 *)0x0) {
    puStack_78 = local_80;
    operator_delete(local_80);
  }
  return;
}

