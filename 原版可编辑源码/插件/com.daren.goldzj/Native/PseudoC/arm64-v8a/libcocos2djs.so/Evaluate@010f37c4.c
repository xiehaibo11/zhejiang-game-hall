
/* v8::internal::Module::Evaluate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Module>) */

undefined8 v8::internal::Module::Evaluate(Isolate *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = GetCurrentStackPosition();
  if (uVar1 < *(ulong *)(param_1 + 0x58)) {
    Isolate::StackOverflow(param_1);
    return 0;
  }
  if ((FLAG_harmony_top_level_await != '\0') &&
     (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x44)) {
    uVar2 = SourceTextModule::EvaluateMaybeAsync(param_1,param_2);
    return uVar2;
  }
  uVar2 = InnerEvaluate(param_1,param_2);
  return uVar2;
}

