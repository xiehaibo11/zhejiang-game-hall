
/* v8::Isolate::LowMemoryNotification() */

void __thiscall v8::Isolate::LowMemoryNotification(Isolate *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  byte **local_88;
  byte *local_80;
  char *local_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  
  lVar5 = *(long *)(this + 0x9520);
  internal::TimedHistogram::Start
            ((TimedHistogram *)(lVar5 + 0x9e0),(ElapsedTimer *)(lVar5 + 0xa10),
             *(Isolate **)(*(long *)(lVar5 + 0xa00) + 0x10));
  if (DAT_01d3eb88 == (byte *)0x0) {
    plVar2 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb88 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,&DAT_019c38f7);
  }
  pbVar1 = DAT_01d3eb88;
  local_88 = (byte **)0x0;
  if ((*DAT_01d3eb88 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar2 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"V8.GCLowMemoryNotification",0,0,0,0,0,0,0,&local_60,0);
    plVar2 = local_58;
    local_58 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_60;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_88 = &local_80;
    local_78 = "V8.GCLowMemoryNotification";
    local_80 = pbVar1;
    local_70 = uVar3;
  }
  internal::Heap::CollectAllAvailableGarbage((Heap *)(this + 0x8850),0xe);
  if ((local_88 != (byte **)0x0) && (*local_80 != 0)) {
    plVar2 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_80,local_78,local_70);
  }
  internal::TimedHistogram::Stop
            ((TimedHistogram *)(lVar5 + 0x9e0),(ElapsedTimer *)(lVar5 + 0xa10),
             *(Isolate **)(*(long *)(lVar5 + 0xa00) + 0x10));
  internal::HeapObjectIterator::HeapObjectIterator
            ((HeapObjectIterator *)&local_88,(Heap *)(this + 0x8850),0);
  while (plVar2 = (long *)internal::HeapObjectIterator::Next((HeapObjectIterator *)&local_88),
        (int)plVar2 != 0) {
    uVar4 = (ulong)plVar2 & 0xffffffff00000000 | 7;
    if ((*(short *)(uVar4 + *(uint *)((long)plVar2 - 1)) == 0x86) ||
       (*(short *)(uVar4 + *(uint *)((long)plVar2 - 1)) == 0x9a)) {
      local_60 = plVar2;
      internal::AbstractCode::DropStackFrameCache((AbstractCode *)&local_60);
    }
  }
  internal::HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)&local_88);
  return;
}

