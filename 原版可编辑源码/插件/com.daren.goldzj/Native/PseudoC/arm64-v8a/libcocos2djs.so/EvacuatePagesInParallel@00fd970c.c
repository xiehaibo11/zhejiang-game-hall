
/* v8::internal::MinorMarkCompactCollector::EvacuatePagesInParallel() */

void __thiscall
v8::internal::MinorMarkCompactCollector::EvacuatePagesInParallel(MinorMarkCompactCollector *this)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  LargePage *pLVar5;
  MigrationObserver *pMVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  Heap *this_00;
  long *plVar12;
  undefined8 *puVar13;
  Task *this_01;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  long *plVar19;
  Page *this_02;
  ulong uVar20;
  LargePage *pLVar21;
  long lVar22;
  long lVar23;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
  *this_03;
  double dVar24;
  double dVar25;
  Item *local_110;
  long lStack_108;
  Mutex aMStack_100 [40];
  undefined8 local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined **local_90;
  Heap *pHStack_88;
  MigrationObserver *local_80 [2];
  
  ItemParallelJob::ItemParallelJob
            ((ItemParallelJob *)&local_d0,*(CancelableTaskManager **)(*(long *)(this + 8) + 0x3eb0),
             (Semaphore *)(this + 0x28));
  puVar4 = *(undefined8 **)(this + 0x40);
  lVar22 = 0;
  for (puVar3 = *(undefined8 **)(this + 0x38); puVar3 != puVar4; puVar3 = puVar3 + 1) {
    this_02 = (Page *)*puVar3;
    uVar20 = *(ulong *)(this_02 + 0x100);
    if ((uVar20 != 0) || (uVar10 = Page::contains_array_buffers(this_02), (uVar10 & 1) != 0)) {
      if (((*(byte *)(*(long *)(this + 8) + 0xad4) & 1) == 0) && (-1 < (char)this_02[8])) {
        uVar10 = *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0);
        if (FLAG_page_promotion == '\0') {
          lVar11 = MemoryChunkLayout::AllocatableMemoryInDataPage();
          uVar14 = lVar11 + 4;
        }
        else {
          lVar23 = (long)FLAG_page_promotion_threshold;
          lVar11 = MemoryChunkLayout::AllocatableMemoryInDataPage();
          uVar14 = (ulong)(lVar11 * lVar23) / 100;
        }
        if (((long)uVar14 < (long)uVar20) &&
           (((uVar10 < *(ulong *)(this_02 + 0x20) || (*(ulong *)(this_02 + 0x28) <= uVar10)) &&
            (uVar10 = Heap::CanExpandOldGeneration(*(Heap **)(this + 8),uVar20), (uVar10 & 1) != 0))
           )) {
          uVar18 = *(undefined8 *)(this_02 + 8);
          lVar11 = *(long *)(*(long *)(this_02 + 0x18) + 0xe8);
          SemiSpace::RemovePage((SemiSpace *)(lVar11 + 0x170),this_02);
          if (((uint)uVar18 >> 0x13 & 1) == 0) {
            SemiSpace::PrependPage((SemiSpace *)(lVar11 + 0xd0),this_02);
            *(ulong *)(this_02 + 8) = *(ulong *)(this_02 + 8) | 0x400;
          }
          else {
            lVar11 = Page::ConvertNewToOld(this_02);
            *(ulong *)(lVar11 + 8) = *(ulong *)(lVar11 + 8) | 0x200;
          }
        }
      }
      lVar22 = uVar20 + lVar22;
      local_110 = operator_new(0x18);
      *(undefined ***)local_110 = &PTR__Item_01ca8580;
      *(undefined **)(local_110 + 8) = (undefined *)0x0;
      *(Page **)(local_110 + 0x10) = this_02;
      if (local_c8 == puStack_c0) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)&local_d0,&local_110);
      }
      else {
        *local_c8 = local_110;
        local_c8 = local_c8 + 1;
      }
    }
  }
  lVar11 = *(long *)(this + 8);
  pLVar21 = *(LargePage **)(*(long *)(lVar11 + 0x118) + 0x20);
  while (pLVar5 = pLVar21, pLVar5 != (LargePage *)0x0) {
    pLVar21 = *(LargePage **)(pLVar5 + 0xe0);
    uVar20 = *(long *)(pLVar5 + 0x20) + 1U & 0xfffffffffffc0000;
    uVar10 = (*(long *)(pLVar5 + 0x20) + 1U) - uVar20;
    puVar1 = (uint *)(*(long *)(uVar20 + 0x108) + (uVar10 >> 7 & 0x1ffffff) * 4);
    uVar8 = 1 << (ulong)((uint)(uVar10 >> 2) & 0x1f);
    if ((uVar8 & *puVar1) != 0) {
      uVar8 = uVar8 << 1;
      bVar7 = uVar8 == 0;
      if (bVar7) {
        uVar8 = 1;
      }
      if ((puVar1[bVar7] & uVar8) == 0) {
        OldLargeObjectSpace::PromoteNewLargeObject(*(OldLargeObjectSpace **)(lVar11 + 0x108),pLVar5)
        ;
        *(ulong *)(pLVar5 + 8) = *(ulong *)(pLVar5 + 8) | 0x200;
        local_110 = operator_new(0x18);
        *(undefined ***)local_110 = &PTR__Item_01ca8580;
        *(undefined **)(local_110 + 8) = (undefined *)0x0;
        *(LargePage **)(local_110 + 0x10) = pLVar5;
        if (local_c8 == puStack_c0) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                    ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                      *)&local_d0,&local_110);
        }
        else {
          *local_c8 = local_110;
          local_c8 = local_c8 + 1;
        }
        lVar11 = *(long *)(this + 8);
      }
    }
  }
  if ((int)((ulong)((long)local_c8 - local_d0) >> 3) != 0) {
    uVar18 = *(undefined8 *)(lVar11 + 0x800);
    local_110 = (Item *)&PTR__YoungGenerationMigrationObserver_01ca8bb8;
    lStack_108 = lVar11;
    base::Mutex::Mutex(aMStack_100);
    local_d8 = uVar18;
    if (FLAG_trace_evacuation == '\0') {
      uVar18 = 0;
    }
    else {
      uVar18 = GCTracer::CompactionSpeedInBytesPerMillisecond
                         (*(GCTracer **)(*(long *)(this + 8) + 0x7f8));
    }
    uVar8 = Isolate::LogObjectRelocation((Isolate *)(*(long *)(this + 8) + -0x8850));
    this_00 = *(Heap **)(this + 8);
    local_90 = &PTR__MigrationObserver_01ca8e20;
    pHStack_88 = this_00;
    if (FLAG_parallel_compaction == '\0') {
      uVar17 = 1;
    }
    else {
      uVar20 = (long)local_c8 - local_d0;
      if (((DAT_01d3f358 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_01d3f358), iVar9 != 0)) {
        plVar12 = (long *)V8::GetCurrentPlatform();
        iVar9 = (**(code **)(*plVar12 + 0x28))();
        DAT_01d3f350 = iVar9 + 1;
        __cxa_guard_release(&DAT_01d3f358);
      }
      this_00 = *(Heap **)(this + 8);
      uVar16 = (uint)(uVar20 >> 3);
      uVar17 = DAT_01d3f350;
      if ((int)uVar16 <= (int)DAT_01d3f350) {
        uVar17 = uVar16;
      }
    }
    uVar20 = Heap::CanExpandOldGeneration(this_00,(long)(int)(uVar17 << 0x12));
    if ((uVar20 & 1) == 0) {
      uVar17 = 1;
    }
    uVar20 = -(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar17 << 3;
    if ((ulong)(long)(int)uVar17 >> 0x3d != 0) {
      uVar20 = 0xffffffffffffffff;
    }
    plVar12 = operator_new__(uVar20);
    if ((int)uVar17 < 1) {
      ItemParallelJob::Run((ItemParallelJob *)&local_d0);
    }
    else {
      uVar10 = (ulong)uVar17;
      uVar14 = extraout_x1;
      plVar19 = plVar12;
      uVar20 = uVar10;
      do {
        puVar13 = Malloced::operator_new((Malloced *)0x380,uVar14);
        *puVar13 = &PTR_FUN_01ca9030;
        uVar15 = *(undefined8 *)(this + 8);
        *puVar13 = &PTR__Evacuator_01ca8be0;
        puVar13[1] = uVar15;
        this_03 = (__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                   *)(puVar13 + 2);
        puVar13[3] = 0;
        *(undefined8 *)this_03 = 0;
        puVar3 = puVar13 + 0x2b;
        puVar4 = puVar13 + 0x2e;
        puVar13[5] = 0;
        puVar13[4] = 0;
        *(undefined4 *)(puVar13 + 6) = 0x3f800000;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
        ::__rehash(this_03,0x100);
        lVar11 = puVar13[1];
        puVar13[9] = puVar4;
        puVar13[10] = puVar3;
        puVar13[0xc] = 0;
        puVar13[0xd] = 0;
        puVar13[8] = lVar11;
        puVar13[0xb] = 0;
        puVar13[0xe] = EvacuateVisitorBase::
                       RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)0>;
        puVar13[7] = &PTR__EvacuateNewSpaceVisitor_01ca8c40;
        LocalAllocationBuffer::LocalAllocationBuffer((LocalAllocationBuffer *)(puVar13 + 0xf),0,0,0)
        ;
        puVar13[0x12] = 0;
        puVar13[0x13] = 0;
        puVar13[0x14] = this_03;
        lVar23 = puVar13[1];
        iVar9 = *(int *)(*(long *)(lVar11 + 0x828) + 0x58);
        puVar13[0x18] = puVar3;
        puVar13[0x19] = 0;
        puVar13[0x16] = &PTR__HeapObjectVisitor_01ca8e48;
        puVar13[0x17] = lVar23;
        puVar13[0x1e] = 0;
        puVar13[0x1f] = this_03;
        puVar13[0x1c] = lVar23;
        puVar13[0x1d] = puVar3;
        puVar13[0x1a] = this_03;
        puVar13[0x1b] = &PTR__HeapObjectVisitor_01ca8e70;
        *(undefined1 *)((long)puVar13 + 0xa9) = 0;
        puVar13[0x22] = puVar4;
        puVar13[0x23] = puVar3;
        puVar13[0x24] = 0;
        puVar13[0x25] = 0;
        puVar13[0x20] = &PTR__EvacuateVisitorBase_01ca8e98;
        puVar13[0x21] = lVar23;
        puVar13[0x26] = 0;
        puVar13[0x27] =
             EvacuateVisitorBase::
             RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)0>;
        puVar13[0x29] = 0;
        puVar13[0x2a] = 0;
        puVar13[0x28] = puVar4;
        *puVar13 = &PTR_FUN_01ca9030;
        *(bool *)(puVar13 + 0x15) = 1 < iVar9;
        uVar15 = *(undefined8 *)(*(long *)(this + 8) + 0x800);
        puVar13[0x2d] = 0;
        puVar13[0x2e] = lVar23;
        puVar13[0x2b] = &PTR__ObjectVisitor_01ca9068;
        puVar13[0x2c] = uVar15;
        puVar13[0x2f] = *(undefined8 *)(lVar23 + 0xe8);
        uVar15 = FreeList::CreateFreeList();
        PagedSpace::PagedSpace((PagedSpace *)(puVar13 + 0x31),lVar23,2,0,uVar15,4);
        puVar13[0x31] = &PTR__PagedSpace_01ca9f28;
        uVar15 = FreeList::CreateFreeList();
        PagedSpace::PagedSpace((PagedSpace *)(puVar13 + 0x4e),lVar23,3,1,uVar15,4);
        puVar13[0x4e] = &PTR__PagedSpace_01ca9f28;
        LocalAllocationBuffer::LocalAllocationBuffer
                  ((LocalAllocationBuffer *)(puVar13 + 0x6b),0,0,0);
        *(undefined1 *)(puVar13 + 0x6e) = 0;
        puVar13[0x6f] = this;
        *plVar19 = (long)puVar13;
        if ((uVar8 & 1) != 0) {
          puVar13[0xe] = EvacuateVisitorBase::
                         RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>;
          if ((undefined8 *)puVar13[0xc] == (undefined8 *)puVar13[0xd]) {
            local_80[0] = (MigrationObserver *)&local_90;
            std::__ndk1::
            vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
            ::__push_back_slow_path<v8::internal::MigrationObserver*const&>
                      ((vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
                        *)(puVar13 + 0xb),local_80);
          }
          else {
            *(undefined8 *)puVar13[0xc] = (MigrationObserver *)&local_90;
            puVar13[0xc] = puVar13[0xc] + 8;
          }
          puVar13[0x27] =
               EvacuateVisitorBase::
               RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>;
          if ((undefined8 *)puVar13[0x25] == (undefined8 *)puVar13[0x26]) {
            local_80[0] = (MigrationObserver *)&local_90;
            std::__ndk1::
            vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
            ::__push_back_slow_path<v8::internal::MigrationObserver*const&>
                      ((vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
                        *)(puVar13 + 0x24),local_80);
          }
          else {
            *(undefined8 *)puVar13[0x25] = &local_90;
            puVar13[0x25] = puVar13[0x25] + 8;
          }
          puVar13 = (undefined8 *)*plVar19;
        }
        puVar13[0xe] = EvacuateVisitorBase::
                       RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>;
        if ((undefined8 *)puVar13[0xc] == (undefined8 *)puVar13[0xd]) {
          local_80[0] = (MigrationObserver *)&local_110;
          std::__ndk1::
          vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
          ::__push_back_slow_path<v8::internal::MigrationObserver*const&>
                    ((vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
                      *)(puVar13 + 0xb),local_80);
        }
        else {
          *(undefined8 *)puVar13[0xc] = (MigrationObserver *)&local_110;
          puVar13[0xc] = puVar13[0xc] + 8;
        }
        puVar13[0x27] =
             EvacuateVisitorBase::
             RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>;
        if ((undefined8 *)puVar13[0x25] == (undefined8 *)puVar13[0x26]) {
          local_80[0] = (MigrationObserver *)&local_110;
          std::__ndk1::
          vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
          ::__push_back_slow_path<v8::internal::MigrationObserver*const&>
                    ((vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
                      *)(puVar13 + 0x24),local_80);
        }
        else {
          *(undefined8 *)puVar13[0x25] = (MigrationObserver *)&local_110;
          puVar13[0x25] = puVar13[0x25] + 8;
          local_80[0] = (MigrationObserver *)&local_110;
        }
        this_01 = operator_new(0x60);
        lVar11 = *(long *)(this + 8);
        lVar23 = *plVar19;
        ItemParallelJob::Task::Task(this_01,(Isolate *)(lVar11 + -0x8850));
        *(long *)(this_01 + 0x50) = lVar23;
        *(undefined ***)this_01 = &PTR__CancelableTask_01ca8ec0;
        *(undefined ***)(this_01 + 0x20) = &PTR__PageEvacuationTask_01ca8ef8;
        *(undefined8 *)(this_01 + 0x58) = *(undefined8 *)(lVar11 + 0x7f8);
        if (local_b0 < puStack_a8) {
          local_80[0] = (MigrationObserver *)0x0;
          *local_b0 = this_01;
          local_b0 = local_b0 + 1;
          uVar14 = extraout_x1_00;
        }
        else {
          local_80[0] = (MigrationObserver *)this_01;
          std::__ndk1::
          vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
          ::
          __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>
                    ((vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
                      *)&local_b8,(unique_ptr *)local_80);
          uVar14 = extraout_x1_01;
        }
        pMVar6 = local_80[0];
        local_80[0] = (MigrationObserver *)0x0;
        if (pMVar6 != (MigrationObserver *)0x0) {
          (**(code **)(*(long *)pMVar6 + 8))();
          uVar14 = extraout_x1_02;
        }
        uVar20 = uVar20 - 1;
        plVar19 = plVar19 + 1;
      } while (uVar20 != 0);
      ItemParallelJob::Run((ItemParallelJob *)&local_d0);
      plVar19 = plVar12;
      do {
        Evacuator::Finalize((Evacuator *)*plVar19);
        if ((long *)*plVar19 != (long *)0x0) {
          (**(code **)(*(long *)*plVar19 + 8))();
        }
        uVar10 = uVar10 - 1;
        plVar19 = plVar19 + 1;
      } while (uVar10 != 0);
    }
    operator_delete__(plVar12);
    if (FLAG_trace_evacuation != '\0') {
      lVar11 = *(long *)(this + 8);
      dVar24 = (double)Heap::MonotonicallyIncreasingTimeInMs();
      dVar25 = *(double *)(lVar11 + 0x2e70);
      uVar20 = (long)local_c8 - local_d0;
      uVar10 = (long)local_b0 - local_b8;
      puVar2 = &DAT_019b5a08;
      if (FLAG_parallel_compaction != '\0') {
        puVar2 = &DAT_018c0c05;
      }
      plVar12 = (long *)V8::GetCurrentPlatform();
      iVar9 = (**(code **)(*plVar12 + 0x28))();
      PrintIsolate((void *)(lVar11 + -0x8850),
                   "%8.0f ms: evacuation-summary: parallel=%s pages=%d wanted_tasks=%d tasks=%d cores=%d live_bytes=%ld compaction_speed=%.f\n"
                   ,dVar24 - dVar25,uVar18,puVar2,uVar20 >> 3 & 0xffffffff,(ulong)uVar17,
                   uVar10 >> 3 & 0xffffffff,(ulong)(iVar9 + 1),lVar22);
    }
    local_110 = (Item *)&PTR__YoungGenerationMigrationObserver_01ca8bb8;
    base::Mutex::~Mutex(aMStack_100);
  }
  ItemParallelJob::~ItemParallelJob((ItemParallelJob *)&local_d0);
  return;
}

