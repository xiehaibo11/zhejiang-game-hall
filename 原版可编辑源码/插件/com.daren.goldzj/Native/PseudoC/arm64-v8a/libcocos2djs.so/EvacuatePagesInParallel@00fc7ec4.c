
/* v8::internal::MarkCompactCollector::EvacuatePagesInParallel() */

void __thiscall
v8::internal::MarkCompactCollector::EvacuatePagesInParallel(MarkCompactCollector *this)

{
  uint *puVar1;
  uint uVar2;
  LargePage *pLVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  Page *this_00;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  LargePage *pLVar15;
  undefined8 uVar16;
  long lVar17;
  long local_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  Item *local_68;
  
  ItemParallelJob::ItemParallelJob
            ((ItemParallelJob *)&local_a8,*(CancelableTaskManager **)(*(long *)(this + 8) + 0x3eb0),
             (Semaphore *)(this + 0x3c));
  plVar9 = *(long **)(this + 0x26b0);
  plVar10 = *(long **)(this + 0x26b8);
  if (plVar9 == plVar10) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar13 = *plVar9;
      lVar8 = *(long *)(lVar13 + 0x68) + lVar8;
      local_68 = operator_new(0x18);
      *(undefined ***)local_68 = &PTR__Item_01ca8580;
      *(undefined8 *)(local_68 + 8) = 0;
      *(long *)(local_68 + 0x10) = lVar13;
      if (local_a0 == puStack_98) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)&local_a8,&local_68);
      }
      else {
        *local_a0 = local_68;
        local_a0 = local_a0 + 1;
      }
      plVar9 = plVar9 + 1;
    } while (plVar10 != plVar9);
  }
  puVar14 = *(undefined8 **)(this + 0x26d0);
  for (puVar12 = *(undefined8 **)(this + 0x26c8); puVar12 != puVar14; puVar12 = puVar12 + 1) {
    this_00 = (Page *)*puVar12;
    uVar11 = *(ulong *)(this_00 + 0x68);
    if ((uVar11 != 0) || (uVar6 = Page::contains_array_buffers(this_00), (uVar6 & 1) != 0)) {
      if (((*(byte *)(*(long *)(this + 8) + 0xad4) & 1) == 0) && (-1 < (char)this_00[8])) {
        uVar6 = *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0);
        if (FLAG_page_promotion == '\0') {
          lVar13 = MemoryChunkLayout::AllocatableMemoryInDataPage();
          uVar7 = lVar13 + 4;
        }
        else {
          lVar17 = (long)FLAG_page_promotion_threshold;
          lVar13 = MemoryChunkLayout::AllocatableMemoryInDataPage();
          uVar7 = (ulong)(lVar13 * lVar17) / 100;
        }
        if (((long)uVar7 < (long)uVar11) &&
           (((uVar6 < *(ulong *)(this_00 + 0x20) || (*(ulong *)(this_00 + 0x28) <= uVar6)) &&
            (uVar6 = Heap::CanExpandOldGeneration(*(Heap **)(this + 8),uVar11),
            cVar4 = FLAG_always_promote_young_mc, (uVar6 & 1) != 0)))) {
          uVar16 = *(undefined8 *)(this_00 + 8);
          lVar13 = *(long *)(*(long *)(this_00 + 0x18) + 0xe8);
          SemiSpace::RemovePage((SemiSpace *)(lVar13 + 0x170),this_00);
          if ((((uint)uVar16 >> 0x13 & 1) == 0) && (cVar4 == '\0')) {
            SemiSpace::PrependPage((SemiSpace *)(lVar13 + 0xd0),this_00);
            *(ulong *)(this_00 + 8) = *(ulong *)(this_00 + 8) | 0x400;
          }
          else {
            lVar13 = Page::ConvertNewToOld(this_00);
            *(ulong *)(lVar13 + 8) = *(ulong *)(lVar13 + 8) | 0x200;
            *(long *)(*(long *)(*(long *)(this + 8) + 0xf0) + 0xb8) =
                 *(long *)(*(long *)(*(long *)(this + 8) + 0xf0) + 0xb8) - *(long *)(this_00 + 0xc0)
            ;
          }
        }
      }
      lVar8 = uVar11 + lVar8;
      local_68 = operator_new(0x18);
      *(undefined ***)local_68 = &PTR__Item_01ca8580;
      *(undefined8 *)(local_68 + 8) = 0;
      *(Page **)(local_68 + 0x10) = this_00;
      if (local_a0 == puStack_98) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)&local_a8,&local_68);
      }
      else {
        *local_a0 = local_68;
        local_a0 = local_a0 + 1;
      }
    }
  }
  pLVar15 = *(LargePage **)(*(long *)(*(long *)(this + 8) + 0x118) + 0x20);
  while (pLVar3 = pLVar15, pLVar3 != (LargePage *)0x0) {
    pLVar15 = *(LargePage **)(pLVar3 + 0xe0);
    uVar11 = *(long *)(pLVar3 + 0x20) + 1U & 0xfffffffffffc0000;
    uVar6 = (*(long *)(pLVar3 + 0x20) + 1U) - uVar11;
    puVar1 = (uint *)(*(long *)(uVar11 + 0x10) + (uVar6 >> 7 & 0x1ffffff) * 4);
    uVar2 = 1 << (ulong)((uint)(uVar6 >> 2) & 0x1f);
    if ((uVar2 & *puVar1) != 0) {
      uVar2 = uVar2 << 1;
      bVar5 = uVar2 == 0;
      if (bVar5) {
        uVar2 = 1;
      }
      if ((puVar1[bVar5] & uVar2) != 0) {
        OldLargeObjectSpace::PromoteNewLargeObject
                  (*(OldLargeObjectSpace **)(*(long *)(this + 8) + 0x108),pLVar3);
        *(ulong *)(pLVar3 + 8) = *(ulong *)(pLVar3 + 8) | 0x200;
        local_68 = operator_new(0x18);
        *(undefined ***)local_68 = &PTR__Item_01ca8580;
        *(undefined8 *)(local_68 + 8) = 0;
        *(LargePage **)(local_68 + 0x10) = pLVar3;
        if (local_a0 == puStack_98) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                    ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                      *)&local_a8,&local_68);
        }
        else {
          *local_a0 = local_68;
          local_a0 = local_a0 + 1;
        }
      }
    }
  }
  if ((int)((ulong)((long)local_a0 - local_a8) >> 3) != 0) {
    MarkCompactCollectorBase::
    CreateAndExecuteEvacuationTasks<v8::internal::FullEvacuator,v8::internal::MarkCompactCollector>
              ((MarkCompactCollectorBase *)this,this,(ItemParallelJob *)&local_a8,
               (MigrationObserver *)0x0,lVar8);
    Sweeper::MergeOldToNewRememberedSetsForSweptPages(*(Sweeper **)(this + 0x26f8));
    PostProcessEvacuationCandidates();
  }
  ItemParallelJob::~ItemParallelJob((ItemParallelJob *)&local_a8);
  return;
}

