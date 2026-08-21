
/* v8::internal::compiler::SharedFunctionInfoRef::HasBreakInfo() const */

byte __thiscall
v8::internal::compiler::SharedFunctionInfoRef::HasBreakInfo(SharedFunctionInfoRef *this)

{
  byte bVar1;
  long lVar2;
  undefined8 local_18;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    local_18 = *(undefined8 *)**(undefined8 **)this;
    bVar1 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_18);
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    bVar1 = *(char *)(lVar2 + 0x37) != '\0';
  }
  return bVar1 & 1;
}

