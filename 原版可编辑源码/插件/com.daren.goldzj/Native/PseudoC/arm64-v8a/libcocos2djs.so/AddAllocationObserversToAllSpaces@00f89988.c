
/* v8::internal::Heap::AddAllocationObserversToAllSpaces(v8::internal::AllocationObserver*,
   v8::internal::AllocationObserver*) */

void __thiscall
v8::internal::Heap::AddAllocationObserversToAllSpaces
          (Heap *this,AllocationObserver *param_1,AllocationObserver *param_2)

{
  AllocationObserver *pAVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x130);
  pAVar1 = param_2;
  if (plVar2 != *(long **)(this + 0xe8)) {
    pAVar1 = param_1;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,pAVar1);
  plVar2 = *(long **)(this + 0x138);
  pAVar1 = param_2;
  if (plVar2 != *(long **)(this + 0xe8)) {
    pAVar1 = param_1;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,pAVar1);
  plVar2 = *(long **)(this + 0x140);
  pAVar1 = param_2;
  if (plVar2 != *(long **)(this + 0xe8)) {
    pAVar1 = param_1;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,pAVar1);
  plVar2 = *(long **)(this + 0x148);
  pAVar1 = param_2;
  if (plVar2 != *(long **)(this + 0xe8)) {
    pAVar1 = param_1;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,pAVar1);
  plVar2 = *(long **)(this + 0x150);
  pAVar1 = param_2;
  if (plVar2 != *(long **)(this + 0xe8)) {
    pAVar1 = param_1;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,pAVar1);
  plVar2 = *(long **)(this + 0x158);
  pAVar1 = param_2;
  if (plVar2 != *(long **)(this + 0xe8)) {
    pAVar1 = param_1;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,pAVar1);
  plVar2 = *(long **)(this + 0x160);
  if (plVar2 != *(long **)(this + 0xe8)) {
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00f89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  return;
}

