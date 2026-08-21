
/* v8::internal::ScavengerCollector::ProcessWeakReferences(v8::internal::Worklist<v8::internal::EphemeronHashTable,
   128>*) */

void __thiscall
v8::internal::ScavengerCollector::ProcessWeakReferences(ScavengerCollector *this,Worklist *param_1)

{
  undefined **local_28;
  
  local_28 = &PTR__WeakObjectRetainer_01ca9440;
  Heap::ProcessYoungWeakReferences(*(Heap **)(this + 8),(WeakObjectRetainer *)&local_28);
  ClearYoungEphemerons(this,param_1);
  ClearOldEphemerons(this);
  return;
}

