
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::NumberOperationParameters
   const&, v8::internal::compiler::NumberOperationParameters const&) */

undefined8
v8::internal::compiler::operator==
          (NumberOperationParameters *param_1,NumberOperationParameters *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == *param_2) {
    uVar1 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8));
    return uVar1;
  }
  return 0;
}

