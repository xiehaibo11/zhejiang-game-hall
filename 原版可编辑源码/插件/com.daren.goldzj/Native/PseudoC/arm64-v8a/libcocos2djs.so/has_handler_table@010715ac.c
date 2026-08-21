
/* v8::internal::Code::has_handler_table() const */

bool __thiscall v8::internal::Code::has_handler_table(Code *this)

{
  return *(int *)(*(long *)this + 0x1f) < *(int *)(*(long *)this + 0x23);
}

