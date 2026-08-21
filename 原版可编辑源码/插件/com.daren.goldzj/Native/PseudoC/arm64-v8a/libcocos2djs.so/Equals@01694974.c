
/* v8::internal::compiler::Operator1<v8::internal::compiler::RelocatablePtrConstantInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::RelocatablePtrConstantInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::RelocatablePtrConstantInfo>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::RelocatablePtrConstantInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RelocatablePtrConstantInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::RelocatablePtrConstantInfo>>
::Equals(Operator1<v8::internal::compiler::RelocatablePtrConstantInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RelocatablePtrConstantInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::RelocatablePtrConstantInfo>>
         *this,Operator *param_1)

{
  if (((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
      (this[0x38] ==
       *(Operator1<v8::internal::compiler::RelocatablePtrConstantInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RelocatablePtrConstantInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::RelocatablePtrConstantInfo>>
         *)(param_1 + 0x38))) && (*(long *)(this + 0x30) == *(long *)(param_1 + 0x30))) {
    return *(int *)(this + 0x3c) == *(int *)(param_1 + 0x3c);
  }
  return false;
}

