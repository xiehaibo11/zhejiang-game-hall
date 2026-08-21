
/* v8::internal::compiler::ScopeInfoRef::Flags() const */

int __thiscall v8::internal::compiler::ScopeInfoRef::Flags(ScopeInfoRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    lVar1 = *(long *)**(undefined8 **)this;
    if (1 < *(int *)(lVar1 + 3)) {
      return *(int *)(lVar1 + 7) >> 1;
    }
    return 0;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x83) {
    return *(int *)(lVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsScopeInfo()");
}

