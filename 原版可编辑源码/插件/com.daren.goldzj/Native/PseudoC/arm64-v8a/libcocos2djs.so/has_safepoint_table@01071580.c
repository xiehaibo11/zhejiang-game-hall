
/* v8::internal::Code::has_safepoint_table() const */

bool __thiscall v8::internal::Code::has_safepoint_table(Code *this)

{
  return *(int *)(*(long *)this + 0x1b) < *(int *)(*(long *)this + 0x1f);
}

