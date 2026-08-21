
/* v8::internal::Heap::CollectGarbage(v8::internal::AllocationSpace,
   v8::internal::GarbageCollectionReason, v8::GCCallbackFlags) */

uint __thiscall
v8::internal::Heap::CollectGarbage(Heap *this,undefined8 param_2,uint param_3,uint param_4)

{
  Isolate *this_00;
  char *pcVar1;
  undefined4 uVar2;
  long lVar3;
  byte *pbVar4;
  TimedHistogram *pTVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  TimedHistogram *this_01;
  bool bVar15;
  int iVar16;
  undefined8 uVar17;
  double dVar18;
  ulong local_e8;
  byte **local_e0;
  byte *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  TimedHistogram *local_b8;
  Isolate *local_b0;
  DevToolsTraceEventScope aDStack_a8 [16];
  undefined8 local_98;
  long *local_90;
  TimedHistogram *local_88;
  Isolate *local_80;
  uint local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_98 = 0;
  uVar6 = SelectGarbageCollector(this,param_2,&local_98);
  this[0xadc] = (Heap)((byte)(param_4 >> 2) & 1);
  if (0x17 < param_3) {
switchD_00f8c0a8_caseD_0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pcVar1 = "MinorGC";
  if ((uVar6 & 0xfffffffd) != 0) {
    pcVar1 = "MajorGC";
  }
  DevToolsTraceEventScope::DevToolsTraceEventScope
            (aDStack_a8,this,pcVar1,(&PTR_s_unknown_018904fa_0xb_01ca7ec0)[(int)param_3]);
  uVar12 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
  lVar8 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  lVar9 = (**(code **)(**(long **)(this + 0x118) + 0x48))(*(long **)(this + 0x118));
  uVar12 = CanExpandOldGeneration(this,lVar9 + (uVar12 >> 0x12) * lVar8);
  if ((uVar12 & 1) == 0) {
    InvokeNearHeapLimitCallback(this);
  }
  this_00 = (Isolate *)(this + -0x8850);
  GlobalHandles::InvokeSecondPassPhantomCallbacks(*(GlobalHandles **)(this + 0xd90));
  uVar2 = *(undefined4 *)(this + -0x5bf0);
  *(undefined4 *)(this + -0x5bf0) = 1;
  puVar13 = *(undefined4 **)(*(long *)(this + 0xe8) + 0x68);
  if (((*(undefined4 **)(((ulong)(puVar13 + -1) & 0xfffffffffffc0000) + 0x20) <= puVar13) &&
      (puVar14 = *(undefined4 **)(((ulong)(puVar13 + -1) & 0xfffffffffffc0000) + 0x28),
      puVar13 < puVar14)) && (iVar16 = (int)puVar14 - (int)puVar13, iVar16 != 0)) {
    if (iVar16 == 8) {
      *puVar13 = *(undefined4 *)(this + -0x87c0);
    }
    else if (iVar16 == 4) {
      *puVar13 = *(undefined4 *)(this + -0x87c8);
    }
    else {
      *puVar13 = *(undefined4 *)(this + -0x87d0);
      puVar13[1] = iVar16 * 2;
    }
  }
  if ((((uVar6 & 0xfffffffd) == 0) && (*(int *)(*(long *)(this + 0x828) + 0x58) != 0)) &&
     (FLAG_trace_incremental_marking != '\0')) {
    Isolate::PrintWithTimestamp((char *)this_00,"[IncrementalMarking] Scavenge during marking.\n");
  }
  if ((uVar6 == 1) && (*(long *)(this + 0xe8) != 0)) {
    plVar10 = *(long **)(this + 0xf0);
    if (plVar10 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      uVar7 = 3;
LAB_00f8c074:
      do {
        lVar9 = (**(code **)(*plVar10 + 0x38))();
        lVar8 = lVar9 + lVar8;
        if (4 < uVar7) break;
        switch(uVar7) {
        default:
          goto switchD_00f8c0a8_caseD_0;
        case 2:
          plVar10 = *(long **)(this + 0xf0);
          uVar7 = uVar7 + 1;
          if (plVar10 == (long *)0x0) goto LAB_00f8c0dc;
          goto LAB_00f8c074;
        case 3:
          plVar10 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar10 = *(long **)(this + 0x100);
        }
        uVar7 = uVar7 + 1;
      } while (plVar10 != (long *)0x0);
    }
LAB_00f8c0dc:
    lVar9 = (**(code **)(**(long **)(this + 0x108) + 0x48))();
    lVar11 = (**(code **)(**(long **)(this + 0x110) + 0x48))(*(long **)(this + 0x110));
    local_e8 = lVar9 + lVar8 + lVar11;
  }
  else {
    local_e8 = 0;
  }
  GCTracer::Start(*(GCTracer **)(this + 0x7f8),uVar6,param_3,local_98);
  GarbageCollectionPrologue(this);
  if ((uVar6 & 0xfffffffd) == 0) {
    local_b0 = *(Isolate **)(this + 0x30);
    this_01 = (TimedHistogram *)(*(long *)(local_b0 + 0x9520) + 0xdc0);
  }
  else if (*(int *)(*(long *)(this + 0x828) + 0x58) == 0) {
    local_b0 = *(Isolate **)(this + 0x30);
    this_01 = (TimedHistogram *)(*(long *)(local_b0 + 0x9520) + 0xc10);
  }
  else {
    local_b0 = *(Isolate **)(this + 0x30);
    if (((byte)this[0xad4] & 1) == 0) {
      this_01 = (TimedHistogram *)(*(long *)(local_b0 + 0x9520) + 0xca0);
    }
    else {
      this_01 = (TimedHistogram *)(*(long *)(local_b0 + 0x9520) + 0xd30);
    }
  }
  local_c0 = 0;
  local_b8 = this_01;
  TimedHistogram::Start(this_01,(ElapsedTimer *)&local_c0,local_b0);
  if (DAT_01d3f070 == (byte *)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f070 = (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,&DAT_019c38f7);
  }
  pbVar4 = DAT_01d3f070;
  local_e0 = (byte **)0x0;
  if ((*DAT_01d3f070 & 5) != 0) {
    uVar17 = *(undefined8 *)this_01;
    local_90 = (long *)0x0;
    local_88 = (TimedHistogram *)0x0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar17 = (**(code **)(*plVar10 + 0x18))(plVar10,0x58,pbVar4,uVar17,0,0,0,0,0,0,0,&local_90,0);
    pTVar5 = local_88;
    local_88 = (TimedHistogram *)0x0;
    if (pTVar5 != (TimedHistogram *)0x0) {
      (**(code **)(*(long *)pTVar5 + 8))();
    }
    plVar10 = local_90;
    local_90 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_d0 = *(long *)this_01;
    local_e0 = &local_d8;
    local_d8 = pbVar4;
    local_c8 = uVar17;
  }
  if ((uVar6 & 0xfffffffd) == 0) {
    local_80 = *(Isolate **)(this + 0x30);
    if (local_80[0xb6bc] == (Isolate)0x0) {
      local_88 = (TimedHistogram *)(*(long *)(local_80 + 0x9520) + 0xe20);
    }
    else {
      local_88 = (TimedHistogram *)(*(long *)(local_80 + 0x9520) + 0xdf0);
    }
  }
  else if (*(int *)(*(long *)(this + 0x828) + 0x58) == 0) {
    local_80 = *(Isolate **)(this + 0x30);
    if (local_80[0xb6bc] == (Isolate)0x0) {
      local_88 = (TimedHistogram *)(*(long *)(local_80 + 0x9520) + 0xc70);
    }
    else {
      local_88 = (TimedHistogram *)(*(long *)(local_80 + 0x9520) + 0xc40);
    }
  }
  else {
    local_80 = *(Isolate **)(this + 0x30);
    lVar8 = *(long *)(local_80 + 0x9520);
    if (((byte)this[0xad4] & 1) == 0) {
      if (local_80[0xb6bc] == (Isolate)0x0) {
        local_88 = (TimedHistogram *)(lVar8 + 0xd00);
      }
      else {
        local_88 = (TimedHistogram *)(lVar8 + 0xcd0);
      }
    }
    else if (local_80[0xb6bc] == (Isolate)0x0) {
      local_88 = (TimedHistogram *)(lVar8 + 0xd90);
    }
    else {
      local_88 = (TimedHistogram *)(lVar8 + 0xd60);
    }
  }
  local_90 = (long *)0x0;
  local_78 = (uint)(byte)local_80[0xb6bd];
  if (local_78 == 0) {
    TimedHistogram::Start(local_88,(ElapsedTimer *)&local_90,local_80);
  }
  uVar7 = PerformGarbageCollection(this,uVar6,param_4);
  if (uVar6 < 2) {
    GCTracer::RecordGCPhasesHistograms(*(GCTracer **)(this + 0x7f8),this_01);
  }
  if (local_78 == 0) {
    TimedHistogram::Stop(local_88,(ElapsedTimer *)&local_90,local_80);
  }
  if ((local_e0 != (byte **)0x0) && (*local_d8 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,local_d8,local_d0,local_c8);
  }
  TimedHistogram::Stop(local_b8,(ElapsedTimer *)&local_c0,local_b0);
  this[0xadc] = (Heap)0x0;
  GarbageCollectionEpilogue(this);
  if ((FLAG_track_detached_contexts != '\0') && (uVar6 == 1)) {
    Isolate::CheckDetachedContextsAfterGC(this_00);
  }
  if (uVar6 == 1) {
    if (*(long *)(this + 0xe8) == 0) {
      lVar8 = 0;
      plVar10 = *(long **)(this + 0xf0);
    }
    else {
      plVar10 = *(long **)(this + 0xf0);
      if (plVar10 == (long *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar6 = 3;
LAB_00f8c410:
        do {
          lVar8 = (**(code **)(*plVar10 + 0x38))();
          lVar9 = lVar8 + lVar9;
          if (4 < uVar6) break;
          switch(uVar6) {
          default:
            goto switchD_00f8c0a8_caseD_0;
          case 2:
            plVar10 = *(long **)(this + 0xf0);
            uVar6 = uVar6 + 1;
            if (plVar10 == (long *)0x0) goto LAB_00f8c490;
            goto LAB_00f8c410;
          case 3:
            plVar10 = *(long **)(this + 0xf8);
            break;
          case 4:
            plVar10 = *(long **)(this + 0x100);
          }
          uVar6 = uVar6 + 1;
        } while (plVar10 != (long *)0x0);
      }
LAB_00f8c490:
      lVar11 = (**(code **)(**(long **)(this + 0x108) + 0x48))();
      lVar8 = (**(code **)(**(long **)(this + 0x110) + 0x48))(*(long **)(this + 0x110));
      lVar8 = lVar11 + lVar9 + lVar8;
      plVar10 = *(long **)(this + 0xf0);
    }
    if (plVar10 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      iVar16 = 3;
LAB_00f8c4cc:
      do {
        lVar11 = (**(code **)(*plVar10 + 0x50))();
        lVar9 = lVar11 + lVar9;
        switch(iVar16) {
        case 0:
        case 1:
          goto switchD_00f8c0a8_caseD_0;
        case 2:
          plVar10 = *(long **)(this + 0xf0);
          iVar16 = iVar16 + 1;
          if (plVar10 == (long *)0x0) goto switchD_00f8c4fc_default;
          goto LAB_00f8c4cc;
        case 3:
          plVar10 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar10 = *(long **)(this + 0x100);
          break;
        default:
          goto switchD_00f8c4fc_default;
        }
        iVar16 = iVar16 + 1;
      } while (plVar10 != (long *)0x0);
    }
switchD_00f8c4fc_default:
    lVar11 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    bVar15 = true;
    uVar12 = lVar11 + lVar9;
    plVar10 = (long *)V8::GetCurrentPlatform();
    dVar18 = (double)(**(code **)(*plVar10 + 0x78))();
    local_d8 = (byte *)(dVar18 * 1000.0);
    if (local_e8 <= lVar8 + 0x100000U) {
      if (uVar12 + 0x1000000 < lVar8 - uVar12) {
        bVar15 = true;
      }
      else {
        bVar15 = 1 < *(int *)(*(long *)(this + -0x78e8) + 7);
      }
    }
    local_c8 = CONCAT71(local_c8._1_7_,bVar15);
    local_d0 = lVar8;
    if (this[0xb44] != (Heap)0x0) {
      MemoryReducer::NotifyMarkCompact(*(Event **)(this + 0x848));
    }
    if ((*(ulong *)(this + 0x70) < *(ulong *)(this + 0x58)) && (uVar12 < *(ulong *)(this + 0x78))) {
      *(ulong *)(this + 0x58) = *(ulong *)(this + 0x70);
    }
    GCTracer::Stop(*(GCTracer **)(this + 0x7f8),1);
    if ((param_4 & 0x14) != 0) {
      Isolate::CountUsage(this_00,7);
    }
    bVar15 = true;
  }
  else {
    GCTracer::Stop(*(GCTracer **)(this + 0x7f8),uVar6);
    bVar15 = (uVar6 & 0xfffffffd) != 0;
  }
  if (!bVar15) {
    if ((((FLAG_optimize_for_size == '\0') && (this[0x2e6c] == (Heap)0x0)) &&
        (this[0x2e6d] == (Heap)0x0)) && (*(int *)(this + 0xc0) == 0)) {
      uVar6 = CanExpandOldGeneration(this,*(ulong *)(this + 0x58) >> 3);
      uVar6 = ~uVar6 & 1;
    }
    else {
      uVar6 = 1;
    }
    StartIncrementalMarkingIfAllocationLimitIsReached(this,uVar6,0x40);
  }
  *(undefined4 *)(this + -0x5bf0) = uVar2;
  DevToolsTraceEventScope::~DevToolsTraceEventScope(aDStack_a8);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

