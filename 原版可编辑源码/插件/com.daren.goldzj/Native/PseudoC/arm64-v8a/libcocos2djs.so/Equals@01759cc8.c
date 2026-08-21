
/* v8::internal::compiler::Operator1<v8::internal::compiler::CallParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CallParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CallParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

undefined8 __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CallParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CallParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CallParameters>>
::Equals(Operator1<v8::internal::compiler::CallParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CallParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CallParameters>>
         *this,Operator *param_1)

{
  undefined8 uVar1;
  
  if (((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
      (*(int *)(this + 0x30) == *(int *)(param_1 + 0x30))) &&
     (*(int *)(this + 0x34) == *(int *)(param_1 + 0x34))) {
    uVar1 = compiler::operator==((FeedbackSource *)(this + 0x38),(FeedbackSource *)(param_1 + 0x38))
    ;
    return uVar1;
  }
  return 0;
}

