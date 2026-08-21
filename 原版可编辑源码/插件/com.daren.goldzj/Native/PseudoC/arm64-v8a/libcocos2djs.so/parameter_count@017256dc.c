
/* v8::internal::compiler::BytecodeArrayRef::parameter_count() const */

int __thiscall v8::internal::compiler::BytecodeArrayRef::parameter_count(BytecodeArrayRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return *(int *)(*(long *)**(undefined8 **)this + 0x17) >> 3;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x86) {
      return *(int *)(lVar1 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsBytecodeArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

