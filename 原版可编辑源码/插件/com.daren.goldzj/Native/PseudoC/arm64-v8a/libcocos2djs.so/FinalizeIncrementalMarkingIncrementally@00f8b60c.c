
/* v8::internal::Heap::FinalizeIncrementalMarkingIncrementally(v8::internal::GarbageCollectionReason)
    */

void __thiscall v8::internal::Heap::FinalizeIncrementalMarkingIncrementally(Heap *this,uint param_2)

{
  Heap *pHVar1;
  Heap *pHVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  RuntimeCallStats *pRVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  Isolate *pIVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  byte **local_180;
  byte *local_178;
  undefined8 local_170;
  undefined8 local_168;
  Scope aSStack_160 [64];
  byte **local_120;
  byte *local_118;
  undefined8 local_110;
  undefined8 local_108;
  Scope aSStack_100 [64];
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  DevToolsTraceEventScope aDStack_a0 [16];
  RuntimeCallStats *local_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pHVar1 = this + -0x8850;
  if (FLAG_trace_incremental_marking != '\0') {
    if (0x17 < param_2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    Isolate::PrintWithTimestamp
              ((char *)pHVar1,"[IncrementalMarking] (%s).\n",
               (&PTR_s_unknown_018904fa_0xb_01ca7ec0)[(int)param_2]);
  }
  DevToolsTraceEventScope::DevToolsTraceEventScope
            (aDStack_a0,this,"MajorGC","incremental finalization step");
  pHVar2 = this + 0xcd0;
  lVar14 = *(long *)pHVar2;
  TimedHistogram::Start
            ((TimedHistogram *)(lVar14 + 0x9a8),(ElapsedTimer *)(lVar14 + 0x9d8),
             *(Isolate **)(*(long *)(lVar14 + 0x9c8) + 0x10));
  if (DAT_01d3f0c8 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0c8 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,&DAT_019c38f7);
  }
  pbVar6 = DAT_01d3f0c8;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d3f0c8 & 5) != 0) {
    local_90 = (RuntimeCallStats *)0x0;
    plStack_88 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar6,"V8.GCIncrementalMarkingFinalize",0,0,0,0,0,0,0,&local_90,
                       0);
    plVar8 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pRVar7 = local_90;
    local_90 = (RuntimeCallStats *)0x0;
    if (pRVar7 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar7 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.GCIncrementalMarkingFinalize";
    local_b8 = pbVar6;
    local_a8 = uVar9;
  }
  GCTracer::Scope::Scope(aSStack_100,*(undefined8 *)(this + 0x7f8),5);
  if (DAT_01d3f0d0 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0d0 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar6 = DAT_01d3f0d0;
  local_120 = (byte **)0x0;
  if ((*DAT_01d3f0d0 & 5) != 0) {
    uVar9 = GCTracer::Scope::Name(5);
    local_90 = (RuntimeCallStats *)0x0;
    plStack_88 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar6,uVar9,0,0,0,0,0,0,0,&local_90,0);
    plVar8 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pRVar7 = local_90;
    local_90 = (RuntimeCallStats *)0x0;
    if (pRVar7 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar7 + 8))();
    }
    local_110 = GCTracer::Scope::Name(5);
    local_120 = &local_118;
    local_118 = pbVar6;
    local_108 = uVar9;
  }
  iVar4 = *(int *)(this + 0xb40);
  iVar10 = iVar4 + 1;
  *(int *)(this + 0xb40) = iVar10;
  if (iVar4 == 0) {
    GCTracer::Scope::Scope(aSStack_160,*(undefined8 *)(this + 0x7f8),4);
    if (DAT_01d3f0d8 == (byte *)0x0) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f0d8 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
    }
    pbVar6 = DAT_01d3f0d8;
    local_180 = (byte **)0x0;
    if ((*DAT_01d3f0d8 & 5) != 0) {
      uVar9 = GCTracer::Scope::Name(4);
      local_90 = (RuntimeCallStats *)0x0;
      plStack_88 = (long *)0x0;
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar6,uVar9,0,0,0,0,0,0,0,&local_90,0);
      plVar8 = plStack_88;
      plStack_88 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      pRVar7 = local_90;
      local_90 = (RuntimeCallStats *)0x0;
      if (pRVar7 != (RuntimeCallStats *)0x0) {
        (**(code **)(*(long *)pRVar7 + 8))();
      }
      local_170 = GCTracer::Scope::Name(4);
      local_180 = &local_178;
      local_178 = pbVar6;
      local_168 = uVar9;
    }
    lVar13 = *(long *)(this + 0x30);
    uVar5 = *(undefined4 *)(lVar13 + 0x2c60);
    *(undefined4 *)(lVar13 + 0x2c60) = 6;
    pIVar12 = *(Isolate **)(this + 0x30);
    uVar9 = *(undefined8 *)(pIVar12 + 0x95a0);
    lVar3 = *(long *)(pIVar12 + 0x95a8);
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
    local_70 = 0;
    plStack_88 = (long *)0x0;
    local_90 = (RuntimeCallStats *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (TracingFlags::runtime_stats != 0) {
      local_90 = (RuntimeCallStats *)(*(long *)pHVar2 + 0x58a0);
      RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x8a);
    }
    puVar15 = *(undefined8 **)(this + 0x618);
    for (puVar11 = *(undefined8 **)(this + 0x610); puVar11 != puVar15; puVar11 = puVar11 + 3) {
      if ((*(byte *)(puVar11 + 1) >> 2 & 1) != 0) {
        (*(code *)*puVar11)(pHVar1,4,0,puVar11[2]);
      }
    }
    if (local_90 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    }
    if (pIVar12 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar12 + 0x95a0) = uVar9;
      *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
      if (*(long *)(pIVar12 + 0x95a8) != lVar3) {
        *(long *)(pIVar12 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(pIVar12);
      }
    }
    *(undefined4 *)(lVar13 + 0x2c60) = uVar5;
    if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar8 + 0x28))(plVar8,local_178,local_170,local_168);
    }
    GCTracer::Scope::~Scope(aSStack_160);
    iVar10 = *(int *)(this + 0xb40);
  }
  *(int *)(this + 0xb40) = iVar10 + -1;
  IncrementalMarking::FinalizeIncrementally(*(IncrementalMarking **)(this + 0x828));
  iVar4 = *(int *)(this + 0xb40);
  iVar10 = iVar4 + 1;
  *(int *)(this + 0xb40) = iVar10;
  if (iVar4 == 0) {
    GCTracer::Scope::Scope(aSStack_160,*(undefined8 *)(this + 0x7f8),3);
    if (DAT_01d3f0e0 == (byte *)0x0) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f0e0 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
    }
    pbVar6 = DAT_01d3f0e0;
    local_180 = (byte **)0x0;
    if ((*DAT_01d3f0e0 & 5) != 0) {
      uVar9 = GCTracer::Scope::Name(3);
      local_90 = (RuntimeCallStats *)0x0;
      plStack_88 = (long *)0x0;
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar6,uVar9,0,0,0,0,0,0,0,&local_90,0);
      plVar8 = plStack_88;
      plStack_88 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      pRVar7 = local_90;
      local_90 = (RuntimeCallStats *)0x0;
      if (pRVar7 != (RuntimeCallStats *)0x0) {
        (**(code **)(*(long *)pRVar7 + 8))();
      }
      local_170 = GCTracer::Scope::Name(3);
      local_180 = &local_178;
      local_178 = pbVar6;
      local_168 = uVar9;
    }
    lVar13 = *(long *)(this + 0x30);
    uVar5 = *(undefined4 *)(lVar13 + 0x2c60);
    *(undefined4 *)(lVar13 + 0x2c60) = 6;
    pIVar12 = *(Isolate **)(this + 0x30);
    uVar9 = *(undefined8 *)(pIVar12 + 0x95a0);
    lVar3 = *(long *)(pIVar12 + 0x95a8);
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
    local_70 = 0;
    plStack_88 = (long *)0x0;
    local_90 = (RuntimeCallStats *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (TracingFlags::runtime_stats != 0) {
      local_90 = (RuntimeCallStats *)(*(long *)pHVar2 + 0x58a0);
      RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x89);
    }
    puVar15 = *(undefined8 **)(this + 0x600);
    for (puVar11 = *(undefined8 **)(this + 0x5f8); puVar11 != puVar15; puVar11 = puVar11 + 3) {
      if ((*(byte *)(puVar11 + 1) >> 2 & 1) != 0) {
        (*(code *)*puVar11)(pHVar1,4,0,puVar11[2]);
      }
    }
    if (local_90 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    }
    if (pIVar12 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar12 + 0x95a0) = uVar9;
      *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
      if (*(long *)(pIVar12 + 0x95a8) != lVar3) {
        *(long *)(pIVar12 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(pIVar12);
      }
    }
    *(undefined4 *)(lVar13 + 0x2c60) = uVar5;
    if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar8 + 0x28))(plVar8,local_178,local_170,local_168);
    }
    GCTracer::Scope::~Scope(aSStack_160);
    iVar10 = *(int *)(this + 0xb40);
  }
  *(int *)(this + 0xb40) = iVar10 + -1;
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_118,local_110,local_108);
  }
  GCTracer::Scope::~Scope(aSStack_100);
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_b8,local_b0,local_a8);
  }
  TimedHistogram::Stop
            ((TimedHistogram *)(lVar14 + 0x9a8),(ElapsedTimer *)(lVar14 + 0x9d8),
             *(Isolate **)(*(long *)(lVar14 + 0x9c8) + 0x10));
  DevToolsTraceEventScope::~DevToolsTraceEventScope(aDStack_a0);
  return;
}

