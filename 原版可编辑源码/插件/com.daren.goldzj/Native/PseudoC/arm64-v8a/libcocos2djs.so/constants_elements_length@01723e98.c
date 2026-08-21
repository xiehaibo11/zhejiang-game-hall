
/* v8::internal::compiler::ArrayBoilerplateDescriptionRef::constants_elements_length() const */

int __thiscall
v8::internal::compiler::ArrayBoilerplateDescriptionRef::constants_elements_length
          (ArrayBoilerplateDescriptionRef *this)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = *(ulong *)**(undefined8 **)this;
    return *(int *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 7)) + 3) >> 1;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x56) {
      return *(int *)(lVar1 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsArrayBoilerplateDescription()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

