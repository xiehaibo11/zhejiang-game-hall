
/* v8::internal::DebugEvaluate::Evaluate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::String>, bool) */

undefined8
v8::internal::DebugEvaluate::Evaluate
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          ulong param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = Compiler::GetFunctionFromEval
                    (param_5,param_2,param_3,0,0,0xffffffff,0xffffffff,0xffffffff);
  uVar2 = 0;
  if (lVar1 != 0) {
    if ((param_6 & 1) == 0) {
      uVar2 = Execution::Call(param_1,lVar1,param_4,0,0);
      return uVar2;
    }
    Debug::StartSideEffectCheckMode(*(Debug **)(param_1 + 0xb6c8));
    uVar2 = Execution::Call(param_1,lVar1,param_4,0,0);
    Debug::StopSideEffectCheckMode(*(Debug **)(param_1 + 0xb6c8));
  }
  return uVar2;
}

