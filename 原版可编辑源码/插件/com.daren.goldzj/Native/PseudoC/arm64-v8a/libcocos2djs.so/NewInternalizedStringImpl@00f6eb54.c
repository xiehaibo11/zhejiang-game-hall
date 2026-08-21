
/* v8::internal::Factory::NewInternalizedStringImpl(v8::internal::Handle<v8::internal::String>, int,
   unsigned int) */

void v8::internal::Factory::NewInternalizedStringImpl(undefined8 param_1,ulong *param_2)

{
  if ((*(byte *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) >> 3 & 1) ==
      0) {
    AllocateInternalizedStringImpl<false,v8::internal::Handle<v8::internal::String>>();
    return;
  }
  AllocateInternalizedStringImpl<true,v8::internal::Handle<v8::internal::String>>();
  return;
}

