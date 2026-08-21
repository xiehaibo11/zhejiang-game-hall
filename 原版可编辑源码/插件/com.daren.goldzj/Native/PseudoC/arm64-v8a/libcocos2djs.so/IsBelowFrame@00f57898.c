
/* v8::internal::SaveContext::IsBelowFrame(v8::internal::StandardFrame*) */

bool __thiscall v8::internal::SaveContext::IsBelowFrame(SaveContext *this,StandardFrame *param_1)

{
  if (*(ulong *)(this + 0x10) != 0) {
    return *(ulong *)(param_1 + 0x18) < *(ulong *)(this + 0x10);
  }
  return true;
}

