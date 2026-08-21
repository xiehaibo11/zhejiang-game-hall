
/* v8::internal::compiler::JSDataViewRef::byte_length() const */

undefined8 __thiscall v8::internal::compiler::JSDataViewRef::byte_length(JSDataViewRef *this)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar2 = (undefined8 *)(*(long *)**(undefined8 **)this + 0x17);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x41a) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSDataView()");
    }
    puVar2 = (undefined8 *)(lVar1 + 0xb0);
  }
  return *puVar2;
}

