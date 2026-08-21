
/* v8::internal::IncrementalMarking::StepSizeToKeepUpWithAllocations() */

long __thiscall
v8::internal::IncrementalMarking::StepSizeToKeepUpWithAllocations(IncrementalMarking *this)

{
  long lVar1;
  long lVar2;
  Heap *this_00;
  long lVar3;
  
  this_00 = *(Heap **)this;
  lVar3 = *(long *)(this_00 + 0x888);
  lVar1 = Heap::OldGenerationSizeOfObjects(this_00);
  lVar2 = *(long *)(this + 0x30);
  lVar1 = (lVar1 + lVar3) - *(long *)(this_00 + 0x890);
  *(long *)(this + 0x30) = lVar1;
  return lVar1 - lVar2;
}

