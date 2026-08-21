
/* v8::internal::JsonParser<unsigned
   short>::JsonContinuation::set_type(v8::internal::JsonParser<unsigned
   short>::JsonContinuation::Type) */

void __thiscall
v8::internal::JsonParser<unsigned_short>::JsonContinuation::set_type
          (JsonContinuation *this,uint param_2)

{
  *(uint *)(this + 0x18) = *(uint *)(this + 0x18) & 0xfffffffc | param_2 & 3;
  return;
}

