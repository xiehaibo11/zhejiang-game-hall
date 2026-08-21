
/* v8::internal::DescriptorArray::CopyUpTo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::DescriptorArray>, int, int) */

void v8::internal::DescriptorArray::CopyUpTo(void)

{
  CopyUpToAddAttributes();
  return;
}

