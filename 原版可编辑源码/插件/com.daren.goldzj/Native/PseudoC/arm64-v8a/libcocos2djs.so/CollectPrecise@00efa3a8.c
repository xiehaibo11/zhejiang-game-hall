
/* v8::internal::Coverage::CollectPrecise(v8::internal::Isolate*) */

void v8::internal::Coverage::CollectPrecise(Isolate *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  Collect((Coverage *)param_1,*(int *)(param_1 + 0xb810));
  if ((*(int *)(param_1 + 0xb814) != 1) &&
     ((iVar1 = *(int *)(param_1 + 0xb810), iVar1 == 4 || (iVar1 == 2)))) {
    puVar2 = (undefined8 *)ArrayList::New(param_1,0);
    Isolate::SetFeedbackVectorsForProfilingTools(param_1,*puVar2);
    return;
  }
  return;
}

