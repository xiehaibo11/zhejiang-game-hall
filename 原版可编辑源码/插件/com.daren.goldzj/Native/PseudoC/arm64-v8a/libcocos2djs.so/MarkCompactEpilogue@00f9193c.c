
/* v8::internal::Heap::MarkCompactEpilogue() */

void __thiscall v8::internal::Heap::MarkCompactEpilogue(Heap *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Scope aSStack_80 [64];
  long *local_40;
  long *local_38;
  
  GCTracer::Scope::Scope(aSStack_80,*(undefined8 *)(this + 0x7f8),0x12);
  if (DAT_01d3f0a8 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0a8 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f0a8;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f0a8 & 5) != 0) {
    uVar3 = GCTracer::Scope::Name(0x12);
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
    local_90 = GCTracer::Scope::Name(0x12);
    local_a0 = &local_98;
    local_98 = pbVar1;
    local_88 = uVar3;
  }
  *(undefined4 *)(this + 0x178) = 0;
  lVar5 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  if (*(char *)(lVar5 + 0x1898) == '\0') {
    *(char *)(lVar5 + 0x1898) = '\x01';
    puVar4 = (undefined4 *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar5 + 0x1880));
    *(undefined4 **)(lVar5 + 0x1890) = puVar4;
  }
  else {
    puVar4 = *(undefined4 **)(lVar5 + 0x1890);
  }
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
  }
  IncrementalMarking::Epilogue(*(IncrementalMarking **)(this + 0x828));
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_98,local_90,local_88);
  }
  GCTracer::Scope::~Scope(aSStack_80);
  return;
}

