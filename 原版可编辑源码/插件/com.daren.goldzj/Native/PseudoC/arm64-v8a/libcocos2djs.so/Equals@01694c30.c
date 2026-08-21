
/* v8::internal::compiler::Operator1<v8::internal::compiler::SelectParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::SelectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters>>
::Equals(Operator1<v8::internal::compiler::SelectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return this[0x2c] ==
           *(Operator1<v8::internal::compiler::SelectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters>>
             *)(param_1 + 0x2c) &&
           this[0x2d] ==
           *(Operator1<v8::internal::compiler::SelectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SelectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::SelectParameters>>
             *)(param_1 + 0x2d);
  }
  return false;
}

