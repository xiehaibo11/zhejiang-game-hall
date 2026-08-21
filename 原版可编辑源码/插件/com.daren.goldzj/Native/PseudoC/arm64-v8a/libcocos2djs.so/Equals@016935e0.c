
/* v8::internal::compiler::Operator1<v8::internal::compiler::TrapId,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::TrapId>,
   v8::internal::compiler::OpHash<v8::internal::compiler::TrapId>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::TrapId,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TrapId>,v8::internal::compiler::OpHash<v8::internal::compiler::TrapId>>
::Equals(Operator1<v8::internal::compiler::TrapId,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TrapId>,v8::internal::compiler::OpHash<v8::internal::compiler::TrapId>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(int *)(this + 0x2c) == *(int *)(param_1 + 0x2c);
  }
  return false;
}

