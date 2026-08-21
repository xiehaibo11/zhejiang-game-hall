
/* v8::internal::Debug::StartSideEffectCheckMode() */

void __thiscall v8::internal::Debug::StartSideEffectCheckMode(Debug *this)

{
  HeapObjectAllocationTracker *pHVar1;
  long *plVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 uVar5;
  Debug DVar6;
  ulong uVar7;
  
  *(undefined4 *)(*(long *)(this + 0x88) + 0xb80c) = 0x20;
  if ((this[0x4c] == (Debug)0x2) || (*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20)) {
    DVar6 = (Debug)0x1;
  }
  else {
    DVar6 = this[0x84];
  }
  this[9] = DVar6;
  this[0x10] = (Debug)0x0;
  pHVar1 = operator_new(0x58);
  *(undefined8 *)(pHVar1 + 0x50) = 0;
  *(undefined8 *)(pHVar1 + 8) = 0;
  *(undefined8 *)pHVar1 = 0;
  *(undefined8 *)(pHVar1 + 0x18) = 0;
  *(undefined8 *)(pHVar1 + 0x10) = 0;
  *(undefined8 *)(pHVar1 + 0x38) = 0;
  *(undefined8 *)(pHVar1 + 0x30) = 0;
  *(undefined ***)pHVar1 = &PTR_AllocationEvent_01ca45a8;
  *(undefined8 *)(pHVar1 + 0x28) = 0;
  *(undefined8 *)(pHVar1 + 0x20) = 0;
  *(undefined8 *)(pHVar1 + 0x48) = 0;
  *(undefined8 *)(pHVar1 + 0x40) = 0;
  *(undefined8 *)(pHVar1 + 0x20) = 0;
  *(undefined8 *)(pHVar1 + 0x18) = 0;
  *(undefined8 *)(pHVar1 + 0x10) = 0;
  *(undefined8 *)(pHVar1 + 8) = 0;
  *(undefined4 *)(pHVar1 + 0x28) = 0x3f800000;
  base::Mutex::Mutex((Mutex *)(pHVar1 + 0x30));
  plVar2 = *(long **)(this + 0x20);
  *(HeapObjectAllocationTracker **)(this + 0x20) = pHVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
    pHVar1 = *(HeapObjectAllocationTracker **)(this + 0x20);
  }
  Heap::AddHeapObjectAllocationTracker((Heap *)(*(long *)(this + 0x88) + 0x8850),pHVar1);
  pIVar3 = *(Isolate **)(this + 0x88);
  uVar7 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
    uVar7 = *puVar4;
  }
  pIVar3 = *(Isolate **)(this + 0x88);
  uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x247);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
  }
  uVar5 = Factory::CopyFixedArray(*(Factory **)(this + 0x88),puVar4);
  *(undefined8 *)(this + 0x28) = uVar5;
  UpdateDebugInfosForExecutionMode(this);
  return;
}

