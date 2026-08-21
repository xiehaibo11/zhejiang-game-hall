
/* v8::internal::Factory::CopyWeakFixedArrayAndGrow(v8::internal::Handle<v8::internal::WeakFixedArray>,
   int) */

void v8::internal::Factory::CopyWeakFixedArrayAndGrow(void)

{
  CopyArrayAndGrow<v8::internal::WeakFixedArray>();
  return;
}

