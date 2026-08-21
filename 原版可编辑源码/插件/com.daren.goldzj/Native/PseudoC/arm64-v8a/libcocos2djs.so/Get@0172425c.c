
/* v8::internal::compiler::FixedDoubleArrayData::Get(int) const */

undefined8 __thiscall
v8::internal::compiler::FixedDoubleArrayData::Get(FixedDoubleArrayData *this,int param_1)

{
  if (param_1 < (int)((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x20) + (long)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","i < static_cast<int>(contents_.size())");
}

