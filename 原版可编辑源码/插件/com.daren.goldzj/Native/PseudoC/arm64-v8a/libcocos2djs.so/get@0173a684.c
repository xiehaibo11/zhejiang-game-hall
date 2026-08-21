
/* v8::internal::compiler::OffHeapBytecodeArray::get(int) const */

undefined1 __thiscall
v8::internal::compiler::OffHeapBytecodeArray::get(OffHeapBytecodeArray *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (*(int *)(puVar2 + 1) == 2) {
    puVar3 = (undefined1 *)(*(long *)*puVar2 + (long)param_1 + 0x21);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)(this + 8));
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x86) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsBytecodeArray()");
    }
    puVar3 = (undefined1 *)(*(long *)(lVar1 + 0x30) + (long)param_1);
  }
  return *puVar3;
}

