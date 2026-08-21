
/* v8::internal::ContextFilter::Accept(v8::internal::ProfileStackFrame const&) */

bool __thiscall v8::internal::ContextFilter::Accept(ContextFilter *this,ProfileStackFrame *param_1)

{
  if (param_1[0x18] != (ProfileStackFrame)0x0) {
    return (*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe) == *(ulong *)this;
  }
  return true;
}

