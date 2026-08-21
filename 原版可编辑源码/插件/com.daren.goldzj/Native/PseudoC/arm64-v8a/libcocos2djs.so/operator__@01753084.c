
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::LoadGlobalParameters
   const&, v8::internal::compiler::LoadGlobalParameters const&) */

bool v8::internal::compiler::operator==(LoadGlobalParameters *param_1,LoadGlobalParameters *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  if ((*(long *)param_1 == *(long *)param_2) &&
     (uVar2 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8)),
     (uVar2 & 1) != 0)) {
    bVar1 = *(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

