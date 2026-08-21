
/* v8::internal::compiler::ObjectData::AsJSBoundFunction() */

void __thiscall v8::internal::compiler::ObjectData::AsJSBoundFunction(ObjectData *this)

{
  if (*(int *)(this + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(this + 0x10) + 0x18) == 0x438) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSBoundFunction()");
}

