
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::DeoptimizeParameters,
   v8::internal::compiler::DeoptimizeParameters) */

bool v8::internal::compiler::operator==(char *param_1,char *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
     (uVar2 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8)),
     (uVar2 & 1) != 0)) {
    bVar1 = param_1[0x18] == param_2[0x18];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

