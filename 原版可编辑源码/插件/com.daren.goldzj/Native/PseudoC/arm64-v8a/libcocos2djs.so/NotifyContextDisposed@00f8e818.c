
/* v8::internal::Heap::NotifyContextDisposed(bool) */

void __thiscall v8::internal::Heap::NotifyContextDisposed(Heap *this,bool param_1)

{
  long *plVar1;
  GCTracer *this_00;
  double dVar2;
  
  if (!param_1) {
    GCTracer::ResetSurvivalEvents(*(GCTracer **)(this + 0x7f8));
    this[0x88] = (Heap)0x0;
    *(undefined8 *)(this + 0x5d0) = *(undefined8 *)(this + 0x80);
    plVar1 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar1 + 0x78))();
    MemoryReducer::NotifyPossibleGarbage(*(Event **)(this + 0x848));
  }
  Isolate::AbortConcurrentOptimization(this + -0x8850,1);
  this_00 = *(GCTracer **)(this + 0x7f8);
  *(int *)(this + 0xe4) = *(int *)(*(long *)(this + -0x78d8) + 7) >> 1;
  plVar1 = (long *)V8::GetCurrentPlatform();
  dVar2 = (double)(**(code **)(*plVar1 + 0x78))();
  GCTracer::AddContextDisposalTime(this_00,dVar2 * 1000.0);
  *(int *)(this + 0xe0) = *(int *)(this + 0xe0) + 1;
  return;
}

