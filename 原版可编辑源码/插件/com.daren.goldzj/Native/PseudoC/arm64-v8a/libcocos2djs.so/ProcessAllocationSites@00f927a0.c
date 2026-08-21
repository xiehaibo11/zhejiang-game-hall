
/* v8::internal::Heap::ProcessAllocationSites(v8::internal::WeakObjectRetainer*) */

void __thiscall v8::internal::Heap::ProcessAllocationSites(Heap *this,WeakObjectRetainer *param_1)

{
  undefined8 uVar1;
  
  uVar1 = VisitWeakList<v8::internal::AllocationSite>(this,*(undefined8 *)(this + 0x5f0),param_1);
  *(undefined8 *)(this + 0x5f0) = uVar1;
  return;
}

