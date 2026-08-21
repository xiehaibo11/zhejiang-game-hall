
/* v8::internal::MarkCompactCollector::ClearNonLiveReferences() */

void __thiscall
v8::internal::MarkCompactCollector::ClearNonLiveReferences(MarkCompactCollector *this)

{
  byte *pbVar1;
  undefined **ppuVar2;
  MarkCompactCollector *pMVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **local_128;
  long lStack_120;
  undefined **local_118;
  MarkCompactCollector *local_110;
  int local_108;
  long local_100;
  long local_f8;
  byte **local_f0;
  byte *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  Scope aSStack_d0 [64];
  byte **local_90;
  byte *local_88;
  undefined8 local_80;
  undefined8 local_78;
  Scope aSStack_70 [64];
  
  GCTracer::Scope::Scope(aSStack_70,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x11);
  if (DAT_01d3f1f0 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1f0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1f0;
  local_90 = (byte **)0x0;
  if ((*DAT_01d3f1f0 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x11);
    local_118 = (undefined **)0x0;
    local_110 = (MarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MarkCompactCollector *)0x0;
    if (pMVar3 != (MarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_80 = GCTracer::Scope::Name(0x11);
    local_90 = &local_88;
    local_88 = pbVar1;
    local_78 = uVar5;
  }
  GCTracer::Scope::Scope(aSStack_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x1e);
  if (DAT_01d3f1f8 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1f8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1f8;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f1f8 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x1e);
    local_118 = (undefined **)0x0;
    local_110 = (MarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MarkCompactCollector *)0x0;
    if (pMVar3 != (MarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_e0 = GCTracer::Scope::Name(0x1e);
    local_f0 = &local_e8;
    local_e8 = pbVar1;
    local_d8 = uVar5;
  }
  local_110 = *(MarkCompactCollector **)(this + 8);
  local_100 = *(long *)((long)local_110 + -0x7880);
  local_118 = &PTR__ObjectVisitor_01ca8488;
  local_108 = 0;
  local_f8 = local_100;
  HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::IterateElements
            ((HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *)&local_f8,
             (ObjectVisitor *)&local_118);
  *(uint *)(local_f8 + 7) = *(uint *)(local_f8 + 7) + local_108 * -2 & 0xfffffffe;
  *(uint *)(local_f8 + 0xb) = *(uint *)(local_f8 + 0xb) + local_108 * 2 & 0xfffffffe;
  lStack_120 = *(long *)(this + 8);
  local_128 = &PTR__RootVisitor_01ca8520;
  Heap::ExternalStringTable::IterateAll
            ((ExternalStringTable *)(lStack_120 + 0xae0),(RootVisitor *)&local_128);
  Heap::ExternalStringTable::CleanUpAll((ExternalStringTable *)(*(long *)(this + 8) + 0xae0));
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  GCTracer::Scope::~Scope(aSStack_d0);
  GCTracer::Scope::Scope(aSStack_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x19);
  if (DAT_01d3f200 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f200 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f200;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f200 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x19);
    local_118 = (undefined **)0x0;
    local_110 = (MarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MarkCompactCollector *)0x0;
    if (pMVar3 != (MarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_e0 = GCTracer::Scope::Name(0x19);
    local_f0 = &local_e8;
    local_e8 = pbVar1;
    local_d8 = uVar5;
  }
  ClearOldBytecodeCandidates(this);
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  GCTracer::Scope::~Scope(aSStack_d0);
  GCTracer::Scope::Scope(aSStack_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x1a);
  if (DAT_01d3f208 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f208 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f208;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f208 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x1a);
    local_118 = (undefined **)0x0;
    local_110 = (MarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MarkCompactCollector *)0x0;
    if (pMVar3 != (MarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_e0 = GCTracer::Scope::Name(0x1a);
    local_f0 = &local_e8;
    local_e8 = pbVar1;
    local_d8 = uVar5;
  }
  local_118 = (undefined **)0x0;
  while (uVar6 = Worklist<v8::internal::JSFunction,64>::Pop
                           ((Worklist<v8::internal::JSFunction,64> *)(this + 0x23b0),0,
                            (JSFunction *)&local_118), (uVar6 & 1) != 0) {
    JSFunction::ResetIfBytecodeFlushed((JSFunction *)&local_118);
  }
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  GCTracer::Scope::~Scope(aSStack_d0);
  GCTracer::Scope::Scope(aSStack_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x20);
  if (DAT_01d3f210 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f210 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f210;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f210 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x20);
    local_118 = (undefined **)0x0;
    local_110 = (MarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MarkCompactCollector *)0x0;
    if (pMVar3 != (MarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_e0 = GCTracer::Scope::Name(0x20);
    local_f0 = &local_e8;
    local_e8 = pbVar1;
    local_d8 = uVar5;
  }
  local_110 = this + 0x2701;
  local_118 = &PTR__WeakObjectRetainer_01ca8558;
  Heap::ProcessAllWeakReferences(*(Heap **)(this + 8),(WeakObjectRetainer *)&local_118);
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  GCTracer::Scope::~Scope(aSStack_d0);
  GCTracer::Scope::Scope(aSStack_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x1b);
  if (DAT_01d3f218 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f218 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f218;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f218 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x1b);
    local_118 = (undefined **)0x0;
    local_110 = (MarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MarkCompactCollector *)0x0;
    if (pMVar3 != (MarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_e0 = GCTracer::Scope::Name(0x1b);
    local_f0 = &local_e8;
    local_e8 = pbVar1;
    local_d8 = uVar5;
  }
  ClearFullMapTransitions(this);
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  GCTracer::Scope::~Scope(aSStack_d0);
  GCTracer::Scope::Scope(aSStack_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x21);
  if (DAT_01d3f220 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f220 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f220;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f220 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x21);
    local_118 = (undefined **)0x0;
    local_110 = (MarkCompactCollector *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar1,uVar5,0,0,0,0,0,0,0,&local_118,0);
    pMVar3 = local_110;
    local_110 = (MarkCompactCollector *)0x0;
    if (pMVar3 != (MarkCompactCollector *)0x0) {
      (**(code **)(*(long *)pMVar3 + 8))();
    }
    ppuVar2 = local_118;
    local_118 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_e0 = GCTracer::Scope::Name(0x21);
    local_f0 = &local_e8;
    local_e8 = pbVar1;
    local_d8 = uVar5;
  }
  ClearWeakReferences(this);
  ClearWeakCollections(this);
  ClearJSWeakRefs(this);
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  GCTracer::Scope::~Scope(aSStack_d0);
  MarkDependentCodeForDeoptimization(this);
  if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_88,local_80,local_78);
  }
  GCTracer::Scope::~Scope(aSStack_70);
  return;
}

