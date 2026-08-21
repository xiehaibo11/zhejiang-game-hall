
/* v8::internal::SimpleStringResource<char,
   v8::String::ExternalOneByteStringResource>::~SimpleStringResource() */

void __thiscall
v8::internal::SimpleStringResource<char,v8::String::ExternalOneByteStringResource>::
~SimpleStringResource(SimpleStringResource<char,v8::String::ExternalOneByteStringResource> *this)

{
  *(undefined ***)this = &PTR__SimpleStringResource_01cc6af8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}

