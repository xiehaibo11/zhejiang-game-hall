
/* v8::internal::DataHandler::DataHandlerVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::DataHandler::DataHandlerVerify(DataHandler *this,Isolate *param_1)

{
  Isolate *pIVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  TorqueGeneratedClassVerifiers::DataHandlerVerify(*(undefined8 *)this);
  uVar3 = *(ulong *)this;
  uVar4 = uVar3 & 0xffffffff00000000;
  if (((*(uint *)(uVar3 + 3) & 1) != 0) &&
     ((*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | *(uint *)(uVar3 + 3)) - 1)) != 0x9a ||
      (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x4d)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "!smi_handler().IsSmi() implies smi_handler().IsCode() && IsStoreHandler()");
  }
  iVar2 = (uint)*(byte *)((uVar4 | *(uint *)(uVar3 - 1)) + 3) * 4 + -0xc;
  if (3 < iVar2) {
    pIVar1 = param_1 + *(uint *)(uVar3 + 0xb);
    if (((int)pIVar1 != 3) && (((ulong)pIVar1 & 1) != 0)) {
      uVar3 = ReadOnlyHeap::Contains((ulong)pIVar1 & 0xfffffffffffffffd);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),(ulong)pIVar1 & 0xfffffffffffffffd),
         (uVar3 & 1) == 0)) goto LAB_00f2fa88;
    }
    if (iVar2 < 8) {
      return;
    }
    pIVar1 = param_1 + *(uint *)(*(long *)this + 0xf);
    if (((int)pIVar1 != 3) && (((ulong)pIVar1 & 1) != 0)) {
      uVar3 = ReadOnlyHeap::Contains((ulong)pIVar1 & 0xfffffffffffffffd);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),(ulong)pIVar1 & 0xfffffffffffffffd),
         (uVar3 & 1) == 0)) goto LAB_00f2fa88;
    }
    if (((0xb < iVar2) && (pIVar1 = param_1 + *(uint *)(*(long *)this + 0x13), (int)pIVar1 != 3)) &&
       (((ulong)pIVar1 & 1) != 0)) {
      uVar3 = ReadOnlyHeap::Contains((ulong)pIVar1 & 0xfffffffffffffffd);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),(ulong)pIVar1 & 0xfffffffffffffffd),
         (uVar3 & 1) == 0)) {
LAB_00f2fa88:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
      }
    }
  }
  return;
}

