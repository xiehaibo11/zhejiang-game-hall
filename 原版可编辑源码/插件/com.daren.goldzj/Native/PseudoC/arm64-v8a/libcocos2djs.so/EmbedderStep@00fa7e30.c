
/* v8::internal::IncrementalMarking::EmbedderStep(double) */

byte __thiscall
v8::internal::IncrementalMarking::EmbedderStep(IncrementalMarking *this,double param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  byte **local_90;
  byte *local_88;
  undefined8 local_80;
  undefined8 local_78;
  Scope aSStack_70 [64];
  
  bVar6 = 0;
  if ((*(int *)(this + 0x58) == 2) && (FLAG_incremental_marking_wrappers != '\0')) {
    if (*(long *)(*(long *)(*(long *)this + 0x870) + 8) == 0) {
      bVar6 = 0;
    }
    else {
      GCTracer::Scope::Scope(aSStack_70,*(undefined8 *)(*(long *)this + 0x7f8),2);
      if (DAT_01d3f138 == (byte *)0x0) {
        plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
        DAT_01d3f138 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
      }
      pbVar1 = DAT_01d3f138;
      local_90 = (byte **)0x0;
      if ((*DAT_01d3f138 & 5) != 0) {
        uVar3 = GCTracer::Scope::Name(2);
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
        local_80 = GCTracer::Scope::Name(2);
        local_90 = &local_88;
        local_88 = pbVar1;
        local_78 = uVar3;
      }
      dVar8 = (double)Heap::MonotonicallyIncreasingTimeInMs();
      dVar8 = dVar8 + param_1;
      do {
        LocalEmbedderHeapTracer::ProcessingScope::ProcessingScope
                  ((ProcessingScope *)&local_b0,*(LocalEmbedderHeapTracer **)(*(long *)this + 0x870)
                  );
        lVar7 = 500;
        local_b8 = 0;
        do {
          uVar4 = Worklist<v8::internal::HeapObject,16>::Pop
                            ((Worklist<v8::internal::HeapObject,16> *)
                             (*(long *)(this + 0x10) + 0x570),0,(HeapObject *)&local_b8);
          if ((uVar4 & 1) == 0) {
            LocalEmbedderHeapTracer::ProcessingScope::~ProcessingScope((ProcessingScope *)&local_b0)
            ;
            LocalEmbedderHeapTracer::Trace(dVar8);
            bVar5 = 1;
            goto LAB_00fa8004;
          }
          LocalEmbedderHeapTracer::ProcessingScope::TracePossibleWrapper
                    ((ProcessingScope *)&local_b0,local_b8);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        LocalEmbedderHeapTracer::ProcessingScope::~ProcessingScope((ProcessingScope *)&local_b0);
        LocalEmbedderHeapTracer::Trace(dVar8);
        dVar9 = (double)Heap::MonotonicallyIncreasingTimeInMs();
      } while (dVar9 < dVar8);
      bVar5 = 0;
LAB_00fa8004:
      bVar6 = bVar5 ^ 1;
      *(byte *)(*(long *)(*(long *)this + 0x870) + 0x1c) = bVar5;
      if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
        plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
      }
      GCTracer::Scope::~Scope(aSStack_70);
    }
  }
  return bVar6;
}

