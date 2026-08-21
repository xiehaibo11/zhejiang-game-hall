
/* v8::internal::compiler::JSTypedArrayRef::data_ptr() const */

long __thiscall v8::internal::compiler::JSTypedArrayRef::data_ptr(JSTypedArrayRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    lVar1 = *(long *)**(undefined8 **)this;
    return *(long *)(lVar1 + 0x27) + (ulong)*(uint *)(lVar1 + 0x2f);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x41b) {
      return *(long *)(lVar1 + 0xc0);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSTypedArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

