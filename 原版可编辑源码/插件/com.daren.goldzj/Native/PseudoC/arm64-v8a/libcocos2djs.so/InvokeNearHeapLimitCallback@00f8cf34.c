
/* v8::internal::Heap::InvokeNearHeapLimitCallback() */

undefined8 __thiscall v8::internal::Heap::InvokeNearHeapLimitCallback(Heap *this)

{
  Heap *pHVar1;
  Heap *pHVar2;
  Isolate *pIVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(this + 0xd0) != *(long *)(this + 200)) {
    pIVar3 = (Isolate *)(this + -0x8850);
    *(int *)(this + 0xd60) = *(int *)(this + 0xd60) + 1;
    uVar6 = *(undefined8 *)(this + 0xd50);
    lVar5 = *(long *)(this + 0xd58);
    pHVar1 = this + 0xd58;
    pHVar2 = this + 0xd60;
    uVar4 = (**(code **)(*(long *)(this + 0xd0) + -0x10))
                      (*(undefined8 *)(*(long *)(this + 0xd0) + -8),*(undefined8 *)(this + 0x58),
                       *(undefined8 *)(this + 0x70));
    if (*(ulong *)(this + 0x58) < uVar4) {
      *(ulong *)(this + 0x58) = uVar4;
      if (pIVar3 != (Isolate *)0x0) {
        *(undefined8 *)(this + 0xd50) = uVar6;
        *(int *)pHVar2 = *(int *)pHVar2 + -1;
        if (*(long *)pHVar1 != lVar5) {
          *(long *)pHVar1 = lVar5;
          HandleScope::DeleteExtensions(pIVar3);
          return 1;
        }
      }
      return 1;
    }
    if (pIVar3 != (Isolate *)0x0) {
      *(undefined8 *)(this + 0xd50) = uVar6;
      *(int *)pHVar2 = *(int *)pHVar2 + -1;
      if (*(long *)pHVar1 != lVar5) {
        *(long *)pHVar1 = lVar5;
        HandleScope::DeleteExtensions(pIVar3);
      }
    }
  }
  return 0;
}

