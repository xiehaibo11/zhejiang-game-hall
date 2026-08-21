
/* v8::internal::compiler::Operator1<v8::internal::compiler::AllocateParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::AllocateParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters>>
::Equals(Operator1<v8::internal::compiler::AllocateParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return this[0x38] ==
           *(Operator1<v8::internal::compiler::AllocateParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters>>
             *)(param_1 + 0x38) && *(long *)(this + 0x30) == *(long *)(param_1 + 0x30);
  }
  return false;
}

