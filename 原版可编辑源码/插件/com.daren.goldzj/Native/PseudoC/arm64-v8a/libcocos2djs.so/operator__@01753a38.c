
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CreateLiteralParameters
   const&, v8::internal::compiler::CreateLiteralParameters const&) */

bool v8::internal::compiler::operator!=
               (CreateLiteralParameters *param_1,CreateLiteralParameters *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  if (((*(long *)param_1 == *(long *)param_2) &&
      (uVar2 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8)),
      (uVar2 & 1) != 0)) && (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) {
    bVar1 = *(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

