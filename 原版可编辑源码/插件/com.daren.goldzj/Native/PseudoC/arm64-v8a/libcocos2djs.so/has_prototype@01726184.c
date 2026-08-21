
/* v8::internal::compiler::JSFunctionRef::has_prototype() const */

bool __thiscall v8::internal::compiler::JSFunctionRef::has_prototype(JSFunctionRef *this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar4 = *(ulong *)**(undefined8 **)this;
    uVar3 = uVar4 & 0xffffffff00000000;
    if (((*(byte *)((uVar3 | 9) + (ulong)*(uint *)(uVar4 - 1)) & 1) != 0) ||
       (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar3 + *(uint *)(uVar4 + 0x1b) + -1)) == 0xa2)) {
      return true;
    }
    bVar1 = *(uint *)(uVar4 + 0x1b) == *(uint *)(uVar3 + 0xa8);
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x439) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSFunction()");
    }
    bVar1 = *(char *)(lVar2 + 0xb2) == '\0';
  }
  return !bVar1;
}

