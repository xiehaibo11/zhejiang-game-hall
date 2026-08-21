
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CheckFloat64HoleParameters
   const&, v8::internal::compiler::CheckFloat64HoleParameters const&) */

uint v8::internal::compiler::operator!=
               (CheckFloat64HoleParameters *param_1,CheckFloat64HoleParameters *param_2)

{
  uint uVar1;
  
  if (*param_1 == *param_2) {
    uVar1 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8));
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

