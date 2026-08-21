
/* v8::internal::MinorMarkCompactCollector::ClearNonLiveReferences() */

void __thiscall
v8::internal::MinorMarkCompactCollector::ClearNonLiveReferences(MinorMarkCompactCollector *this)

{
  byte *pbVar1;
  undefined **ppuVar2;
  MinorMarkCompactCollector *pMVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined **local_118;
  MinorMarkCompactCollector *local_110;
  MinorMarkCompactCollector *pMStack_108;
  byte **local_100;
  byte *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  Scope aSStack_e0 [64];
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Scope aSStack_80 [64];
  
  GCTracer::Scope::Scope(aSStack_80,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x40);
  if (DAT_01d3f2e0 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2e0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f2e0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f2e0 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x40);
    local_118 = (undefined **)0x0;
    local_110 = (MinorMarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MinorMarkCompactCollector *)0x0;
    if (pMVar3 != (MinorMarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_90 = GCTracer::Scope::Name(0x40);
    local_a0 = &local_98;
    local_98 = pbVar1;
    local_88 = uVar5;
  }
  GCTracer::Scope::Scope(aSStack_e0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x41);
  if (DAT_01d3f2e8 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2e8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f2e8;
  local_100 = (byte **)0x0;
  if ((*DAT_01d3f2e8 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x41);
    local_118 = (undefined **)0x0;
    local_110 = (MinorMarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MinorMarkCompactCollector *)0x0;
    if (pMVar3 != (MinorMarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_f0 = GCTracer::Scope::Name(0x41);
    local_100 = &local_f8;
    local_f8 = pbVar1;
    local_e8 = uVar5;
  }
  local_118 = &PTR__RootVisitor_01ca8ac0;
  local_110 = *(MinorMarkCompactCollector **)(this + 8);
  pMStack_108 = this + 0x69;
  Heap::ExternalStringTable::IterateYoung
            ((ExternalStringTable *)((long)local_110 + 0xae0),(RootVisitor *)&local_118);
  Heap::ExternalStringTable::CleanUpYoung((ExternalStringTable *)(*(long *)(this + 8) + 0xae0));
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_f8,local_f0,local_e8);
  }
  GCTracer::Scope::~Scope(aSStack_e0);
  GCTracer::Scope::Scope(aSStack_e0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x42);
  if (DAT_01d3f2f0 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2f0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f2f0;
  local_100 = (byte **)0x0;
  if ((*DAT_01d3f2f0 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x42);
    local_118 = (undefined **)0x0;
    local_110 = (MinorMarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MinorMarkCompactCollector *)0x0;
    if (pMVar3 != (MinorMarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_f0 = GCTracer::Scope::Name(0x42);
    local_100 = &local_f8;
    local_f8 = pbVar1;
    local_e8 = uVar5;
  }
  local_118 = &PTR__WeakObjectRetainer_01ca8af8;
  local_110 = this + 0x69;
  Heap::ProcessYoungWeakReferences(*(Heap **)(this + 8),(WeakObjectRetainer *)&local_118);
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_f8,local_f0,local_e8);
  }
  GCTracer::Scope::~Scope(aSStack_e0);
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  GCTracer::Scope::~Scope(aSStack_80);
  return;
}

