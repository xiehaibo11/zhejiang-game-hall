
/* v8::internal::compiler::ObjectData::AsContext() */

void __thiscall v8::internal::compiler::ObjectData::AsContext(ObjectData *this)

{
  if (*(int *)(this + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(ushort *)(*(long *)(this + 0x10) + 0x18) - 0x88 < 10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsContext()");
}

