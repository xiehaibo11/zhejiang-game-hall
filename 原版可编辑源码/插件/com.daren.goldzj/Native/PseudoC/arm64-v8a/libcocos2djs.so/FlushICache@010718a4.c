
/* v8::internal::Code::FlushICache() const */

void __thiscall v8::internal::Code::FlushICache(Code *this)

{
  FlushInstructionCache((void *)(*(long *)this + 0x3f),(long)*(int *)(*(long *)this + 0x13));
  return;
}

