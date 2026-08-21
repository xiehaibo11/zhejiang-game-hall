
/* v8::internal::compiler::SharedFunctionInfoRef::HasBytecodeArray() const */

bool __thiscall
v8::internal::compiler::SharedFunctionInfoRef::HasBytecodeArray(SharedFunctionInfoRef *this)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar4 = *(ulong *)**(undefined8 **)this;
    puVar1 = (uint *)(uVar4 + 3);
    uVar2 = *puVar1;
    uVar4 = uVar4 & 0xffffffff00000000;
    if (((uVar2 & 1) != 0) &&
       (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar2) - 1)) == 0x86)) {
      return true;
    }
    uVar2 = *puVar1;
    if ((uVar2 & 1) == 0) {
      return false;
    }
    return *(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar2) - 1)) == 0x61;
  }
  lVar3 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) == 0xa6) {
    return *(char *)(lVar3 + 0x3a) != '\0';
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
}

