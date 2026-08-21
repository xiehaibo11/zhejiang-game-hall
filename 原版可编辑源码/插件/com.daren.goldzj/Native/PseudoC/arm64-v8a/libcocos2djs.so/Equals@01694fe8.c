
/* v8::internal::compiler::Operator1<v8::internal::compiler::ObjectStateInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectStateInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ObjectStateInfo>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ObjectStateInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectStateInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::ObjectStateInfo>>
::Equals(Operator1<v8::internal::compiler::ObjectStateInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectStateInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::ObjectStateInfo>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(int *)(this + 0x2c) == *(int *)(param_1 + 0x2c) &&
           *(int *)(this + 0x30) == *(int *)(param_1 + 0x30);
  }
  return false;
}

