
/* v8::internal::BytecodeArray::BytecodeArrayVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::BytecodeArray::BytecodeArrayVerify(BytecodeArray *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)this;
  uVar2 = uVar3 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar2 + *(uint *)(uVar3 - 1)) != 0x86) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsBytecodeArray()");
  }
  uVar4 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7);
  if (0xe < *(ushort *)(uVar2 + *(uint *)(uVar4 - 1)) - 0x76) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","constant_pool().IsFixedArray()");
  }
  if ((*(uint *)(uVar3 + 7) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","p.IsHeapObject()");
  }
  uVar2 = ReadOnlyHeap::Contains(uVar4);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar4), (uVar2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
  }
  uVar2 = *(ulong *)this;
  uVar1 = *(uint *)(uVar2 + 0xf);
  if ((uVar1 & 1) != 0) {
    uVar3 = uVar2 & 0xffffffff00000000;
    if ((uVar1 != *(uint *)(uVar3 + 0xa0)) && (uVar1 != *(uint *)(uVar3 + 0x180))) {
      if ((*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) != 0x85) &&
         (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) != 0x69))
      goto LAB_00f2c1bc;
    }
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar2 + 0xb)) - 1)) == 0x85) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","handler_table().IsByteArray()");
  }
LAB_00f2c1bc:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "source_position_table().IsUndefined() || source_position_table().IsException() || source_position_table().IsByteArray() || source_position_table().IsSourcePositionTableWithFrameCache()"
          );
}

