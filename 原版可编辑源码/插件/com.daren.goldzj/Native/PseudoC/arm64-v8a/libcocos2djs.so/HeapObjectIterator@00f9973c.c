
/* v8::internal::HeapObjectIterator::HeapObjectIterator(v8::internal::Heap*,
   v8::internal::HeapObjectIterator::HeapObjectsFiltering) */

void __thiscall
v8::internal::HeapObjectIterator::HeapObjectIterator
          (HeapObjectIterator *this,long param_1,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  UnreachableObjectsFilter *this_00;
  long *plVar3;
  long *plVar4;
  ulong extraout_x1;
  undefined8 uVar5;
  long *local_28;
  
  *(long *)this = param_1;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  MarkCompactCollector::EnsureSweepingCompleted(*(MarkCompactCollector **)(param_1 + 0x800));
  puVar2 = Malloced::operator_new((Malloced *)0x18,extraout_x1);
  uVar5 = *(undefined8 *)this;
  *(undefined4 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR__SpaceIterator_01ca7600;
  puVar2[1] = uVar5;
  *(undefined8 **)(this + 0x18) = puVar2;
  if (*(int *)(this + 8) == 1) {
    this_00 = operator_new(0x40);
    UnreachableObjectsFilter::UnreachableObjectsFilter(this_00,*(Heap **)this);
    puVar2 = *(undefined8 **)(this + 0x18);
    *(UnreachableObjectsFilter **)(this + 0x10) = this_00;
  }
  iVar1 = *(int *)(puVar2 + 2);
  *(int *)(puVar2 + 2) = (int)((long)iVar1 + 1);
  plVar3 = *(long **)(puVar2[1] + ((long)iVar1 + 1) * 8 + 0x128);
  (**(code **)(*plVar3 + 0x70))(&local_28,plVar3,*(undefined8 *)this);
  plVar3 = local_28;
  local_28 = (long *)0x0;
  plVar4 = *(long **)(this + 0x20);
  *(long **)(this + 0x20) = plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    plVar3 = local_28;
    local_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return;
}

