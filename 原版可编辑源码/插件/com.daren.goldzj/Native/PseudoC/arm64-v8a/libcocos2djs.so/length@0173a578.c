
/* v8::internal::compiler::OffHeapBytecodeArray::length() const */

int __thiscall v8::internal::compiler::OffHeapBytecodeArray::length(OffHeapBytecodeArray *this)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (*(int *)(puVar2 + 1) == 2) {
    return *(int *)(*(long *)*puVar2 + 3) >> 1;
  }
  lVar1 = ObjectRef::data((ObjectRef *)(this + 8));
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(ushort *)(*(long *)(lVar1 + 0x10) + 0x18) - 0x76 < 0x12) {
      return *(int *)(lVar1 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFixedArrayBase()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

