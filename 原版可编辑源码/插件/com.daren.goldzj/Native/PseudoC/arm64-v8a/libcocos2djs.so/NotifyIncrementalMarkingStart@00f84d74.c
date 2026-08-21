
/* v8::internal::GCTracer::NotifyIncrementalMarkingStart() */

void __thiscall v8::internal::GCTracer::NotifyIncrementalMarkingStart(GCTracer *this)

{
  undefined8 uVar1;
  
  uVar1 = Heap::MonotonicallyIncreasingTimeInMs();
  *(undefined8 *)(this + 0x9c8) = uVar1;
  return;
}

