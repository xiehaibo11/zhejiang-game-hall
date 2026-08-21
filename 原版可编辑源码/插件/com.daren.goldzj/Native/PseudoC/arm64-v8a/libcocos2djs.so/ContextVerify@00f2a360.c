
/* v8::internal::Context::ContextVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Context::ContextVerify(Context *this,Isolate *param_1)

{
  Isolate *pIVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  TorqueGeneratedClassVerifiers::ContextVerify(*(undefined8 *)this);
  lVar3 = *(long *)this;
  if (1 < *(int *)(lVar3 + 3)) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      pIVar1 = param_1 + *(uint *)(lVar3 + iVar4 + 7);
      if (((((ulong)pIVar1 & 1) != 0) && (uVar2 = ReadOnlyHeap::Contains(pIVar1), (uVar2 & 1) == 0))
         && (uVar2 = Heap::Contains((Heap *)(param_1 + 0x8850),pIVar1), (uVar2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
      }
      lVar3 = *(long *)this;
      lVar5 = lVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (lVar5 < *(int *)(lVar3 + 3) >> 1);
  }
  return;
}

