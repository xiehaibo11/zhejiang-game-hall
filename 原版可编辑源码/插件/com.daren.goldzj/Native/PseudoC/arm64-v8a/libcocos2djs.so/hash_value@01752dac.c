
/* v8::internal::compiler::hash_value(v8::internal::compiler::FeedbackParameter const&) */

void v8::internal::compiler::hash_value(FeedbackParameter *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)param_1;
  uVar1 = base::hash_combine(0,(long)*(int *)(param_1 + 8));
  uVar2 = base::hash_value(uVar2);
  base::hash_combine(uVar1,uVar2);
  return;
}

