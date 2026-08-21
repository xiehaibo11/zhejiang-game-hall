
/* v8::internal::compiler::SharedFunctionInfoRef::function_map_index() const */

int __thiscall
v8::internal::compiler::SharedFunctionInfoRef::function_map_index(SharedFunctionInfoRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return (*(uint *)(*(long *)**(undefined8 **)this + 0x1b) >> 0xf & 0x1f) + 0xa9;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0xa6) {
      return *(int *)(lVar1 + 0x30);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

