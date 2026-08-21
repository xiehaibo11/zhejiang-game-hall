
/* v8::internal::compiler::JSTypedArrayRef::is_on_heap() const */

bool __thiscall v8::internal::compiler::JSTypedArrayRef::is_on_heap(JSTypedArrayRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    lVar1 = *(long *)**(undefined8 **)this;
    return *(int *)(lVar1 + 0x2f) == *(int *)(lVar1 + 7);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x41b) {
      return *(char *)(lVar1 + 0xb0) != '\0';
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSTypedArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

