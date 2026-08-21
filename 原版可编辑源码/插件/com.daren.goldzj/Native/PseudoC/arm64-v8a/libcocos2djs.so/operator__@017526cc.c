
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::ConstructParameters
   const&, v8::internal::compiler::ConstructParameters const&) */

uint v8::internal::compiler::operator!=(ConstructParameters *param_1,ConstructParameters *param_2)

{
  uint uVar1;
  
  if ((*(int *)param_1 == *(int *)param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
    uVar1 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8));
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

