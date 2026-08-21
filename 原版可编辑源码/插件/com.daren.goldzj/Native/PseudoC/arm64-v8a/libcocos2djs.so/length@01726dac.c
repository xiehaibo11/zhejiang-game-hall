
/* v8::internal::compiler::JSTypedArrayRef::length() const */

undefined8 __thiscall v8::internal::compiler::JSTypedArrayRef::length(JSTypedArrayRef *this)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar2 = (undefined8 *)(*(long *)**(undefined8 **)this + 0x1f);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x41b) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSTypedArray()");
    }
    puVar2 = (undefined8 *)(lVar1 + 0xb8);
  }
  return *puVar2;
}

