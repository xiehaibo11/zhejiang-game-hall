
/* v8::internal::compiler::BytecodeArrayRef::get(int) const */

undefined1 __thiscall
v8::internal::compiler::BytecodeArrayRef::get(BytecodeArrayRef *this,int param_1)

{
  long lVar1;
  undefined1 *puVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar2 = (undefined1 *)(*(long *)**(undefined8 **)this + (long)param_1 + 0x21);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x86) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsBytecodeArray()");
    }
    puVar2 = (undefined1 *)(*(long *)(lVar1 + 0x30) + (long)param_1);
  }
  return *puVar2;
}

