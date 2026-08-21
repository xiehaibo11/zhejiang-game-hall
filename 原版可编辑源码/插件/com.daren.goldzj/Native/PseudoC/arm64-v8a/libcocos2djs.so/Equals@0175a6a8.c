
/* v8::internal::compiler::Operator1<v8::internal::compiler::GetIteratorParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::GetIteratorParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::GetIteratorParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

undefined8 __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::GetIteratorParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::GetIteratorParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::GetIteratorParameters>>
::Equals(Operator1<v8::internal::compiler::GetIteratorParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::GetIteratorParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::GetIteratorParameters>>
         *this,Operator *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
     (uVar1 = compiler::operator==
                        ((FeedbackSource *)(this + 0x30),(FeedbackSource *)(param_1 + 0x30)),
     (uVar1 & 1) != 0)) {
    uVar2 = compiler::operator==((FeedbackSource *)(this + 0x40),(FeedbackSource *)(param_1 + 0x40))
    ;
    return uVar2;
  }
  return 0;
}

