
/* v8::internal::Heap::UnregisterStrongRoots(v8::internal::FullObjectSlot) */

void __thiscall v8::internal::Heap::UnregisterStrongRoots(Heap *this,long param_2)

{
  Heap *pHVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long **)(this + 0x878) != (long *)0x0) {
    plVar4 = *(long **)(this + 0x878);
    plVar3 = (long *)0x0;
    do {
      while (plVar2 = plVar4, plVar4 = (long *)plVar2[2], *plVar2 != param_2) {
        plVar3 = plVar2;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      pHVar1 = this + 0x878;
      if (plVar3 != (long *)0x0) {
        pHVar1 = (Heap *)(plVar3 + 2);
      }
      *(long **)pHVar1 = plVar4;
      operator_delete(plVar2);
    } while (plVar4 != (long *)0x0);
  }
  return;
}

