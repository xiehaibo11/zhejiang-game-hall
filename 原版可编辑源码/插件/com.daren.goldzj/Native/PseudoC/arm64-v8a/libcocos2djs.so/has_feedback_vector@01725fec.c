
/* v8::internal::compiler::JSFunctionRef::has_feedback_vector() const */

bool __thiscall v8::internal::compiler::JSFunctionRef::has_feedback_vector(JSFunctionRef *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar4 = *(ulong *)**(undefined8 **)this;
    uVar3 = uVar4 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) + 3);
    if ((uVar1 != 0x84) &&
       (((uVar1 & 1) == 0 ||
        (1 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95)))) {
      return *(short *)((uVar3 | 7) +
                       (ulong)*(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(uVar4 + 0x13)) + 3)) -
                                       1)) == 0x9f;
    }
    return false;
  }
  lVar2 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x439) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSFunction()");
  }
  return *(char *)(lVar2 + 0xb0) != '\0';
}

