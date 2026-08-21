
/* v8::internal::MinorMarkCompactCollector::MarkLiveObjects() */

void __thiscall
v8::internal::MinorMarkCompactCollector::MarkLiveObjects(MinorMarkCompactCollector *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  byte **local_140;
  byte *local_138;
  undefined8 local_130;
  undefined8 local_128;
  Scope aSStack_120 [64];
  undefined **local_e0;
  MinorMarkCompactCollector *local_d8;
  undefined **local_d0;
  StackGuard *local_c8;
  int local_b0;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Scope aSStack_80 [64];
  long *local_40;
  long *local_38;
  
  GCTracer::Scope::Scope(aSStack_80,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x4f);
  if (DAT_01d3f308 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f308 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f308;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f308 & 5) != 0) {
    uVar3 = GCTracer::Scope::Name(0x4f);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x58,pbVar1,uVar3,0,0,0,0,0,0,0,&local_40,0);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_90 = GCTracer::Scope::Name(0x4f);
    local_a0 = &local_98;
    local_98 = pbVar1;
    local_88 = uVar3;
  }
  InterruptsScope::InterruptsScope
            ((InterruptsScope *)&local_d0,*(long *)(this + 8) + -0x8850,0xff,0);
  local_d0 = &PTR__InterruptsScope_01c98490;
  local_e0 = &PTR__RootVisitor_01ca8b80;
  local_d8 = this;
  MarkRootSetInParallel(this,(RootMarkingVisitor *)&local_e0);
  GCTracer::Scope::Scope(aSStack_120,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x54);
  if (DAT_01d3f310 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f310 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f310;
  local_140 = (byte **)0x0;
  if ((*DAT_01d3f310 & 5) != 0) {
    uVar3 = GCTracer::Scope::Name(0x54);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x58,pbVar1,uVar3,0,0,0,0,0,0,0,&local_40,0);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_130 = GCTracer::Scope::Name(0x54);
    local_140 = &local_138;
    local_138 = pbVar1;
    local_128 = uVar3;
  }
  DrainMarkingWorklist(this);
  if ((local_140 != (byte **)0x0) && (*local_138 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_138,local_130,local_128);
  }
  GCTracer::Scope::~Scope(aSStack_120);
  GCTracer::Scope::Scope(aSStack_120,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x50);
  if (DAT_01d3f318 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f318 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f318;
  local_140 = (byte **)0x0;
  if ((*DAT_01d3f318 & 5) != 0) {
    uVar3 = GCTracer::Scope::Name(0x50);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x58,pbVar1,uVar3,0,0,0,0,0,0,0,&local_40,0);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_130 = GCTracer::Scope::Name(0x50);
    local_140 = &local_138;
    local_138 = pbVar1;
    local_128 = uVar3;
  }
  GlobalHandles::MarkYoungWeakUnmodifiedObjectsPending
            (*(GlobalHandles **)(*(long *)(this + 8) + 0xd90),FUN_00fd96a4);
  GlobalHandles::IterateYoungWeakUnmodifiedRootsForFinalizers
            (*(GlobalHandles **)(*(long *)(this + 8) + 0xd90),(RootVisitor *)&local_e0);
  GlobalHandles::IterateYoungWeakUnmodifiedRootsForPhantomHandles
            (*(GlobalHandles **)(*(long *)(this + 8) + 0xd90),(RootVisitor *)&local_e0,FUN_00fd96a4)
  ;
  DrainMarkingWorklist(this);
  if ((local_140 != (byte **)0x0) && (*local_138 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_138,local_130,local_128);
  }
  GCTracer::Scope::~Scope(aSStack_120);
  local_d0 = &PTR__InterruptsScope_01c984b0;
  if (local_b0 != 2) {
    StackGuard::PopInterruptsScope(local_c8);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_98,local_90,local_88);
  }
  GCTracer::Scope::~Scope(aSStack_80);
  return;
}

