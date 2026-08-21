
/* v8::internal::compiler::Operator1<char const*, v8::internal::compiler::OpEqualTo<char const*>,
   v8::internal::compiler::OpHash<char const*> >::Equals(v8::internal::compiler::Operator const*)
   const */

bool __thiscall
v8::internal::compiler::
Operator1<char_const*,v8::internal::compiler::OpEqualTo<char_const*>,v8::internal::compiler::OpHash<char_const*>>
::Equals(Operator1<char_const*,v8::internal::compiler::OpEqualTo<char_const*>,v8::internal::compiler::OpHash<char_const*>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(long *)(this + 0x30) == *(long *)(param_1 + 0x30);
  }
  return false;
}

