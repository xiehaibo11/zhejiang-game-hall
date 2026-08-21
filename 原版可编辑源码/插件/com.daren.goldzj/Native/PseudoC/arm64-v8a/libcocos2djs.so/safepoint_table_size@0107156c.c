
/* v8::internal::Code::safepoint_table_size() const */

int __thiscall v8::internal::Code::safepoint_table_size(Code *this)

{
  return *(int *)(*(long *)this + 0x1f) - *(int *)(*(long *)this + 0x1b);
}

