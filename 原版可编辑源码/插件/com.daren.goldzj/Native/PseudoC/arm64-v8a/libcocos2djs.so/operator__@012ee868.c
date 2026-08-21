
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CheckBoundsParameters
   const&, v8::internal::compiler::CheckBoundsParameters const&) */

bool v8::internal::compiler::operator==
               (CheckBoundsParameters *param_1,CheckBoundsParameters *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = operator==((FeedbackSource *)param_1,(FeedbackSource *)param_2);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10);
  }
  return bVar1;
}

