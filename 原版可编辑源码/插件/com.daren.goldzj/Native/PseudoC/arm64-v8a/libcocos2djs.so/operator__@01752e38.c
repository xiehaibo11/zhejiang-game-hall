
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::NamedAccess const&,
   v8::internal::compiler::NamedAccess const&) */

uint v8::internal::compiler::operator!=(NamedAccess *param_1,NamedAccess *param_2)

{
  uint uVar1;
  
  if ((*(long *)param_1 == *(long *)param_2) &&
     ((param_1[0x18] != (NamedAccess)0x0) == (param_2[0x18] != (NamedAccess)0x0))) {
    uVar1 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8));
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

