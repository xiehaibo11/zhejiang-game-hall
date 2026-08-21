
/* v8::internal::MarkCompactCollector::PerformWrapperTracing() */

void __thiscall
v8::internal::MarkCompactCollector::PerformWrapperTracing(MarkCompactCollector *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *local_b0;
  long *local_a8;
  byte **local_90;
  byte *local_88;
  undefined8 local_80;
  undefined8 local_78;
  Scope aSStack_70 [64];
  undefined8 local_18;
  
  if (*(long *)(*(long *)(*(long *)(this + 8) + 0x870) + 8) != 0) {
    GCTracer::Scope::Scope(aSStack_70,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x30);
    if (DAT_01d3f190 == (byte *)0x0) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f190 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
    }
    pbVar1 = DAT_01d3f190;
    local_90 = (byte **)0x0;
    if ((*DAT_01d3f190 & 5) != 0) {
      uVar3 = GCTracer::Scope::Name(0x30);
      local_b0 = (long *)0x0;
      local_a8 = (long *)0x0;
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x58,pbVar1,uVar3,0,0,0,0,0,0,0,&local_b0,0);
      plVar2 = local_a8;
      local_a8 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = local_b0;
      local_b0 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      local_80 = GCTracer::Scope::Name(0x30);
      local_90 = &local_88;
      local_88 = pbVar1;
      local_78 = uVar3;
    }
    LocalEmbedderHeapTracer::ProcessingScope::ProcessingScope
              ((ProcessingScope *)&local_b0,
               *(LocalEmbedderHeapTracer **)(*(long *)(this + 8) + 0x870));
    local_18 = 0;
    while (uVar4 = Worklist<v8::internal::HeapObject,16>::Pop
                             ((Worklist<v8::internal::HeapObject,16> *)(this + 0x5c8),0,
                              (HeapObject *)&local_18), (uVar4 & 1) != 0) {
      LocalEmbedderHeapTracer::ProcessingScope::TracePossibleWrapper
                ((ProcessingScope *)&local_b0,local_18);
    }
    LocalEmbedderHeapTracer::ProcessingScope::~ProcessingScope((ProcessingScope *)&local_b0);
    LocalEmbedderHeapTracer::Trace(INFINITY);
    if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
    }
    GCTracer::Scope::~Scope(aSStack_70);
  }
  return;
}

