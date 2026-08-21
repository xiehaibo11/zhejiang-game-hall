
/* v8::internal::compiler::BytecodeArrayRef::GetConstantAtIndexAsSmi(int) const */

ulong __thiscall
v8::internal::compiler::BytecodeArrayRef::GetConstantAtIndexAsSmi
          (BytecodeArrayRef *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = *(ulong *)**(undefined8 **)this;
    uVar3 = uVar2 & 0xffffffff00000000;
    uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(uVar2 + 7)) + (long)(param_1 << 2) + 7);
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
    uVar3 = *(ulong *)**(undefined8 **)(*(long *)(lVar1 + 0x90) + (long)param_1 * 8);
  }
  return uVar3;
}

