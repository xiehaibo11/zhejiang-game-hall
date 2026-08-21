
/* v8::internal::compiler::JSFunctionRef::has_initial_map() const */

bool __thiscall v8::internal::compiler::JSFunctionRef::has_initial_map(JSFunctionRef *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = *(ulong *)**(undefined8 **)this;
    uVar3 = uVar2 & 0xffffffff00000000;
    return *(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar2 + 0x1b)) - 1)) == 0xa2
    ;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x439) {
      return *(char *)(lVar1 + 0xb1) != '\0';
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSFunction()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

