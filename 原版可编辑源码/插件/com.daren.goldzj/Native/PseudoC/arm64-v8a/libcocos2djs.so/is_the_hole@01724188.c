
/* v8::internal::compiler::FixedDoubleArrayRef::is_the_hole(int) const */

bool __thiscall
v8::internal::compiler::FixedDoubleArrayRef::is_the_hole(FixedDoubleArrayRef *this,int param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    plVar2 = (long *)(*(long *)**(undefined8 **)this + (long)(int)(param_1 << 3 | 7));
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x87) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFixedDoubleArray()");
    }
    if ((int)((ulong)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20)) >> 3) <= param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","i < static_cast<int>(contents_.size())");
    }
    plVar2 = (long *)(*(long *)(lVar1 + 0x20) + (long)param_1 * 8);
  }
  return *plVar2 == -0x8000000080001;
}

