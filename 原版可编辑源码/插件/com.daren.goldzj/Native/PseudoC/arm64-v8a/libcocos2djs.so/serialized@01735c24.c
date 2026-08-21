
/* v8::internal::compiler::JSTypedArrayRef::serialized() const */

undefined1 __thiscall v8::internal::compiler::JSTypedArrayRef::serialized(JSTypedArrayRef *this)

{
  long lVar1;
  
  if (*(int *)(*(long *)(this + 8) + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","broker()->mode() != JSHeapBroker::kDisabled");
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x41b) {
      return *(undefined1 *)(lVar1 + 200);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSTypedArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

