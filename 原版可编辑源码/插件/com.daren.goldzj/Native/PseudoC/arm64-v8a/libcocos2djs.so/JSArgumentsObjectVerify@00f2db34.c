
/* v8::internal::JSArgumentsObject::JSArgumentsObjectVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSArgumentsObject::JSArgumentsObjectVerify(JSArgumentsObject *this,Isolate *param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_18;
  
  TorqueGeneratedClassVerifiers::JSArgumentsObjectVerify(*(undefined8 *)this);
  uVar3 = *(ulong *)this;
  uVar4 = uVar3 & 0xffffffff00000000;
  if ((byte)((*(byte *)((uVar4 | 10) + (ulong)*(uint *)(uVar3 - 1)) >> 3) - 0xd) < 2) {
    local_18 = uVar4 | *(uint *)(uVar3 + 7);
    SloppyArgumentsElements::SloppyArgumentsElementsVerify
              ((SloppyArgumentsElements *)&local_18,param_1);
    uVar3 = *(ulong *)this;
    uVar4 = uVar3 & 0xffffffff00000000;
  }
  uVar3 = Isolate::IsInAnyContext(param_1,uVar4 | *(uint *)(uVar3 - 1),0xa2);
  if ((((uVar3 & 1) == 0) &&
      (uVar3 = Isolate::IsInAnyContext
                         (param_1,*(ulong *)this & 0xffffffff00000000 |
                                  (ulong)*(uint *)(*(ulong *)this - 1),0xa3), (uVar3 & 1) == 0)) &&
     (uVar3 = Isolate::IsInAnyContext
                        (param_1,*(ulong *)this & 0xffffffff00000000 |
                                 (ulong)*(uint *)(*(ulong *)this - 1),0x2e), (uVar3 & 1) == 0)) {
    uVar3 = Isolate::IsInAnyContext
                      (param_1,*(ulong *)this & 0xffffffff00000000 |
                               (ulong)*(uint *)(*(ulong *)this - 1),0xa4);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar2 = *(uint *)(*(long *)this + 0xb);
  }
  else {
    pIVar1 = param_1 + *(uint *)(*(long *)this + 0xb);
    if (((((ulong)pIVar1 & 1) != 0) && (uVar3 = ReadOnlyHeap::Contains(pIVar1), (uVar3 & 1) == 0))
       && (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),pIVar1), (uVar3 & 1) == 0))
    goto LAB_00f2dc64;
    uVar2 = *(uint *)(*(long *)this + 0xf);
  }
  pIVar1 = param_1 + uVar2;
  if (((((ulong)pIVar1 & 1) == 0) || (uVar3 = ReadOnlyHeap::Contains(pIVar1), (uVar3 & 1) != 0)) ||
     (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),pIVar1), (uVar3 & 1) != 0)) {
    return;
  }
LAB_00f2dc64:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
}

