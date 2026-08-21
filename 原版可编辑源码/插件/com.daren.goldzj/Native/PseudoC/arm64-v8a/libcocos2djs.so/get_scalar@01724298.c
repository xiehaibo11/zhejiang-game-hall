
/* v8::internal::compiler::FixedDoubleArrayRef::get_scalar(int) const */

undefined1  [16] __thiscall
v8::internal::compiler::FixedDoubleArrayRef::get_scalar(FixedDoubleArrayRef *this,int param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar2 = (ulong *)(*(long *)**(undefined8 **)this + (long)(int)(param_1 << 3 | 7));
LAB_01724358:
    auVar3._0_8_ = *puVar2;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x87) {
LAB_0172437c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFixedDoubleArray()");
    }
    if (param_1 < (int)((ulong)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20)) >> 3)) {
      if (*(long *)(*(long *)(lVar1 + 0x20) + (long)param_1 * 8) == -0x8000000080001) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!data()->AsFixedDoubleArray()->Get(i).is_hole_nan()");
      }
      lVar1 = ObjectRef::data((ObjectRef *)this);
      if (*(int *)(lVar1 + 8) != 1) goto LAB_01724368;
      if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x87) goto LAB_0172437c;
      if (param_1 < (int)((ulong)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20)) >> 3)) {
        puVar2 = (ulong *)(*(long *)(lVar1 + 0x20) + (long)param_1 * 8);
        goto LAB_01724358;
      }
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i < static_cast<int>(contents_.size())");
  }
LAB_01724368:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

