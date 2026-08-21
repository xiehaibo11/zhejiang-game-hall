
/* v8::internal::compiler::AllocationSiteRef::PointsToLiteral() const */

bool __thiscall v8::internal::compiler::AllocationSiteRef::PointsToLiteral(AllocationSiteRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return (bool)(*(byte *)(*(long *)**(undefined8 **)this + 3) & 1);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x55) {
      return *(char *)(lVar1 + 0x18) != '\0';
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAllocationSite()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

