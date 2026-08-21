
/* v8::internal::compiler::JSFunctionRef::PrototypeRequiresRuntimeLookup() const */

bool __thiscall
v8::internal::compiler::JSFunctionRef::PrototypeRequiresRuntimeLookup(JSFunctionRef *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = *(ulong *)**(undefined8 **)this;
    uVar3 = uVar2 & 0xffffffff00000000 | 9;
    if (((-1 < *(char *)(uVar3 + *(uint *)(uVar2 - 1))) ||
        ((*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) >> 6 & 1) == 0)) &&
       (3 < ((*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) + 0x1b) & 0x1f)
             - 0xd & 0xff))) {
      return true;
    }
    return (bool)(*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) & 1);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x439) {
    return *(char *)(lVar1 + 0xb3) != '\0';
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSFunction()");
}

