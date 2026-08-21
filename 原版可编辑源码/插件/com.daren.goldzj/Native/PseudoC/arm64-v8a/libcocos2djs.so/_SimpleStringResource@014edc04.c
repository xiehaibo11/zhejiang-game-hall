
/* v8::internal::SimpleStringResource<unsigned short,
   v8::String::ExternalStringResource>::~SimpleStringResource() */

void __thiscall
v8::internal::SimpleStringResource<unsigned_short,v8::String::ExternalStringResource>::
~SimpleStringResource(SimpleStringResource<unsigned_short,v8::String::ExternalStringResource> *this)

{
  *(undefined ***)this = &PTR__SimpleStringResource_01cc6b48;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}

