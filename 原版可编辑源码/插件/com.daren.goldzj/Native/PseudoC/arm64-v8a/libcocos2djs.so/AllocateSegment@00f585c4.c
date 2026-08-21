
/* v8::internal::VerboseAccountingAllocator::AllocateSegment(unsigned long) */

long __thiscall
v8::internal::VerboseAccountingAllocator::AllocateSegment
          (VerboseAccountingAllocator *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = AccountingAllocator::AllocateSegment((AccountingAllocator *)this,param_1);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(this + 8);
    if ((ulong)(*(long *)(this + 0x30) + *(long *)(this + 0x20)) < uVar2) {
      lVar3 = *(long *)(this + 0x18);
      dVar4 = (double)Heap::MonotonicallyIncreasingTimeInMs();
      PrintF("{\"type\": \"zone\", \"isolate\": \"%p\", \"time\": %f, \"allocated\": %zu}\n",
             dVar4 - *(double *)(lVar3 + 0x2e70),*(long *)(this + 0x18) + -0x8850,uVar2);
      *(ulong *)(this + 0x20) = uVar2;
    }
  }
  return lVar1;
}

