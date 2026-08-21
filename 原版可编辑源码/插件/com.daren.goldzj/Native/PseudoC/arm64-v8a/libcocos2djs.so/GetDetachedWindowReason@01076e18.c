
/* v8::internal::NativeContext::GetDetachedWindowReason() const */

int __thiscall v8::internal::NativeContext::GetDetachedWindowReason(NativeContext *this)

{
  return *(int *)(*(long *)this + 0x3d3) >> 1;
}

