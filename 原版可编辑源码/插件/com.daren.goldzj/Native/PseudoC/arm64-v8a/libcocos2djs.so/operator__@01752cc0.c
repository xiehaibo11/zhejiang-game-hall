
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::StoreNamedOwnParameters
   const&, v8::internal::compiler::StoreNamedOwnParameters const&) */

uint v8::internal::compiler::operator!=
               (StoreNamedOwnParameters *param_1,StoreNamedOwnParameters *param_2)

{
  uint uVar1;
  
  if (*(long *)param_1 == *(long *)param_2) {
    uVar1 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8));
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

