
/* v8::internal::Code::handler_table_size() const */

int __thiscall v8::internal::Code::handler_table_size(Code *this)

{
  return *(int *)(*(long *)this + 0x23) - *(int *)(*(long *)this + 0x1f);
}

