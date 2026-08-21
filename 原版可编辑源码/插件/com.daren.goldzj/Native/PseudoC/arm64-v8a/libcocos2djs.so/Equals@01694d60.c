
/* v8::internal::compiler::Operator1<v8::internal::compiler::TypedStateValueInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedStateValueInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::TypedStateValueInfo>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::TypedStateValueInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedStateValueInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::TypedStateValueInfo>>
::Equals(Operator1<v8::internal::compiler::TypedStateValueInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedStateValueInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::TypedStateValueInfo>>
         *this,Operator *param_1)

{
  if ((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
     (*(long *)(this + 0x30) == *(long *)(param_1 + 0x30))) {
    return *(int *)(this + 0x38) == *(int *)(param_1 + 0x38);
  }
  return false;
}

