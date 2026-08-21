
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::FeedbackParameter
   const&, v8::internal::compiler::FeedbackParameter const&) */

uint v8::internal::compiler::operator!=(FeedbackParameter *param_1,FeedbackParameter *param_2)

{
  uint uVar1;
  
  uVar1 = operator==((FeedbackSource *)param_1,(FeedbackSource *)param_2);
  return ~uVar1 & 1;
}

