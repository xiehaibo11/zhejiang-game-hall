
/* v8::internal::CodeDataContainer::CodeDataContainerVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::CodeDataContainer::CodeDataContainerVerify(CodeDataContainer *this,Isolate *param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this;
  if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x9b) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsCodeDataContainer()");
  }
  pIVar1 = param_1 + *(uint *)(uVar3 + 3);
  if (((((ulong)pIVar1 & 1) != 0) && (uVar3 = ReadOnlyHeap::Contains(pIVar1), (uVar3 & 1) == 0)) &&
     (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),pIVar1), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
  }
  uVar2 = *(uint *)(*(ulong *)this + 3);
  if (((uVar2 & 1) != 0) &&
     ((uVar3 = *(ulong *)this & 0xffffffff00000000,
      *(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar2) - 1)) == 0x9a ||
      (uVar2 == *(uint *)(param_1 + 0xa0))))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","next_code_link().IsCode() || next_code_link().IsUndefined(isolate)")
  ;
}

