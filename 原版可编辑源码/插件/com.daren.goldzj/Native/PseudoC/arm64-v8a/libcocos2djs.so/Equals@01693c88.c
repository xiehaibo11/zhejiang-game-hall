
/* v8::internal::compiler::Operator1<v8::internal::compiler::SparseInputMask,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::SparseInputMask>,
   v8::internal::compiler::OpHash<v8::internal::compiler::SparseInputMask>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::SparseInputMask,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SparseInputMask>,v8::internal::compiler::OpHash<v8::internal::compiler::SparseInputMask>>
::Equals(Operator1<v8::internal::compiler::SparseInputMask,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SparseInputMask>,v8::internal::compiler::OpHash<v8::internal::compiler::SparseInputMask>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(int *)(this + 0x2c) == *(int *)(param_1 + 0x2c);
  }
  return false;
}

