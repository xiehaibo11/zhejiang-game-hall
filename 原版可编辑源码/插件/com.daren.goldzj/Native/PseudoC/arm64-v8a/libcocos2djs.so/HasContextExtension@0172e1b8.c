
/* v8::internal::compiler::ScopeInfoRef::HasContextExtension() const */

uint __thiscall v8::internal::compiler::ScopeInfoRef::HasContextExtension(ScopeInfoRef *this)

{
  uint uVar1;
  long lVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    lVar2 = *(long *)**(undefined8 **)this;
    if (*(int *)(lVar2 + 3) < 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(lVar2 + 7) >> 1;
    }
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x83) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsScopeInfo()");
    }
    uVar1 = *(uint *)(lVar2 + 0x20);
  }
  return uVar1 >> 0x1a & 1;
}

