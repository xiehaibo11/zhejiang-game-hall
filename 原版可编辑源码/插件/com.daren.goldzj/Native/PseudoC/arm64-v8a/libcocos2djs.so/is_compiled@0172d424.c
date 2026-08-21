
/* v8::internal::compiler::SharedFunctionInfoRef::is_compiled() const */

bool __thiscall
v8::internal::compiler::SharedFunctionInfoRef::is_compiled(SharedFunctionInfoRef *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) != 2) {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) == 0xa6) {
      return *(char *)(lVar2 + 0x44) != '\0';
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  uVar3 = *(ulong *)**(undefined8 **)this;
  uVar1 = *(uint *)(uVar3 + 3);
  if (uVar1 == 0x84) {
    return false;
  }
  if ((uVar1 & 1) == 0) {
    return true;
  }
  uVar3 = uVar3 & 0xffffffff00000000;
  return 1 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95;
}

