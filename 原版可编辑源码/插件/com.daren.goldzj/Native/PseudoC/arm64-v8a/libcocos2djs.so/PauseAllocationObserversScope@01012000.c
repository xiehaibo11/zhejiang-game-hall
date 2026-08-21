
/* v8::internal::PauseAllocationObserversScope::PauseAllocationObserversScope(v8::internal::Heap*)
    */

void __thiscall
v8::internal::PauseAllocationObserversScope::PauseAllocationObserversScope
          (PauseAllocationObserversScope *this,Heap *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  SpaceIterator aSStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(Heap **)this = param_1;
  SpaceIterator::SpaceIterator(aSStack_40,param_1);
  while (uVar2 = SpaceIterator::HasNext(aSStack_40), (uVar2 & 1) != 0) {
    plVar3 = (long *)SpaceIterator::Next(aSStack_40);
    (**(code **)(*plVar3 + 0x20))();
  }
  SpaceIterator::~SpaceIterator(aSStack_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

