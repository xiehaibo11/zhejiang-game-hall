
/* v8::internal::compiler::FixedArrayBaseRef::length() const */

int __thiscall v8::internal::compiler::FixedArrayBaseRef::length(FixedArrayBaseRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return *(int *)(*(long *)**(undefined8 **)this + 3) >> 1;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
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

