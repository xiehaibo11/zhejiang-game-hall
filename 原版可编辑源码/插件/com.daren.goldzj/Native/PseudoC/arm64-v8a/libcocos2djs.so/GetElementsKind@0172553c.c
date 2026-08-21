
/* v8::internal::compiler::AllocationSiteRef::GetElementsKind() const */

byte __thiscall v8::internal::compiler::AllocationSiteRef::GetElementsKind(AllocationSiteRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return *(byte *)(*(long *)**(undefined8 **)this + 3) >> 1 & 0x1f;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x55) {
      return *(byte *)(lVar1 + 0x38);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAllocationSite()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

