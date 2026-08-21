
/* v8::internal::GCTracer::BackgroundScope::~BackgroundScope() */

void __thiscall v8::internal::GCTracer::BackgroundScope::~BackgroundScope(BackgroundScope *this)

{
  Mutex *this_00;
  uint uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  lVar2 = *(long *)this;
  dVar4 = *(double *)(this + 0x10);
  uVar1 = *(uint *)(this + 8);
  this_00 = (Mutex *)(lVar2 + 0x1130);
  base::Mutex::Lock(this_00);
  lVar2 = lVar2 + (ulong)uVar1 * 8;
  *(double *)(lVar2 + 0x1158) = (dVar3 - dVar4) + *(double *)(lVar2 + 0x1158);
  base::Mutex::Unlock(this_00);
  if (*(RuntimeCallStats **)(this + 0x38) == (RuntimeCallStats *)0x0) {
    return;
  }
  RuntimeCallStats::Leave(*(RuntimeCallStats **)(this + 0x38),(RuntimeCallTimer *)(this + 0x18));
  return;
}

