
/* v8::internal::compiler::Operator1<v8::internal::compiler::ContextAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ContextAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ContextAccess>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ContextAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ContextAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ContextAccess>>
::Equals(Operator1<v8::internal::compiler::ContextAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ContextAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ContextAccess>>
         *this,Operator *param_1)

{
  if (((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
      (*(short *)(this + 0x2e) == *(short *)(param_1 + 0x2e))) &&
     (*(int *)(this + 0x30) == *(int *)(param_1 + 0x30))) {
    return (this[0x2c] ==
           (Operator1<v8::internal::compiler::ContextAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ContextAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ContextAccess>>
            )0x0) != (param_1[0x2c] != (Operator)0x0);
  }
  return false;
}

