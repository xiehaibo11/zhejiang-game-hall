
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::GetIteratorParameters
   const&, v8::internal::compiler::GetIteratorParameters const&) */

undefined8
v8::internal::compiler::operator==(GetIteratorParameters *param_1,GetIteratorParameters *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = operator==((FeedbackSource *)param_1,(FeedbackSource *)param_2);
  if ((uVar1 & 1) != 0) {
    uVar2 = operator==((FeedbackSource *)(param_1 + 0x10),(FeedbackSource *)(param_2 + 0x10));
    return uVar2;
  }
  return 0;
}

