
/* v8::internal::FeedbackVector::AddToVectorsForProfilingTools(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FeedbackVector>) */

void v8::internal::FeedbackVector::AddToVectorsForProfilingTools(Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_28;
  
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar5 = uVar4 | *(uint *)(*param_2 + 3);
  uVar1 = *(uint *)(uVar5 + 0xf);
  local_28 = uVar4 | uVar1;
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x5b) {
    uVar1 = *(uint *)(local_28 + 0xb);
    local_28 = uVar4 | uVar1;
  }
  if (((((uVar1 & 1) == 0) || ((int)local_28 != *(int *)((local_28 & 0xffffffff00000000) + 0xa0)))
      && (uVar2 = Script::IsUserJavaScript((Script *)&local_28), (uVar2 & 1) != 0)) &&
     ((uVar1 = *(uint *)(uVar5 + 3), (uVar1 & 1) == 0 ||
      (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) != 0x57)))) {
    puVar3 = (undefined8 *)ArrayList::Add(param_1,param_1 + 0xf80,param_2);
    Isolate::SetFeedbackVectorsForProfilingTools(param_1,*puVar3);
  }
  return;
}

