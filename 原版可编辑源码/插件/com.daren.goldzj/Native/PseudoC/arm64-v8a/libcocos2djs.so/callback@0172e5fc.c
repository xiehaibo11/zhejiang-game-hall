
/* v8::internal::compiler::CallHandlerInfoRef::callback() const */

undefined8 __thiscall v8::internal::compiler::CallHandlerInfoRef::callback(CallHandlerInfoRef *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar3 = *(ulong *)**(undefined8 **)this;
    uVar1 = *(uint *)(uVar3 + 3);
    if (uVar1 != 0) {
      return *(undefined8 *)((uVar3 & 0xffffffff00000000 | (ulong)uVar1) + 3);
    }
    return 0;
  }
  lVar2 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) == 0x59) {
    return *(undefined8 *)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsCallHandlerInfo()");
}

