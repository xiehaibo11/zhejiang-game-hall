
/* v8::internal::compiler::BytecodeArrayRef::handler_table_size() const */

int __thiscall v8::internal::compiler::BytecodeArrayRef::handler_table_size(BytecodeArrayRef *this)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = *(ulong *)**(undefined8 **)this;
    return *(int *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) + 3) >> 1;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x86) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsBytecodeArray()");
  }
  if (*(char *)(lVar1 + 0x28) == '\x01') {
    return *(int *)(lVar1 + 0x78) - *(int *)(lVar1 + 0x70);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_serialized_for_compilation_");
}

