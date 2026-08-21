
/* v8::internal::compiler::ObjectData::AsBytecodeArray() */

void __thiscall v8::internal::compiler::ObjectData::AsBytecodeArray(ObjectData *this)

{
  if (*(int *)(this + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(this + 0x10) + 0x18) == 0x86) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsBytecodeArray()");
}

