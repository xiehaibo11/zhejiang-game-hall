
/* v8::internal::compiler::Operator1<v8::internal::CompareOperationHint,
   v8::internal::compiler::OpEqualTo<v8::internal::CompareOperationHint>,
   v8::internal::compiler::OpHash<v8::internal::CompareOperationHint>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::CompareOperationHint,v8::internal::compiler::OpEqualTo<v8::internal::CompareOperationHint>,v8::internal::compiler::OpHash<v8::internal::CompareOperationHint>>
::Equals(Operator1<v8::internal::CompareOperationHint,v8::internal::compiler::OpEqualTo<v8::internal::CompareOperationHint>,v8::internal::compiler::OpHash<v8::internal::CompareOperationHint>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return this[0x2c] ==
           *(Operator1<v8::internal::CompareOperationHint,v8::internal::compiler::OpEqualTo<v8::internal::CompareOperationHint>,v8::internal::compiler::OpHash<v8::internal::CompareOperationHint>>
             *)(param_1 + 0x2c);
  }
  return false;
}

