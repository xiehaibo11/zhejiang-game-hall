
/* v8::internal::VerboseAccountingAllocator::ReturnSegment(v8::internal::Segment*) */

void __thiscall
v8::internal::VerboseAccountingAllocator::ReturnSegment
          (VerboseAccountingAllocator *this,Segment *param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  AccountingAllocator::ReturnSegment((AccountingAllocator *)this,param_1);
  lVar1 = *(long *)(this + 8);
  if ((ulong)(*(long *)(this + 0x30) + lVar1) < *(ulong *)(this + 0x20)) {
    lVar2 = *(long *)(this + 0x18);
    dVar3 = (double)Heap::MonotonicallyIncreasingTimeInMs();
    PrintF("{\"type\": \"zone\", \"isolate\": \"%p\", \"time\": %f, \"allocated\": %zu}\n",
           dVar3 - *(double *)(lVar2 + 0x2e70),*(long *)(this + 0x18) + -0x8850,lVar1);
    *(long *)(this + 0x20) = lVar1;
  }
  return;
}

