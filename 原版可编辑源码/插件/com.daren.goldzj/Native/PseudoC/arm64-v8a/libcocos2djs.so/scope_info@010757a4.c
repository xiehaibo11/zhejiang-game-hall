
/* v8::internal::Context::scope_info() */

ulong __thiscall v8::internal::Context::scope_info(Context *this)

{
  return *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
}

