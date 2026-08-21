
/* v8::internal::Debug::StopSideEffectCheckMode() */

void __thiscall v8::internal::Debug::StopSideEffectCheckMode(Debug *this)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  Debug DVar7;
  ulong uVar8;
  Factory *pFVar9;
  ulong uVar10;
  
  if (this[0x10] != (Debug)0x0) {
    Isolate::CancelTerminateExecution(*(Isolate **)(this + 0x88));
    pFVar9 = *(Factory **)(this + 0x88);
    puVar2 = (undefined8 *)Factory::NewEvalError(pFVar9,0x153,0,0,0);
    Isolate::Throw((Isolate *)pFVar9,*puVar2,0);
  }
  *(undefined4 *)(*(long *)(this + 0x88) + 0xb80c) = 0;
  if ((this[0x4c] == (Debug)0x2) || (*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20)) {
    DVar7 = (Debug)0x1;
  }
  else {
    DVar7 = this[0x84];
  }
  this[9] = DVar7;
  this[0x10] = (Debug)0x0;
  Heap::RemoveHeapObjectAllocationTracker
            ((Heap *)(*(long *)(this + 0x88) + 0x8850),
             *(HeapObjectAllocationTracker **)(this + 0x20));
  plVar3 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  pIVar4 = *(Isolate **)(this + 0x88);
  uVar8 = *(ulong *)(pIVar4 + 0x2bc8) & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar4 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
    uVar8 = *puVar5;
  }
  puVar1 = (undefined4 *)(uVar8 + 0x247);
  uVar10 = **(ulong **)(this + 0x28);
  *puVar1 = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar1,uVar10);
      uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar10);
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  UpdateDebugInfosForExecutionMode(this);
  return;
}

