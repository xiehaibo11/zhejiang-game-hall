
/* v8::internal::Execution::TryRunMicrotasks(v8::internal::Isolate*, v8::internal::MicrotaskQueue*,
   v8::internal::MaybeHandle<v8::internal::Object>*) */

void v8::internal::Execution::TryRunMicrotasks
               (Isolate *param_1,MicrotaskQueue *param_2,MaybeHandle *param_3)

{
  Isolate *local_58;
  Isolate *pIStack_50;
  undefined4 local_48;
  undefined8 local_40;
  Isolate *pIStack_38;
  MicrotaskQueue *local_30;
  undefined4 local_28;
  MaybeHandle *local_20;
  undefined1 local_18;
  undefined4 local_14;
  
  local_58 = param_1 + 0xa0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_18 = 0;
  local_14 = 1;
  pIStack_50 = local_58;
  pIStack_38 = local_58;
  local_30 = param_2;
  local_20 = param_3;
  FUN_00f40f4c(param_1,&local_58);
  return;
}

