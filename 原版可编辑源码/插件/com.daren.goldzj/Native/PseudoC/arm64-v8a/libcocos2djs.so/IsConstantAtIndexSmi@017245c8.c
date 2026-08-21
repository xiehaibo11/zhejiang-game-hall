
/* v8::internal::compiler::BytecodeArrayRef::IsConstantAtIndexSmi(int) const */

bool __thiscall
v8::internal::compiler::BytecodeArrayRef::IsConstantAtIndexSmi(BytecodeArrayRef *this,int param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar3 = *(ulong *)**(undefined8 **)this;
    uVar2 = *(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7)) +
                      (long)(param_1 << 2) + 7) & 1;
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
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

