
/* v8::internal::compiler::BytecodeArrayRef::register_count() const */

int __thiscall v8::internal::compiler::BytecodeArrayRef::register_count(BytecodeArrayRef *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    iVar2 = *(int *)(*(long *)**(undefined8 **)this + 0x13);
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    return iVar1 >> 3;
  }
  lVar3 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar3 + 8) == 1) {
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) == 0x86) {
      return *(int *)(lVar3 + 0x1c);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsBytecodeArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

