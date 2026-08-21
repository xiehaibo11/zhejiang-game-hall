
/* v8::internal::compiler::BytecodeArrayRef::source_positions_size() const */

int __thiscall
v8::internal::compiler::BytecodeArrayRef::source_positions_size(BytecodeArrayRef *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(int *)(*(undefined8 **)this + 1) != 2) {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) == 0x86) {
      return *(int *)(lVar2 + 0x58) - *(int *)(lVar2 + 0x50);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsBytecodeArray()");
  }
  uVar3 = *(ulong *)**(undefined8 **)this;
  uVar1 = *(uint *)(uVar3 + 0xf);
  uVar3 = uVar3 & 0xffffffff00000000;
  if (((uVar1 & 1) == 0) ||
     ((uVar1 != *(uint *)(uVar3 + 0xa0) && (uVar1 != *(uint *)(uVar3 + 0x180))))) {
    uVar4 = uVar3 | uVar1;
    if (((uVar1 & 1) != 0) && (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x85))
    goto LAB_0172516c;
    if (uVar1 != *(uint *)(uVar3 + 0x180)) {
      uVar4 = uVar3 | *(uint *)(uVar4 + 3);
      goto LAB_0172516c;
    }
  }
  uVar4 = *(ulong *)(uVar3 + 0x3c0);
LAB_0172516c:
  return *(int *)(uVar4 + 3) >> 1;
}

