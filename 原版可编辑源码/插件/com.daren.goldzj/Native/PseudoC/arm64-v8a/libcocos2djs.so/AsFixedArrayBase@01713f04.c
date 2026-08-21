
/* v8::internal::compiler::ObjectData::AsFixedArrayBase() */

void __thiscall v8::internal::compiler::ObjectData::AsFixedArrayBase(ObjectData *this)

{
  if (*(int *)(this + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(ushort *)(*(long *)(this + 0x10) + 0x18) - 0x76 < 0x12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsFixedArrayBase()");
}

