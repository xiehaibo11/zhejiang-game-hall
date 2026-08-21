
/* v8::internal::compiler::Operator1<v8::internal::compiler::IfValueParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::IfValueParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::IfValueParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::IfValueParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::IfValueParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::IfValueParameters>>
::Equals(Operator1<v8::internal::compiler::IfValueParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::IfValueParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::IfValueParameters>>
         *this,Operator *param_1)

{
  if ((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
     (*(int *)(this + 0x2c) == *(int *)(param_1 + 0x2c))) {
    return this[0x34] ==
           *(Operator1<v8::internal::compiler::IfValueParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::IfValueParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::IfValueParameters>>
             *)(param_1 + 0x34);
  }
  return false;
}

