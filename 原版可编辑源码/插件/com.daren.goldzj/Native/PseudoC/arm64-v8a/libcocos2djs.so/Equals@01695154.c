
/* v8::internal::compiler::Operator1<v8::internal::compiler::TypedObjectStateInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedObjectStateInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::TypedObjectStateInfo>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::TypedObjectStateInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedObjectStateInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::TypedObjectStateInfo>>
::Equals(Operator1<v8::internal::compiler::TypedObjectStateInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TypedObjectStateInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::TypedObjectStateInfo>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(int *)(this + 0x30) == *(int *)(param_1 + 0x30) &&
           *(long *)(this + 0x38) == *(long *)(param_1 + 0x38);
  }
  return false;
}

