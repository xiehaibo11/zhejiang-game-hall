
/* v8::internal::Heap::PerformGarbageCollection(v8::internal::GarbageCollector, v8::GCCallbackFlags)
    */

bool __thiscall
v8::internal::Heap::PerformGarbageCollection(Heap *this,uint param_2,undefined4 param_3)

{
  Mutex *this_00;
  Isolate *pIVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  Heap HVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  Isolate *pIVar21;
  long lVar22;
  undefined8 *puVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined **local_130;
  Isolate *pIStack_128;
  long *local_f0;
  long *local_e8;
  RuntimeCallStats *local_e0;
  byte *pbStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  byte **local_b0;
  byte *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> aPStack_90 [16];
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_80 [16];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  pIVar1 = (Isolate *)(this + -0x8850);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_80,pIVar1);
  if ((param_2 & 0xfffffffd) != 0) {
    lVar17 = *(long *)(*(long *)(this + 0x30) + 0xb6d8);
    this_00 = (Mutex *)(lVar17 + 0x28);
    base::Mutex::Lock(this_00);
    for (plVar18 = *(long **)(lVar17 + 0x10); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      (**(code **)(*(long *)plVar18[2] + 0x70))();
    }
    base::Mutex::Unlock(this_00);
  }
  if (FLAG_verify_heap != '\0') {
    local_130 = &PTR__ObjectVisitor_01ca7738;
    local_e0 = *(RuntimeCallStats **)(this + -0x7880);
    pIStack_128 = pIVar1;
    HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::IterateElements
              ((HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *)&local_e0,
               (ObjectVisitor *)&local_130);
  }
  lVar17 = *(long *)(this + 0x870);
  *(int *)(this + 0xb40) = *(int *)(this + 0xb40) + 1;
  uVar3 = *(undefined4 *)(lVar17 + 0x18);
  *(undefined4 *)(lVar17 + 0x18) = 0;
  uVar14 = 1;
  if (param_2 == 1) {
    uVar14 = 2;
  }
  if (*(int *)(this + 0xb40) == 1) {
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
              (aPStack_90,pIVar1);
    GCTracer::Scope::Scope((Scope *)&local_130,*(undefined8 *)(this + 0x7f8),0xe);
    if (DAT_01d3f078 == (byte *)0x0) {
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f078 = (byte *)(**(code **)(*plVar18 + 0x10))(plVar18,"disabled-by-default-v8.gc");
    }
    pbVar7 = DAT_01d3f078;
    local_b0 = (byte **)0x0;
    if ((*DAT_01d3f078 & 5) != 0) {
      uVar8 = GCTracer::Scope::Name(0xe);
      local_f0 = (long *)0x0;
      local_e8 = (long *)0x0;
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar8 = (**(code **)(*plVar18 + 0x18))(plVar18,0x58,pbVar7,uVar8,0,0,0,0,0,0,0,&local_f0,0);
      plVar18 = local_e8;
      local_e8 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      plVar18 = local_f0;
      local_f0 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      local_a0 = GCTracer::Scope::Name(0xe);
      local_b0 = &local_a8;
      local_a8 = pbVar7;
      local_98 = uVar8;
    }
    lVar22 = *(long *)(this + 0x30);
    uVar4 = *(undefined4 *)(lVar22 + 0x2c60);
    *(undefined4 *)(lVar22 + 0x2c60) = 6;
    pIVar21 = *(Isolate **)(this + 0x30);
    uVar8 = *(undefined8 *)(pIVar21 + 0x95a0);
    lVar10 = *(long *)(pIVar21 + 0x95a8);
    *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + 1;
    local_c0 = 0;
    pbStack_d8 = (byte *)0x0;
    local_e0 = (RuntimeCallStats *)0x0;
    local_c8 = 0;
    local_d0 = 0;
    if (TracingFlags::runtime_stats != 0) {
      local_e0 = (RuntimeCallStats *)(*(long *)(this + 0xcd0) + 0x58a0);
      RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x8a);
    }
    puVar20 = *(undefined8 **)(this + 0x618);
    for (puVar23 = *(undefined8 **)(this + 0x610); puVar23 != puVar20; puVar23 = puVar23 + 3) {
      if ((*(uint *)(puVar23 + 1) & uVar14) != 0) {
        (*(code *)*puVar23)(pIVar1,uVar14,0,puVar23[2]);
      }
    }
    if (local_e0 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
    }
    if (pIVar21 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar21 + 0x95a0) = uVar8;
      *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + -1;
      if (*(long *)(pIVar21 + 0x95a8) != lVar10) {
        *(long *)(pIVar21 + 0x95a8) = lVar10;
        HandleScope::DeleteExtensions(pIVar21);
      }
    }
    *(undefined4 *)(lVar22 + 0x2c60) = uVar4;
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar18 + 0x28))(plVar18,local_a8,local_a0,local_98);
    }
    GCTracer::Scope::~Scope((Scope *)&local_130);
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
              (aPStack_90);
  }
  *(undefined4 *)(lVar17 + 0x18) = uVar3;
  plVar18 = *(long **)(this + 0xe8);
  *(int *)(this + 0xb40) = *(int *)(this + 0xb40) + -1;
  if ((char)plVar18[0x3f] == '\0') {
    uVar9 = SemiSpace::Commit((SemiSpace *)(plVar18 + 0x2e));
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory(this,"Committing semi space failed.");
    }
    plVar18 = *(long **)(this + 0xe8);
  }
  lVar17 = (**(code **)(*plVar18 + 0x48))();
  lVar10 = (**(code **)(**(long **)(this + 0x118) + 0x50))(*(long **)(this + 0x118));
  if (param_2 == 0) {
    if (this[0xb45] != (Heap)0x0) {
      lVar22 = (**(code **)(**(long **)(this + 0xe8) + 0x48))();
      lVar19 = (**(code **)(**(long **)(this + 0x118) + 0x48))(*(long **)(this + 0x118));
      uVar9 = CanExpandOldGeneration(this,lVar19 + lVar22);
      if ((uVar9 & 1) != 0) {
        GCTracer::NotifyYoungGenerationHandling(*(undefined8 *)(this + 0x7f8),1);
        EvacuateYoungGeneration(this);
        goto LAB_00f8dda0;
      }
    }
    GCTracer::NotifyYoungGenerationHandling(*(undefined8 *)(this + 0x7f8),0);
    Scavenge(this);
  }
  else if (param_2 == 2) {
    MinorMarkCompact(this);
  }
  else if (param_2 == 1) {
    plVar18 = *(long **)(this + 0xf0);
    lVar19 = *(long *)(this + 0x888);
    lVar22 = 0;
    if (plVar18 != (long *)0x0) {
      iVar16 = 3;
LAB_00f8dbe8:
      do {
        lVar11 = (**(code **)(*plVar18 + 0x50))();
        lVar22 = lVar11 + lVar22;
        switch(iVar16) {
        case 0:
        case 1:
          goto switchD_00f8dc10_caseD_0;
        case 2:
          plVar18 = *(long **)(this + 0xf0);
          iVar16 = iVar16 + 1;
          if (plVar18 == (long *)0x0) goto switchD_00f8dc10_default;
          goto LAB_00f8dbe8;
        case 3:
          plVar18 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar18 = *(long **)(this + 0x100);
          break;
        default:
          goto switchD_00f8dc10_default;
        }
        iVar16 = iVar16 + 1;
      } while (plVar18 != (long *)0x0);
    }
switchD_00f8dc10_default:
    lVar11 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    *(long *)(this + 0x888) = (lVar22 + lVar19 + lVar11) - *(long *)(this + 0x890);
    *(undefined8 *)(this + 0x890) = 0;
    MarkCompact(this);
    plVar18 = *(long **)(this + 0xf0);
    lVar22 = 0;
    this[0x88] = (Heap)0x1;
    *(long *)(this + 0x888) = *(long *)(this + 0x888) + *(long *)(this + 0x7a0);
    if (plVar18 != (long *)0x0) {
      iVar16 = 3;
LAB_00f8dca8:
      do {
        lVar19 = (**(code **)(*plVar18 + 0x50))();
        lVar22 = lVar19 + lVar22;
        switch(iVar16) {
        case 0:
        case 1:
          goto switchD_00f8dc10_caseD_0;
        case 2:
          plVar18 = *(long **)(this + 0xf0);
          iVar16 = iVar16 + 1;
          if (plVar18 == (long *)0x0) goto switchD_00f8dcd0_default;
          goto LAB_00f8dca8;
        case 3:
          plVar18 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar18 = *(long **)(this + 0x100);
          break;
        default:
          goto switchD_00f8dcd0_default;
        }
        iVar16 = iVar16 + 1;
      } while (plVar18 != (long *)0x0);
    }
switchD_00f8dcd0_default:
    lVar19 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    *(long *)(this + 0x890) = lVar19 + lVar22;
  }
LAB_00f8dda0:
  ProcessPretenuringFeedback(this);
  iVar16 = (int)(lVar10 + lVar17);
  if (iVar16 != 0) {
    dVar24 = (double)iVar16;
    dVar26 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x7a0));
    dVar25 = (dVar26 / dVar24) * 100.0;
    *(double *)(this + 0x7a8) = dVar25;
    if (*(ulong *)(this + 0x7c0) == 0) {
      dVar26 = 0.0;
    }
    else {
      dVar26 = (dVar26 / (double)*(ulong *)(this + 0x7c0)) * 100.0;
    }
    *(double *)(this + 0x7b0) = dVar26;
    dVar26 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x7b8));
    dVar24 = (dVar26 / dVar24) * 100.0;
    *(double *)(this + 0x7c8) = dVar24;
    GCTracer::AddSurvivalRatio(*(GCTracer **)(this + 0x7f8),dVar25 + dVar24);
  }
  ConfigureInitialOldGenerationSize(this);
  if ((param_2 == 1) ||
     (IncrementalMarking::UpdateMarkedBytesAfterScavenge
                (*(IncrementalMarking **)(this + 0x828),
                 ((lVar10 + lVar17) - *(long *)(this + 0x7a0)) - *(long *)(this + 0x7b8)),
     this[0xb45] == (Heap)0x0)) {
    lVar10 = *(long *)(this + 0xb0);
    uVar9 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
    lVar17 = MemoryChunkLayout::AllocatableMemoryInDataPage();
    uVar15 = (uVar9 >> 0x12) * lVar17;
    HVar13 = (Heap)0x0;
    uVar9 = 0;
    if (uVar15 != 0) {
      uVar9 = (ulong)(lVar10 * 100) / uVar15;
    }
    if ((FLAG_optimize_for_size == '\0') && (FLAG_fast_promotion_new_space != '\0')) {
      if ((((byte)this[0xad4] & 1) == 0) &&
         (*(long *)(*(long *)(this + 0xe8) + 0x138) == *(long *)(*(long *)(this + 0xe8) + 0x140))) {
        HVar13 = (Heap)(0x59 < uVar9);
      }
      else {
        HVar13 = (Heap)0x0;
      }
    }
    this[0xb45] = HVar13;
    if ((FLAG_trace_gc_verbose != '\0') && (FLAG_trace_gc_ignore_scavenger == '\0')) {
      pcVar2 = "false";
      if (HVar13 != (Heap)0x0) {
        pcVar2 = "true";
      }
      PrintIsolate(pIVar1,"Fast promotion mode: %s survival rate: %zu%%\n",pcVar2);
    }
  }
  lVar17 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  if (*(char *)(lVar17 + 0x1878) == '\0') {
    *(char *)(lVar17 + 0x1878) = '\x01';
    puVar12 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar17 + 0x1860));
    *(undefined4 **)(lVar17 + 0x1870) = puVar12;
  }
  else {
    puVar12 = *(undefined4 **)(lVar17 + 0x1870);
  }
  if (puVar12 != (undefined4 *)0x0) {
    *puVar12 = 0;
  }
  GCTracer::Scope::Scope((Scope *)&local_130,*(undefined8 *)(this + 0x7f8),0xf);
  if (DAT_01d3f080 == (byte *)0x0) {
    plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f080 = (byte *)(**(code **)(*plVar18 + 0x10))(plVar18,"disabled-by-default-v8.gc");
  }
  pbVar7 = DAT_01d3f080;
  local_e0 = (RuntimeCallStats *)0x0;
  if ((*DAT_01d3f080 & 5) != 0) {
    uVar8 = GCTracer::Scope::Name(0xf);
    local_f0 = (long *)0x0;
    local_e8 = (long *)0x0;
    plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar18 + 0x18))(plVar18,0x58,pbVar7,uVar8,0,0,0,0,0,0,0,&local_f0,0);
    plVar18 = local_e8;
    local_e8 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    plVar18 = local_f0;
    local_f0 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    local_d0 = GCTracer::Scope::Name(0xf);
    local_e0 = (RuntimeCallStats *)&pbStack_d8;
    pbStack_d8 = pbVar7;
    local_c8 = uVar8;
  }
  lVar17 = GlobalHandles::InvokeFirstPassWeakCallbacks
                     (*(GlobalHandles **)(*(long *)(this + 0x30) + 0x95e0));
  if ((local_e0 != (RuntimeCallStats *)0x0) && (*pbStack_d8 != 0)) {
    plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar18 + 0x28))(plVar18,pbStack_d8,local_d0,local_c8);
  }
  GCTracer::Scope::~Scope((Scope *)&local_130);
  if (param_2 == 1) {
    GCTracer::Scope::Scope((Scope *)&local_130,*(undefined8 *)(this + 0x7f8),10);
    if (DAT_01d3f088 == (byte *)0x0) {
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f088 = (byte *)(**(code **)(*plVar18 + 0x10))(plVar18,"disabled-by-default-v8.gc");
    }
    pbVar7 = DAT_01d3f088;
    local_e0 = (RuntimeCallStats *)0x0;
    if ((*DAT_01d3f088 & 5) != 0) {
      uVar8 = GCTracer::Scope::Name(10);
      local_f0 = (long *)0x0;
      local_e8 = (long *)0x0;
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar8 = (**(code **)(*plVar18 + 0x18))(plVar18,0x58,pbVar7,uVar8,0,0,0,0,0,0,0,&local_f0,0);
      plVar18 = local_e8;
      local_e8 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      plVar18 = local_f0;
      local_f0 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      local_d0 = GCTracer::Scope::Name(10);
      local_e0 = (RuntimeCallStats *)&pbStack_d8;
      pbStack_d8 = pbVar7;
      local_c8 = uVar8;
    }
    LocalEmbedderHeapTracer::TraceEpilogue(*(LocalEmbedderHeapTracer **)(this + 0x870));
    if ((local_e0 != (RuntimeCallStats *)0x0) && (*pbStack_d8 != 0)) {
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar18 + 0x28))(plVar18,pbStack_d8,local_d0,local_c8);
    }
    GCTracer::Scope::~Scope((Scope *)&local_130);
  }
  GCTracer::Scope::Scope((Scope *)&local_130,*(undefined8 *)(this + 0x7f8),0xf);
  if (DAT_01d3f090 == (byte *)0x0) {
    plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f090 = (byte *)(**(code **)(*plVar18 + 0x10))(plVar18,"disabled-by-default-v8.gc");
  }
  pbVar7 = DAT_01d3f090;
  local_e0 = (RuntimeCallStats *)0x0;
  if ((*DAT_01d3f090 & 5) != 0) {
    uVar8 = GCTracer::Scope::Name(0xf);
    local_f0 = (long *)0x0;
    local_e8 = (long *)0x0;
    plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar18 + 0x18))(plVar18,0x58,pbVar7,uVar8,0,0,0,0,0,0,0,&local_f0,0);
    plVar18 = local_e8;
    local_e8 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    plVar18 = local_f0;
    local_f0 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    local_d0 = GCTracer::Scope::Name(0xf);
    local_e0 = (RuntimeCallStats *)&pbStack_d8;
    pbStack_d8 = pbVar7;
    local_c8 = uVar8;
  }
  *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + 1;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
            ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *)&local_b0,pIVar1);
  lVar10 = GlobalHandles::PostGarbageCollectionProcessing
                     (*(GlobalHandles **)(*(long *)(this + 0x30) + 0x95e0),param_2,param_3);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
            ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *)&local_b0);
  *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + -1;
  if ((local_e0 != (RuntimeCallStats *)0x0) && (*pbStack_d8 != 0)) {
    plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar18 + 0x28))(plVar18,pbStack_d8,local_d0,local_c8);
  }
  GCTracer::Scope::~Scope((Scope *)&local_130);
  EternalHandles::PostGarbageCollectionProcessing
            (*(EternalHandles **)(*(long *)(this + 0x30) + 0x95e8));
  Relocatable::PostGarbageCollectionProcessing(*(Isolate **)(this + 0x30));
  RecomputeLimits(this,param_2);
  iVar5 = *(int *)(this + 0xb40);
  iVar16 = iVar5 + 1;
  *(int *)(this + 0xb40) = iVar16;
  if (iVar5 == 0) {
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
              (aPStack_90,pIVar1);
    GCTracer::Scope::Scope((Scope *)&local_130,*(undefined8 *)(this + 0x7f8),0xd);
    if (DAT_01d3f098 == (byte *)0x0) {
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f098 = (byte *)(**(code **)(*plVar18 + 0x10))(plVar18,"disabled-by-default-v8.gc");
    }
    pbVar7 = DAT_01d3f098;
    local_b0 = (byte **)0x0;
    if ((*DAT_01d3f098 & 5) != 0) {
      uVar8 = GCTracer::Scope::Name(0xd);
      local_f0 = (long *)0x0;
      local_e8 = (long *)0x0;
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar8 = (**(code **)(*plVar18 + 0x18))(plVar18,0x58,pbVar7,uVar8,0,0,0,0,0,0,0,&local_f0,0);
      plVar18 = local_e8;
      local_e8 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      plVar18 = local_f0;
      local_f0 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 8))();
      }
      local_a0 = GCTracer::Scope::Name(0xd);
      local_b0 = &local_a8;
      local_a8 = pbVar7;
      local_98 = uVar8;
    }
    lVar19 = *(long *)(this + 0x30);
    uVar3 = *(undefined4 *)(lVar19 + 0x2c60);
    *(undefined4 *)(lVar19 + 0x2c60) = 6;
    pIVar21 = *(Isolate **)(this + 0x30);
    uVar8 = *(undefined8 *)(pIVar21 + 0x95a0);
    lVar22 = *(long *)(pIVar21 + 0x95a8);
    *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + 1;
    local_c0 = 0;
    pbStack_d8 = (byte *)0x0;
    local_e0 = (RuntimeCallStats *)0x0;
    local_c8 = 0;
    local_d0 = 0;
    if (TracingFlags::runtime_stats != 0) {
      local_e0 = (RuntimeCallStats *)(*(long *)(this + 0xcd0) + 0x58a0);
      RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x89);
    }
    puVar20 = *(undefined8 **)(this + 0x600);
    for (puVar23 = *(undefined8 **)(this + 0x5f8); puVar23 != puVar20; puVar23 = puVar23 + 3) {
      if ((*(uint *)(puVar23 + 1) & uVar14) != 0) {
        (*(code *)*puVar23)(pIVar1,uVar14,param_3,puVar23[2]);
      }
    }
    if (local_e0 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
    }
    if (pIVar21 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar21 + 0x95a0) = uVar8;
      *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + -1;
      if (*(long *)(pIVar21 + 0x95a8) != lVar22) {
        *(long *)(pIVar21 + 0x95a8) = lVar22;
        HandleScope::DeleteExtensions(pIVar21);
      }
    }
    *(undefined4 *)(lVar19 + 0x2c60) = uVar3;
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar18 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar18 + 0x28))(plVar18,local_a8,local_a0,local_98);
    }
    GCTracer::Scope::~Scope((Scope *)&local_130);
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
              (aPStack_90);
    iVar16 = *(int *)(this + 0xb40);
  }
  *(int *)(this + 0xb40) = iVar16 + -1;
  if (FLAG_verify_heap != '\0') {
    local_130 = &PTR__ObjectVisitor_01ca7738;
    local_e0 = *(RuntimeCallStats **)(this + -0x7880);
    pIStack_128 = pIVar1;
    HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::IterateElements
              ((HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *)&local_e0,
               (ObjectVisitor *)&local_130);
  }
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_80);
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return lVar17 + lVar10 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00f8dc10_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

