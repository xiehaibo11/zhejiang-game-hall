
/* v8::internal::WeakFixedArray::WeakFixedArrayVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::WeakFixedArray::WeakFixedArrayVerify(WeakFixedArray *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  TorqueGeneratedClassVerifiers::WeakFixedArrayVerify(*(undefined8 *)this);
  uVar2 = *(ulong *)this;
  if (1 < *(int *)(uVar2 + 3)) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      uVar1 = *(uint *)(uVar2 + (long)iVar4 + 7);
      if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
        uVar3 = (ulong)uVar1 & 0xfffffffffffffffd | uVar2 & 0xffffffff00000000;
        uVar2 = ReadOnlyHeap::Contains(uVar3);
        if (((uVar2 & 1) == 0) &&
           (uVar2 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar3), (uVar2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
        }
      }
      uVar2 = *(ulong *)this;
      lVar5 = lVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (lVar5 < *(int *)(uVar2 + 3) >> 1);
  }
  return;
}

