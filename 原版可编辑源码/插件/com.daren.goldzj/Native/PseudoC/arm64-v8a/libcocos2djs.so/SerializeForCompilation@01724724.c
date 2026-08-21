
/* v8::internal::compiler::BytecodeArrayRef::SerializeForCompilation() */

void __thiscall
v8::internal::compiler::BytecodeArrayRef::SerializeForCompilation(BytecodeArrayRef *this)

{
  BytecodeArrayData *this_00;
  
  if (*(int *)(*(long *)this + 8) == 2) {
    return;
  }
  this_00 = (BytecodeArrayData *)ObjectRef::data((ObjectRef *)this);
  if (*(int *)(this_00 + 8) == 1) {
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0x86) {
      BytecodeArrayData::SerializeForCompilation(this_00,*(JSHeapBroker **)(this + 8));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsBytecodeArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

