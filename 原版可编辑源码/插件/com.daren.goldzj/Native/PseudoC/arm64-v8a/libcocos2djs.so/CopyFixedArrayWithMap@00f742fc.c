
/* v8::internal::Factory::CopyFixedArrayWithMap(v8::internal::Handle<v8::internal::FixedArray>,
   v8::internal::Handle<v8::internal::Map>) */

void v8::internal::Factory::CopyFixedArrayWithMap(void)

{
  CopyArrayWithMap<v8::internal::FixedArray>();
  return;
}

