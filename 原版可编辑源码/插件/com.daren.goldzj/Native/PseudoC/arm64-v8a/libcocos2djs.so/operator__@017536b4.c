
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::GetTemplateObjectParameters
   const&, v8::internal::compiler::GetTemplateObjectParameters const&) */

uint v8::internal::compiler::operator!=
               (GetTemplateObjectParameters *param_1,GetTemplateObjectParameters *param_2)

{
  uint uVar1;
  
  if ((*(long *)param_1 == *(long *)param_2) && (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)))
  {
    uVar1 = operator==((FeedbackSource *)(param_1 + 0x10),(FeedbackSource *)(param_2 + 0x10));
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

