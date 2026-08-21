
/* v8::internal::compiler::ObjectData::AsJSReceiver() */

void __thiscall v8::internal::compiler::ObjectData::AsJSReceiver(ObjectData *this)

{
  if (*(int *)(this + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (0xa8 < *(ushort *)(*(long *)(this + 0x10) + 0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSReceiver()");
}

