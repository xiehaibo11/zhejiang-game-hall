
/* WARNING: Removing unreachable block (ram,0x010001d0) */
/* WARNING: Switch with 1 destination removed at 0x010001fc */
/* WARNING: Exceeded maximum restarts with more pending */
/* v8::internal::ScavengerCollector::CollectGarbage() */

void __thiscall v8::internal::ScavengerCollector::CollectGarbage(ScavengerCollector *this)

{
  long lVar1;
  bool bVar2;
  Item *pIVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  void *pvVar8;
  Scavenger *pSVar9;
  Task *this_00;
  long *plVar10;
  undefined8 uVar11;
  Bucket *this_01;
  long lVar12;
  code *pcVar13;
  Page *pPVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  Scavenger **ppSVar18;
  byte *pbVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  MemoryChunk *pMVar24;
  Sweeper *pSVar25;
  Page **ppPVar26;
  long lVar27;
  byte *pbVar28;
  long lVar29;
  undefined1 auVar30 [16];
  byte **ppbStack_fb8;
  byte *pbStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined **ppuStack_f98;
  Scavenger *pSStack_f90;
  PauseOrCompleteScope aPStack_f88 [8];
  Scavenger *local_f80 [8];
  ItemParallelJob aIStack_f40 [8];
  undefined8 *puStack_f38;
  undefined8 *puStack_f30;
  vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
  avStack_f28 [8];
  undefined8 *local_f20;
  undefined8 *puStack_f18;
  long *plStack_f00;
  long *plStack_ef8;
  Item *local_ef0 [4];
  Item **ppIStack_ed0;
  Page ***local_ea8;
  Page **local_ea0;
  Page **local_e98;
  undefined8 uStack_e90;
  char local_e80;
  Worklist local_e78 [8];
  undefined8 auStack_e70 [79];
  Mutex aMStack_bf8 [40];
  undefined8 local_bd0;
  uint local_bc8;
  ulong local_bc0;
  undefined8 local_bb8;
  void *local_bb0;
  undefined1 auStack_908 [696];
  Worklist local_650 [8];
  undefined8 local_648 [79];
  Mutex aMStack_3d0 [40];
  undefined8 local_3a8;
  uint local_3a0;
  Worklist local_398 [8];
  undefined8 auStack_390 [79];
  Mutex aMStack_118 [40];
  undefined8 local_f0;
  int local_e8;
  ConditionVariable aCStack_e0 [48];
  Mutex aMStack_b0 [40];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  lVar12 = *(long *)this;
  local_bb0 = (void *)0x0;
  local_bb8 = 0;
  local_bc0 = 0x7061656808;
  pcVar13 = *(code **)(lVar12 + 0xc7f0);
  if ((pcVar13 != (code *)0x0) && ((*pcVar13)(4,&local_bc0), (local_bc0 & 1) != 0)) {
    operator_delete(local_bb0);
  }
  ItemParallelJob::ItemParallelJob
            (aIStack_f40,*(CancelableTaskManager **)(*(long *)this + 0xc700),
             (Semaphore *)(this + 0x10));
  bVar6 = Isolate::LogObjectRelocation(*(Isolate **)this);
  uVar7 = NumberOfScavengeTasks(this);
  base::ConditionVariable::ConditionVariable(aCStack_e0);
  base::Mutex::Mutex(aMStack_b0);
  local_78 = 0;
  local_88 = 2000;
  uStack_80 = 0;
  base::Mutex::Mutex(aMStack_118);
  lVar21 = 0;
  local_e8 = 8;
  local_f0 = 0;
  puVar17 = auStack_390;
  do {
    pvVar8 = operator_new(0x210);
    *(undefined8 *)((long)pvVar8 + 8) = 0;
    puVar17[-1] = pvVar8;
    pvVar8 = operator_new(0x210);
    *puVar17 = pvVar8;
    lVar21 = lVar21 + 1;
    *(undefined8 *)((long)pvVar8 + 8) = 0;
    puVar17 = puVar17 + 10;
  } while (lVar21 < local_e8);
  base::Mutex::Mutex(aMStack_3d0);
  local_3a8 = 0;
  local_3a0 = uVar7;
  if (0 < (int)uVar7) {
    lVar21 = 0;
    do {
      pvVar8 = operator_new(0x1010);
      lVar16 = 0x10;
      *(undefined8 *)((long)pvVar8 + 8) = 0;
      do {
        puVar17 = (undefined8 *)((long)pvVar8 + lVar16);
        *puVar17 = 0;
        *(undefined4 *)(puVar17 + 1) = 0;
        lVar16 = lVar16 + 0x10;
      } while (puVar17 + 2 != (undefined8 *)((long)pvVar8 + 0x1010));
      *(void **)(local_650 + lVar21 * 0x50) = pvVar8;
      pvVar8 = operator_new(0x1010);
      lVar16 = 0x10;
      *(undefined8 *)((long)pvVar8 + 8) = 0;
      do {
        puVar17 = (undefined8 *)((long)pvVar8 + lVar16);
        *puVar17 = 0;
        *(undefined4 *)(puVar17 + 1) = 0;
        lVar16 = lVar16 + 0x10;
      } while (puVar17 + 2 != (undefined8 *)((long)pvVar8 + 0x1010));
      local_648[lVar21 * 10] = pvVar8;
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)local_3a0);
  }
  Scavenger::PromotionList::PromotionList((PromotionList *)&local_bc0,uVar7);
  base::Mutex::Mutex(aMStack_bf8);
  local_bd0 = 0;
  local_bc8 = uVar7;
  if (0 < (int)uVar7) {
    lVar21 = 0;
    puVar17 = auStack_e70;
    do {
      pvVar8 = operator_new(0x410);
      memset((void *)((long)pvVar8 + 8),0,0x408);
      puVar17[-1] = pvVar8;
      pvVar8 = operator_new(0x410);
      memset((void *)((long)pvVar8 + 8),0,0x408);
      *puVar17 = pvVar8;
      lVar21 = lVar21 + 1;
      puVar17 = puVar17 + 10;
    } while (lVar21 < (int)local_bc8);
    if (0 < (int)uVar7) {
      uVar22 = 0;
      do {
        pSVar9 = operator_new(0x2e8);
        Scavenger::Scavenger
                  (pSVar9,this,*(Heap **)(this + 8),(bool)(bVar6 & 1),local_398,local_650,
                   (PromotionList *)&local_bc0,local_e78,(int)uVar22);
        local_f80[uVar22] = pSVar9;
        this_00 = operator_new(0x68);
        lVar21 = *(long *)(this + 8);
        ItemParallelJob::Task::Task(this_00,(Isolate *)(lVar21 + -0x8850));
        *(undefined ***)this_00 = &PTR__CancelableTask_01ca9348;
        *(undefined ***)(this_00 + 0x20) = &PTR__ScavengingTask_01ca9380;
        *(long *)(this_00 + 0x50) = lVar21;
        *(Scavenger **)(this_00 + 0x58) = pSVar9;
        *(ConditionVariable **)(this_00 + 0x60) = aCStack_e0;
        if (local_f20 < puStack_f18) {
          local_ef0[0] = (Item *)0x0;
          *local_f20 = this_00;
          local_f20 = local_f20 + 1;
        }
        else {
          local_ef0[0] = (Item *)this_00;
          std::__ndk1::
          vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
          ::
          __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>
                    (avStack_f28,(unique_ptr *)local_ef0);
        }
        pIVar3 = local_ef0[0];
        local_ef0[0] = (Item *)0x0;
        if (pIVar3 != (Item *)0x0) {
          (**(code **)(*(long *)pIVar3 + 8))();
        }
        uVar22 = uVar22 + 1;
      } while (uVar7 != uVar22);
    }
  }
  pSVar25 = *(Sweeper **)(*(long *)(*(long *)(this + 8) + 0x800) + 0x26f8);
  Sweeper::PauseOrCompleteScope::PauseOrCompleteScope(aPStack_f88,pSVar25);
  Sweeper::FilterSweepingPagesScope::FilterSweepingPagesScope
            ((FilterSweepingPagesScope *)&local_ea8,pSVar25,aPStack_f88);
  if ((local_e80 != '\0') && (local_ea0 != local_e98)) {
    ppPVar26 = local_ea0;
    do {
      pPVar14 = *ppPVar26;
      if ((((*(long *)(pPVar14 + 0x30) == 0) && (*(long *)(pPVar14 + 0x78) == 0)) &&
          (*(long *)(pPVar14 + 0x88) == 0)) && (*(long *)(pPVar14 + 0x70) == 0)) {
        if (local_ea8[0x17] == local_ea8[0x18]) {
          std::__ndk1::vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>>::
          __push_back_slow_path<v8::internal::Page*const&>
                    ((vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>> *)
                     (local_ea8 + 0x16),ppPVar26);
        }
        else {
          *local_ea8[0x17] = *ppPVar26;
          local_ea8[0x17] = local_ea8[0x17] + 1;
        }
      }
      ppPVar26 = ppPVar26 + 1;
    } while (ppPVar26 != local_e98);
  }
  lVar15 = *(long *)(this + 8);
  lVar29 = *(long *)(*(long *)(lVar15 + 0xf0) + 0x20);
  lVar27 = *(long *)(*(long *)(lVar15 + 0xf8) + 0x20);
  lVar21 = *(long *)(*(long *)(lVar15 + 0x110) + 0x20);
  lVar16 = *(long *)(*(long *)(lVar15 + 0x100) + 0x20);
  lVar15 = *(long *)(*(long *)(lVar15 + 0x108) + 0x20);
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
  while (lVar4 = lVar27, lVar29 != 0) {
    uVar20 = 0;
    lVar5 = *(long *)(lVar29 + 0xe0);
    lVar23 = lVar29;
joined_r0x01000214:
    lVar27 = lVar4;
    lVar29 = lVar5;
    if (lVar23 == 0) goto code_r0x010002f4;
code_r0x01000288:
    if (((*(long *)(lVar23 + 0x70) != 0 || *(long *)(lVar23 + 0x30) != 0) ||
         *(long *)(lVar23 + 0x78) != 0) || (*(long *)(lVar23 + 0x88) != 0)) {
      local_ef0[0] = operator_new(0x18);
      *(undefined ***)local_ef0[0] = &PTR__Item_01ca9468;
      *(undefined8 *)(local_ef0[0] + 8) = 0;
      *(long *)(local_ef0[0] + 0x10) = lVar23;
      if (puStack_f38 == puStack_f30) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)aIStack_f40,local_ef0);
      }
      else {
        *puStack_f38 = local_ef0[0];
        puStack_f38 = puStack_f38 + 1;
      }
    }
    if (5 < uVar20) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  if (lVar16 == 0) {
    lVar5 = lVar29;
    if (lVar27 == 0) {
      if (lVar15 == 0) {
        if (lVar21 != 0) {
          uVar20 = 4;
          lVar4 = *(long *)(lVar21 + 0xe0);
          lVar5 = lVar16;
          lVar23 = lVar21;
          goto joined_r0x01000284;
        }
        goto code_r0x010002f4;
      }
      uVar20 = 3;
      lVar23 = lVar15;
      lVar15 = *(long *)(lVar15 + 0xe0);
    }
    else {
      uVar20 = 2;
      lVar4 = *(long *)(lVar27 + 0xe0);
      lVar23 = lVar27;
    }
    goto joined_r0x01000214;
  }
  uVar20 = 1;
  lVar4 = lVar21;
  lVar5 = *(long *)(lVar16 + 0xe0);
  lVar23 = lVar16;
joined_r0x01000284:
  lVar16 = lVar5;
  lVar21 = lVar4;
  if (lVar23 != 0) goto code_r0x01000288;
code_r0x010002f4:
  ppuStack_f98 = &PTR__RootVisitor_01ca9278;
  pSStack_f90 = local_f80[0];
  GCTracer::Scope::Scope((Scope *)local_ef0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x5c);
  if (pbRam0000000001d3f458 == (byte *)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    pbRam0000000001d3f458 =
         (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.gc");
  }
  pbVar19 = pbRam0000000001d3f458;
  ppbStack_fb8 = (byte **)0x0;
  if ((*pbRam0000000001d3f458 & 5) != 0) {
    uVar11 = GCTracer::Scope::Name(0x5c);
    plStack_f00 = (long *)0x0;
    plStack_ef8 = (long *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar19,uVar11,0,0,0,0,0,0,0,&plStack_f00,0);
    plVar10 = plStack_ef8;
    plStack_ef8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_f00;
    plStack_f00 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_fa8 = GCTracer::Scope::Name(0x5c);
    ppbStack_fb8 = &pbStack_fb0;
    pbStack_fb0 = pbVar19;
    uStack_fa0 = uVar11;
  }
  GlobalHandles::IdentifyWeakUnmodifiedObjects
            (*(GlobalHandles **)(*(long *)this + 0x95e0),JSObject::IsUnmodifiedApiObject);
  if ((ppbStack_fb8 != (byte **)0x0) && (*pbStack_fb0 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,pbStack_fb0,uStack_fa8,uStack_fa0);
  }
  GCTracer::Scope::~Scope((Scope *)local_ef0);
  GCTracer::Scope::Scope((Scope *)local_ef0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x5f);
  if (pbRam0000000001d3f460 == (byte *)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    pbRam0000000001d3f460 =
         (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.gc");
  }
  pbVar19 = pbRam0000000001d3f460;
  ppbStack_fb8 = (byte **)0x0;
  if ((*pbRam0000000001d3f460 & 5) != 0) {
    uVar11 = GCTracer::Scope::Name(0x5f);
    plStack_f00 = (long *)0x0;
    plStack_ef8 = (long *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar19,uVar11,0,0,0,0,0,0,0,&plStack_f00,0);
    plVar10 = plStack_ef8;
    plStack_ef8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_f00;
    plStack_f00 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_fa8 = GCTracer::Scope::Name(0x5f);
    ppbStack_fb8 = &pbStack_fb0;
    pbStack_fb0 = pbVar19;
    uStack_fa0 = uVar11;
  }
  Heap::IterateRoots(*(Heap **)(this + 8),&ppuStack_f98,3);
  if ((ppbStack_fb8 != (byte **)0x0) && (*pbStack_fb0 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,pbStack_fb0,uStack_fa8,uStack_fa0);
  }
  GCTracer::Scope::~Scope((Scope *)local_ef0);
  GCTracer::Scope::Scope((Scope *)local_ef0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x5e);
  if (pbRam0000000001d3f468 == (byte *)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    pbRam0000000001d3f468 =
         (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.gc");
  }
  pbVar19 = pbRam0000000001d3f468;
  ppbStack_fb8 = (byte **)0x0;
  if ((*pbRam0000000001d3f468 & 5) != 0) {
    uVar11 = GCTracer::Scope::Name(0x5e);
    plStack_f00 = (long *)0x0;
    plStack_ef8 = (long *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar19,uVar11,0,0,0,0,0,0,0,&plStack_f00,0);
    plVar10 = plStack_ef8;
    plStack_ef8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_f00;
    plStack_f00 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_fa8 = GCTracer::Scope::Name(0x5e);
    ppbStack_fb8 = &pbStack_fb0;
    pbStack_fb0 = pbVar19;
    uStack_fa0 = uVar11;
  }
  ItemParallelJob::Run(aIStack_f40);
  if ((ppbStack_fb8 != (byte **)0x0) && (*pbStack_fb0 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,pbStack_fb0,uStack_fa8,uStack_fa0);
  }
  GCTracer::Scope::~Scope((Scope *)local_ef0);
  GCTracer::Scope::Scope((Scope *)local_ef0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x5d);
  if (pbRam0000000001d3f470 == (byte *)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    pbRam0000000001d3f470 =
         (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.gc");
  }
  pbVar19 = pbRam0000000001d3f470;
  ppbStack_fb8 = (byte **)0x0;
  if ((*pbRam0000000001d3f470 & 5) != 0) {
    uVar11 = GCTracer::Scope::Name(0x5d);
    plStack_f00 = (long *)0x0;
    plStack_ef8 = (long *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar19,uVar11,0,0,0,0,0,0,0,&plStack_f00,0);
    plVar10 = plStack_ef8;
    plStack_ef8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_f00;
    plStack_f00 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_fa8 = GCTracer::Scope::Name(0x5d);
    ppbStack_fb8 = &pbStack_fb0;
    pbStack_fb0 = pbVar19;
    uStack_fa0 = uVar11;
  }
  GlobalHandles::MarkYoungWeakUnmodifiedObjectsPending
            (*(GlobalHandles **)(*(long *)this + 0x95e0),FUN_01001248);
  GlobalHandles::IterateYoungWeakUnmodifiedRootsForFinalizers
            (*(GlobalHandles **)(*(long *)this + 0x95e0),(RootVisitor *)&ppuStack_f98);
  Scavenger::Process(local_f80[0],(OneshotBarrier *)0x0);
  GlobalHandles::IterateYoungWeakUnmodifiedRootsForPhantomHandles
            (*(GlobalHandles **)(*(long *)this + 0x95e0),(RootVisitor *)&ppuStack_f98,FUN_01001248);
  if ((ppbStack_fb8 != (byte **)0x0) && (*pbStack_fb0 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,pbStack_fb0,uStack_fa8,uStack_fa0);
  }
  GCTracer::Scope::~Scope((Scope *)local_ef0);
  GCTracer::Scope::Scope((Scope *)local_ef0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x62);
  if (pbRam0000000001d3f478 == (byte *)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    pbRam0000000001d3f478 =
         (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.gc");
  }
  pbVar19 = pbRam0000000001d3f478;
  ppbStack_fb8 = (byte **)0x0;
  if ((*pbRam0000000001d3f478 & 5) != 0) {
    uVar11 = GCTracer::Scope::Name(0x62);
    plStack_f00 = (long *)0x0;
    plStack_ef8 = (long *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar19,uVar11,0,0,0,0,0,0,0,&plStack_f00,0);
    plVar10 = plStack_ef8;
    plStack_ef8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_f00;
    plStack_f00 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_fa8 = GCTracer::Scope::Name(0x62);
    ppbStack_fb8 = &pbStack_fb0;
    pbStack_fb0 = pbVar19;
    uStack_fa0 = uVar11;
  }
  if (0 < (int)uVar7) {
    uVar22 = (ulong)uVar7;
    ppSVar18 = local_f80;
    pSVar9 = local_f80[0];
    while( true ) {
      uVar22 = uVar22 - 1;
      ppSVar18 = ppSVar18 + 1;
      func_0x00832e90(pSVar9);
      if (pSVar9 != (Scavenger *)0x0) {
        func_0x0080a720(pSVar9);
        operator_delete(pSVar9);
      }
      if (uVar22 == 0) break;
      pSVar9 = *ppSVar18;
    }
  }
  for (plVar10 = *(long **)(this + 0x30); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    uVar22 = plVar10[2];
    *(undefined4 *)(uVar22 - 1) = *(undefined4 *)(plVar10 + 3);
    OldLargeObjectSpace::PromoteNewLargeObject
              (*(OldLargeObjectSpace **)(*(long *)(this + 8) + 0x108),
               (LargePage *)(uVar22 & 0xfffffffffffc0000));
  }
  if (*(long *)(this + 0x38) != 0) {
    puVar17 = *(void **)(this + 0x30);
    while (puVar17 != (void *)0x0) {
      pvVar8 = (void *)*puVar17;
      operator_delete(puVar17);
      puVar17 = pvVar8;
    }
    lVar21 = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x30) = 0;
    if (lVar21 != 0) {
      lVar16 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x20) + lVar16 * 8) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar21 != lVar16);
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  if ((ppbStack_fb8 != (byte **)0x0) && (*pbStack_fb0 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,pbStack_fb0,uStack_fa8,uStack_fa0);
  }
  GCTracer::Scope::~Scope((Scope *)local_ef0);
  func_0x007fa850(&local_ea8);
  func_0x0082d760(aPStack_f88);
  GCTracer::Scope::Scope((Scope *)local_ef0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x60);
  if (ppPRam0000000001d3f480 == (Page **)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    ppPRam0000000001d3f480 =
         (Page **)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.gc");
  }
  ppPVar26 = ppPRam0000000001d3f480;
  local_ea8 = (Page ***)0x0;
  if (((ulong)*ppPRam0000000001d3f480 & 5) != 0) {
    uVar11 = GCTracer::Scope::Name(0x60);
    plStack_f00 = (long *)0x0;
    plStack_ef8 = (long *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,ppPVar26,uVar11,0,0,0,0,0,0,0,&plStack_f00,0);
    plVar10 = plStack_ef8;
    plStack_ef8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_f00;
    plStack_f00 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_e98 = (Page **)GCTracer::Scope::Name(0x60);
    local_ea8 = &local_ea0;
    local_ea0 = ppPVar26;
    uStack_e90 = uVar11;
  }
  Heap::UpdateYoungReferencesInExternalStringTable
            (*(Heap **)(this + 8),Heap::UpdateYoungReferenceInExternalStringTableEntry);
  IncrementalMarking::UpdateMarkingWorklistAfterScavenge
            (*(IncrementalMarking **)(*(long *)(this + 8) + 0x828));
  if ((local_ea8 != (Page ***)0x0) && (*(byte *)local_ea0 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,local_ea0,local_e98,uStack_e90);
  }
  GCTracer::Scope::~Scope((Scope *)local_ef0);
  if (FLAG_concurrent_marking != '\0') {
    lVar21 = *(long *)(this + 8);
    pMVar24 = *(MemoryChunk **)(*(long *)(lVar21 + 0xe8) + 400);
    if (pMVar24 != (MemoryChunk *)0x0) {
      while( true ) {
        ConcurrentMarking::ClearMemoryChunkData(*(ConcurrentMarking **)(lVar21 + 0x830),pMVar24);
        pMVar24 = *(MemoryChunk **)(pMVar24 + 0xe0);
        if (pMVar24 == (MemoryChunk *)0x0) break;
        lVar21 = *(long *)(this + 8);
      }
    }
  }
  local_ef0[0] = (Item *)&PTR__WeakObjectRetainer_01ca9440;
  Heap::ProcessYoungWeakReferences(*(Heap **)(this + 8),(WeakObjectRetainer *)local_ef0);
  ClearYoungEphemerons(this,local_e78);
  ClearOldEphemerons(this);
  SemiSpace::set_age_mark
            ((SemiSpace *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0xd0),
             *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x68));
  GCTracer::Scope::Scope((Scope *)local_ef0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x5b);
  if (ppPRam0000000001d3f488 == (Page **)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    ppPRam0000000001d3f488 =
         (Page **)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.gc");
  }
  ppPVar26 = ppPRam0000000001d3f488;
  local_ea8 = (Page ***)0x0;
  if (((ulong)*ppPRam0000000001d3f488 & 5) != 0) {
    uVar11 = GCTracer::Scope::Name(0x5b);
    plStack_f00 = (long *)0x0;
    plStack_ef8 = (long *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,ppPVar26,uVar11,0,0,0,0,0,0,0,&plStack_f00,0);
    plVar10 = plStack_ef8;
    plStack_ef8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_f00;
    plStack_f00 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_e98 = (Page **)GCTracer::Scope::Name(0x5b);
    local_ea8 = &local_ea0;
    local_ea0 = ppPVar26;
    uStack_e90 = uVar11;
  }
  func_0x00801c30(*(undefined8 *)(this + 8));
  if ((local_ea8 != (Page ***)0x0) && (*(byte *)local_ea0 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,local_ea0,local_e98,uStack_e90);
  }
  GCTracer::Scope::~Scope((Scope *)local_ef0);
  ArrayBufferCollector::FreeAllocations(*(ArrayBufferCollector **)(*(long *)(this + 8) + 0x818));
  local_ef0[0] = (Item *)&PTR_FUN_01ca9488;
  ppIStack_ed0 = local_ef0;
  NewLargeObjectSpace::FreeDeadObjects
            (*(NewLargeObjectSpace **)(*(long *)(this + 8) + 0x118),(function *)local_ef0);
  if (local_ef0 == ppIStack_ed0) {
    pcVar13 = *(code **)(*ppIStack_ed0 + 0x20);
  }
  else {
    if (ppIStack_ed0 == (Item **)0x0) goto code_r0x01000d4c;
    pcVar13 = *(code **)(*ppIStack_ed0 + 0x28);
  }
  (*pcVar13)();
code_r0x01000d4c:
  GCTracer::Scope::Scope((Scope *)local_ef0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x59);
  if (ppPRam0000000001d3f490 == (Page **)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    ppPRam0000000001d3f490 =
         (Page **)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.gc");
  }
  ppPVar26 = ppPRam0000000001d3f490;
  local_ea8 = (Page ***)0x0;
  if (((ulong)*ppPRam0000000001d3f490 & 5) != 0) {
    uVar11 = GCTracer::Scope::Name(0x59);
    plStack_f00 = (long *)0x0;
    plStack_ef8 = (long *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,ppPVar26,uVar11,0,0,0,0,0,0,0,&plStack_f00,0);
    plVar10 = plStack_ef8;
    plStack_ef8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_f00;
    plStack_f00 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_e98 = (Page **)GCTracer::Scope::Name(0x59);
    local_ea8 = &local_ea0;
    local_ea0 = ppPVar26;
    uStack_e90 = uVar11;
  }
  uVar22 = func_0x008363f0(local_398,0,&ppbStack_fb8);
  do {
    if ((uVar22 & 1) == 0) {
      if ((local_ea8 != (Page ***)0x0) && (*(byte *)local_ea0 != 0)) {
        plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar10 + 0x28))(plVar10,local_ea0,local_e98,uStack_e90);
      }
      GCTracer::Scope::~Scope((Scope *)local_ef0);
      lVar16 = *(long *)(this + 8);
      lVar21 = *(long *)(lVar16 + 0x7b8) + *(long *)(lVar16 + 0x7a0);
      *(long *)(lVar16 + 0xb0) = lVar21;
      *(long *)(lVar16 + 0xa8) = *(long *)(lVar16 + 0xa8) + lVar21;
      func_0x0081dea0(local_e78);
      func_0x007fc2a0(auStack_908);
      func_0x00839ef0(&local_bc0);
      func_0x00839ef0(local_650);
      func_0x0082d390(local_398);
      base::Mutex::~Mutex(aMStack_b0);
      base::ConditionVariable::~ConditionVariable(aCStack_e0);
      ItemParallelJob::~ItemParallelJob(aIStack_f40);
      local_bb0 = (void *)0x0;
      local_bb8 = 0;
      local_bc0 = 0;
      pcVar13 = *(code **)(lVar12 + 0xc7f0);
      if ((pcVar13 != (code *)0x0) && ((*pcVar13)(4,&local_bc0), (local_bc0 & 1) != 0)) {
        operator_delete(local_bb0);
      }
      if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pbVar19 = ppbStack_fb8[6];
    if (pbVar19 != (byte *)0x0) {
      uVar22 = (ulong)(*ppbStack_fb8 + 0xfff) >> 0xc;
      if (uVar22 != 0) {
        pbVar28 = pbVar19 + -9;
        bVar2 = true;
        this_01 = *(Bucket **)pbVar19;
        while( true ) {
          if (this_01 != (Bucket *)0x0) {
            if (*pbVar28 == 0) {
              auVar30 = SlotSet::Bucket::IsEmpty(this_01);
              if ((auVar30._0_8_ & 1) == 0) {
                bVar2 = false;
              }
              else {
                pbVar19[0] = 0;
                pbVar19[1] = 0;
                pbVar19[2] = 0;
                pbVar19[3] = 0;
                pbVar19[4] = 0;
                pbVar19[5] = 0;
                pbVar19[6] = 0;
                pbVar19[7] = 0;
                if (*(Malloced **)pbVar19 != (Malloced *)0x0) {
                  Malloced::operator_delete(*(Malloced **)pbVar19,auVar30._8_8_);
                }
              }
              *pbVar28 = 1;
            }
            else {
              bVar2 = false;
            }
          }
          uVar22 = uVar22 - 1;
          pbVar28 = pbVar28 + -1;
          pbVar19 = pbVar19 + 8;
          if (uVar22 == 0) break;
          this_01 = *(Bucket **)pbVar19;
        }
        if (!bVar2) goto code_r0x01000e5c;
      }
      MemoryChunk::ReleaseSlotSet<(v8::internal::RememberedSetType)0>();
    }
code_r0x01000e5c:
    uVar22 = func_0x008363f0(local_398,0,&ppbStack_fb8);
  } while( true );
}

