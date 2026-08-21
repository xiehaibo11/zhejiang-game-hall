
/* v8::V8::MakeWeak(unsigned long*, void*, void (*)(v8::WeakCallbackInfo<void> const&),
   v8::WeakCallbackType) */

void v8::V8::MakeWeak(void)

{
  internal::GlobalHandles::MakeWeak();
  return;
}

