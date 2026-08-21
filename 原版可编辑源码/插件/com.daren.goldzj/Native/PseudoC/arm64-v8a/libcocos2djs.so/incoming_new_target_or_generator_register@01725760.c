
/* v8::internal::compiler::BytecodeArrayRef::incoming_new_target_or_generator_register() const */

int __thiscall
v8::internal::compiler::BytecodeArrayRef::incoming_new_target_or_generator_register
          (BytecodeArrayRef *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    iVar1 = *(int *)(*(long *)**(undefined8 **)this + 0x1b);
    iVar3 = 0x7fffffff;
    if (iVar1 != 0) {
      iVar3 = -5 - iVar1;
    }
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x86) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsBytecodeArray()");
    }
    iVar3 = *(int *)(lVar2 + 0x24);
  }
  return iVar3;
}

