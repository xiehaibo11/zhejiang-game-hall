
/* v8::internal::compiler::AllocationSiteRef::GetAllocationType() const */

ulong __thiscall
v8::internal::compiler::AllocationSiteRef::GetAllocationType(AllocationSiteRef *this)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_18;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    local_18 = *(undefined8 *)**(undefined8 **)this;
    uVar1 = AllocationSite::GetAllocationType((AllocationSite *)&local_18);
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x55) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsAllocationSite()");
    }
    uVar1 = (ulong)*(byte *)(lVar2 + 0x19);
  }
  return uVar1;
}

