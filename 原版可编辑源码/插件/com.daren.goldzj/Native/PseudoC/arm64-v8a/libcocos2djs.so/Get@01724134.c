
/* v8::internal::compiler::FixedArrayData::Get(int) const */

void __thiscall v8::internal::compiler::FixedArrayData::Get(FixedArrayData *this,int param_1)

{
  if ((int)((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 3) <= param_1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i < static_cast<int>(contents_.size())");
  }
  if (*(long *)(*(long *)(this + 0x20) + (long)param_1 * 8) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(contents_[i]) != nullptr");
}

