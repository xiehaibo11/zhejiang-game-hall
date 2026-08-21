
/* v8::internal::compiler::StringRef::length() const */

undefined4 __thiscall v8::internal::compiler::StringRef::length(StringRef *this)

{
  long lVar1;
  undefined4 *puVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar2 = (undefined4 *)(*(long *)**(undefined8 **)this + 7);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (0x3f < *(ushort *)(*(long *)(lVar1 + 0x10) + 0x18)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsString()");
    }
    puVar2 = (undefined4 *)(lVar1 + 0x18);
  }
  return *puVar2;
}

