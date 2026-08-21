
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateFunctionContextParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateFunctionContextParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateFunctionContextParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CreateFunctionContextParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateFunctionContextParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateFunctionContextParameters>>
::Equals(Operator1<v8::internal::compiler::CreateFunctionContextParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateFunctionContextParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateFunctionContextParameters>>
         *this,Operator *param_1)

{
  if (((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
      (*(long *)(this + 0x30) == *(long *)(param_1 + 0x30))) &&
     (*(int *)(this + 0x38) == *(int *)(param_1 + 0x38))) {
    return this[0x3c] ==
           *(Operator1<v8::internal::compiler::CreateFunctionContextParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateFunctionContextParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateFunctionContextParameters>>
             *)(param_1 + 0x3c);
  }
  return false;
}

