
/* v8::internal::NativeContext::IncrementErrorsThrown() */

void __thiscall v8::internal::NativeContext::IncrementErrorsThrown(NativeContext *this)

{
  *(uint *)(*(long *)this + 0xb7) = *(int *)(*(long *)this + 0xb7) + 2U & 0xfffffffe;
  return;
}

