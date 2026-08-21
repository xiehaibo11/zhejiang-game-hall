
/* v8::internal::NativeContext::OptimizedCodeListHead() */

ulong __thiscall v8::internal::NativeContext::OptimizedCodeListHead(NativeContext *this)

{
  return *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x417);
}

