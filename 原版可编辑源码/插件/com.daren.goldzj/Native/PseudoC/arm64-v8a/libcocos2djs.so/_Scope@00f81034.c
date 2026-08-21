
/* v8::internal::GCTracer::Scope::~Scope() */

void __thiscall v8::internal::GCTracer::Scope::~Scope(Scope *this)

{
  uint uVar1;
  RuntimeCallStats *this_00;
  long lVar2;
  double dVar3;
  
  lVar2 = *(long *)this;
  uVar1 = *(uint *)(this + 8);
  dVar3 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  dVar3 = dVar3 - *(double *)(this + 0x10);
  if (uVar1 < 10) {
    lVar2 = lVar2 + (ulong)uVar1 * 0x18;
    *(int *)(lVar2 + 0x9f0) = *(int *)(lVar2 + 0x9f0) + 1;
    *(double *)(lVar2 + 0x9e0) = dVar3 + *(double *)(lVar2 + 0x9e0);
    if (*(double *)(lVar2 + 0x9e8) < dVar3) {
      *(double *)(lVar2 + 0x9e8) = dVar3;
      this_00 = *(RuntimeCallStats **)(this + 0x38);
      goto joined_r0x00f810a0;
    }
  }
  else {
    lVar2 = lVar2 + (ulong)uVar1 * 8;
    *(double *)(lVar2 + 0x80) = dVar3 + *(double *)(lVar2 + 0x80);
  }
  this_00 = *(RuntimeCallStats **)(this + 0x38);
joined_r0x00f810a0:
  if (this_00 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(this_00,(RuntimeCallTimer *)(this + 0x18));
    return;
  }
  return;
}

