
/* v8::internal::compiler::BytecodeArrayRef::GetFirstBytecodeAddress() const */

long __thiscall
v8::internal::compiler::BytecodeArrayRef::GetFirstBytecodeAddress(BytecodeArrayRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return *(long *)**(undefined8 **)this + 0x21;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x86) {
      return *(long *)(lVar1 + 0x30);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsBytecodeArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

