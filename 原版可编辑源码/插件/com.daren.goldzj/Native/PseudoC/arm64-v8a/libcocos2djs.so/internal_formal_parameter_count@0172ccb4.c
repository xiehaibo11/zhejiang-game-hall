
/* v8::internal::compiler::SharedFunctionInfoRef::internal_formal_parameter_count() const */

uint __thiscall
v8::internal::compiler::SharedFunctionInfoRef::internal_formal_parameter_count
          (SharedFunctionInfoRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return (uint)*(ushort *)(*(long *)**(undefined8 **)this + 0x15);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0xa6) {
      return *(uint *)(lVar1 + 0x28);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

