
/* v8::internal::compiler::OffHeapBytecodeArray::IsConstantAtIndexSmi(int) const */

bool __thiscall
v8::internal::compiler::OffHeapBytecodeArray::IsConstantAtIndexSmi
          (OffHeapBytecodeArray *this,int param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (*(int *)(puVar3 + 1) == 2) {
    uVar4 = *(ulong *)*puVar3;
    uVar2 = *(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7)) +
                      (long)(param_1 << 2) + 7) & 1;
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)(this + 8));
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x86) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsBytecodeArray()");
    }
    uVar2 = *(uint *)(*(long *)(*(long *)(lVar1 + 0x90) + (long)param_1 * 8) + 8);
  }
  return uVar2 == 0;
}

