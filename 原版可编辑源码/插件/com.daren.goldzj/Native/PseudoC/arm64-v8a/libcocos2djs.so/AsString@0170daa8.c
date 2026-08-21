
/* v8::internal::compiler::ObjectData::AsString() */

void __thiscall v8::internal::compiler::ObjectData::AsString(ObjectData *this)

{
  if (*(int *)(this + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(ushort *)(*(long *)(this + 0x10) + 0x18) < 0x40) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsString()");
}

