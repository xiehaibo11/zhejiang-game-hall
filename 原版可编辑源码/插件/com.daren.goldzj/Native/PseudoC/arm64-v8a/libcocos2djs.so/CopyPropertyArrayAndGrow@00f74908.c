
/* v8::internal::Factory::CopyPropertyArrayAndGrow(v8::internal::Handle<v8::internal::PropertyArray>,
   int) */

void v8::internal::Factory::CopyPropertyArrayAndGrow(void)

{
  CopyArrayAndGrow<v8::internal::PropertyArray>();
  return;
}

