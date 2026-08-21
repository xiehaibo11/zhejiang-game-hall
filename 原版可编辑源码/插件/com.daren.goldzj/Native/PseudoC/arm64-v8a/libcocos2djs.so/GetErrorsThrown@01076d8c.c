
/* v8::internal::NativeContext::GetErrorsThrown() */

int __thiscall v8::internal::NativeContext::GetErrorsThrown(NativeContext *this)

{
  return *(int *)(*(long *)this + 0xb7) >> 1;
}

