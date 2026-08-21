
/* v8::internal::NativeContext::DeoptimizedCodeListHead() */

ulong __thiscall v8::internal::NativeContext::DeoptimizedCodeListHead(NativeContext *this)

{
  return *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x41b);
}

