
/* v8::internal::compiler::Operator1<v8::internal::compiler::CloneObjectParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CloneObjectParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CloneObjectParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CloneObjectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CloneObjectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CloneObjectParameters>>
::Equals(Operator1<v8::internal::compiler::CloneObjectParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CloneObjectParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CloneObjectParameters>>
         *this,Operator *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if ((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
     (uVar2 = compiler::operator==
                        ((FeedbackSource *)(this + 0x30),(FeedbackSource *)(param_1 + 0x30)),
     (uVar2 & 1) != 0)) {
    bVar1 = *(int *)(this + 0x40) == *(int *)(param_1 + 0x40);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

