
/* v8::internal::UnreachableObjectsFilter::UnreachableObjectsFilter(v8::internal::Heap*) */

void __thiscall
v8::internal::UnreachableObjectsFilter::UnreachableObjectsFilter
          (UnreachableObjectsFilter *this,Heap *param_1)

{
  undefined **local_60;
  undefined **local_58;
  UnreachableObjectsFilter *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  local_60 = &PTR__MarkingVisitor_01ca7c88;
  local_58 = &PTR__MarkingVisitor_01ca7d28;
  *(undefined ***)this = &PTR__UnreachableObjectsFilter_01ca7c60;
  *(Heap **)(this + 8) = param_1;
  local_48 = (undefined8 *)0x0;
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  local_50 = this;
  Heap::IterateStrongRoots(param_1,&local_58,0);
  (*(code *)local_58[3])(&local_58,0,0,param_1 + -0x7880);
  (*(code *)local_58[4])(&local_58,0);
  if (*(long *)(param_1 + 0xae8) != *(long *)(param_1 + 0xaf0)) {
    (*(code *)local_58[2])(&local_58,1,0);
  }
  if (*(long *)(param_1 + 0xb00) != *(long *)(param_1 + 0xb08)) {
    (*(code *)local_58[2])(&local_58,1,0);
  }
  (*(code *)local_58[4])(&local_58,1);
  while( true ) {
    if (local_48 == local_40) break;
    local_40 = local_40 + -1;
    local_18 = *local_40;
    HeapObject::Iterate((HeapObject *)&local_18,(ObjectVisitor *)&local_60);
  }
  local_60 = &PTR__MarkingVisitor_01ca7c88;
  local_58 = &PTR__MarkingVisitor_01ca7d28;
  if (local_48 != (undefined8 *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  return;
}

