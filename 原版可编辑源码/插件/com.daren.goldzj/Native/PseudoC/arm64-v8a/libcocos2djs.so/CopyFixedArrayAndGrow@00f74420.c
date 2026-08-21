
/* v8::internal::Factory::CopyFixedArrayAndGrow(v8::internal::Handle<v8::internal::FixedArray>, int)
    */

void v8::internal::Factory::CopyFixedArrayAndGrow(void)

{
  CopyArrayAndGrow<v8::internal::FixedArray>();
  return;
}

