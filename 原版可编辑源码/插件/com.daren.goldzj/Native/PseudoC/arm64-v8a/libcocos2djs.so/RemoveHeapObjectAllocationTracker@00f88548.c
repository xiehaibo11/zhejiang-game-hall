
/* WARNING: Removing unreachable block (ram,0x00f885ec) */
/* v8::internal::Heap::RemoveHeapObjectAllocationTracker(v8::internal::HeapObjectAllocationTracker*)
    */

void __thiscall
v8::internal::Heap::RemoveHeapObjectAllocationTracker
          (Heap *this,HeapObjectAllocationTracker *param_1)

{
  long *plVar1;
  HeapObjectAllocationTracker *pHVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(this + 0xc08);
  plVar1 = *(long **)(this + 0xc10);
  if (plVar4 != plVar1) {
    pHVar2 = (HeapObjectAllocationTracker *)*plVar4;
    while (pHVar2 != param_1) {
      plVar4 = plVar4 + 1;
      if (plVar1 == plVar4) goto LAB_00f885fc;
      pHVar2 = (HeapObjectAllocationTracker *)*plVar4;
    }
  }
  if ((plVar4 != plVar1) && (plVar3 = plVar4 + 1, plVar5 = plVar4, plVar3 != plVar1)) {
    do {
      plVar4 = plVar5;
      if ((HeapObjectAllocationTracker *)*plVar3 != param_1) {
        plVar4 = plVar5 + 1;
        *plVar5 = *plVar3;
      }
      plVar3 = plVar3 + 1;
      plVar5 = plVar4;
    } while (plVar1 != plVar3);
    plVar1 = *(long **)(this + 0xc10);
  }
  if (plVar1 != plVar4) {
    *(long **)(this + 0xc10) = plVar4;
    plVar1 = plVar4;
  }
LAB_00f885fc:
  if (((*(long **)(this + 0xc08) == plVar1) && (FLAG_inline_new != '\0')) &&
     (this[0x5e0] != (Heap)0x0)) {
    this[0x5e0] = (Heap)0x0;
                    /* WARNING: Could not recover jumptable at 0x00f88640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xe8) + 0x88))(*(long **)(this + 0xe8),0);
    return;
  }
  return;
}

