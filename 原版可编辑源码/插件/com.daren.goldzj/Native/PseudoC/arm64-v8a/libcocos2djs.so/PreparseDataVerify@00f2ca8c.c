
/* v8::internal::PreparseData::PreparseDataVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::PreparseData::PreparseDataVerify(PreparseData *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  TorqueGeneratedClassVerifiers::PreparseDataVerify(*(undefined8 *)this);
  uVar2 = *(ulong *)this;
  if (*(int *)(uVar2 + 3) < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= data_length()");
  }
  if (*(int *)(uVar2 + 7) < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= children_length()");
  }
  if (*(int *)(uVar2 + 7) != 0) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      uVar1 = *(uint *)(uVar2 + (long)(int)(iVar4 + (*(int *)(uVar2 + 3) + 0xfU & 0xfffffffc)) + -1)
      ;
      if ((uVar1 & 1) == 0) {
LAB_00f2cb7c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","child.IsNull() || child.IsPreparseData()");
      }
      uVar2 = uVar2 & 0xffffffff00000000;
      uVar3 = uVar2 | uVar1;
      if ((uVar1 != *(uint *)(uVar2 + 0xb0)) &&
         (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa3)) goto LAB_00f2cb7c;
      uVar2 = ReadOnlyHeap::Contains(uVar3);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar3), (uVar2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
      }
      uVar2 = *(ulong *)this;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *(int *)(uVar2 + 7));
  }
  return;
}

