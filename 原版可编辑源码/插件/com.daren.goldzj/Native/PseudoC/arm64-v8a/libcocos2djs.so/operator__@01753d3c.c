
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::GetIteratorParameters
   const&, v8::internal::compiler::GetIteratorParameters const&) */

uint v8::internal::compiler::operator!=
               (GetIteratorParameters *param_1,GetIteratorParameters *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = operator==((FeedbackSource *)param_1,(FeedbackSource *)param_2);
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = operator==((FeedbackSource *)(param_1 + 0x10),(FeedbackSource *)(param_2 + 0x10));
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

