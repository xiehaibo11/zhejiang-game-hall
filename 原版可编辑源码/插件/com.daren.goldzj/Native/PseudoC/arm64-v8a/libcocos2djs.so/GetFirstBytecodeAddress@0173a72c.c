
/* v8::internal::compiler::OffHeapBytecodeArray::GetFirstBytecodeAddress() const */

long __thiscall
v8::internal::compiler::OffHeapBytecodeArray::GetFirstBytecodeAddress(OffHeapBytecodeArray *this)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (*(int *)(puVar2 + 1) == 2) {
    return *(long *)*puVar2 + 0x21;
  }
  lVar1 = ObjectRef::data((ObjectRef *)(this + 8));
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

