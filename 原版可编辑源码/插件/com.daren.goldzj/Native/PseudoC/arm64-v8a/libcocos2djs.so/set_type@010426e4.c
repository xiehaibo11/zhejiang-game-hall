
/* v8::internal::JsonParser<unsigned
   char>::JsonContinuation::set_type(v8::internal::JsonParser<unsigned
   char>::JsonContinuation::Type) */

void __thiscall
v8::internal::JsonParser<unsigned_char>::JsonContinuation::set_type
          (JsonContinuation *this,uint param_2)

{
  *(uint *)(this + 0x18) = *(uint *)(this + 0x18) & 0xfffffffc | param_2 & 3;
  return;
}

