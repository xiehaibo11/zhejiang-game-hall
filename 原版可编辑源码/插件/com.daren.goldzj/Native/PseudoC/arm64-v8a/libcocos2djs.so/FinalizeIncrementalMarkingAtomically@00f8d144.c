
/* v8::internal::Heap::FinalizeIncrementalMarkingAtomically(v8::internal::GarbageCollectionReason)
    */

void __thiscall
v8::internal::Heap::FinalizeIncrementalMarkingAtomically(Heap *this,undefined4 param_2)

{
  CollectGarbage(this,2,param_2,*(undefined4 *)(this + 0xad8));
  *(undefined4 *)(this + 0xad4) = 0;
  return;
}

