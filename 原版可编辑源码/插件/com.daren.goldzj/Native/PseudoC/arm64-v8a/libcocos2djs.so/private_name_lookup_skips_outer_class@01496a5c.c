
/* v8::internal::FunctionLiteral::private_name_lookup_skips_outer_class() const */

byte __thiscall
v8::internal::FunctionLiteral::private_name_lookup_skips_outer_class(FunctionLiteral *this)

{
  return *(byte *)(*(long *)(this + 0x28) + 0x82) >> 1 & 1;
}

