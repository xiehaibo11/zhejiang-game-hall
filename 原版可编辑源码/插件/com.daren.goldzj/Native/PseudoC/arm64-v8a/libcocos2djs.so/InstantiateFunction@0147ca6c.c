
/* v8::internal::ApiNatives::InstantiateFunction(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NativeContext>,
   v8::internal::Handle<v8::internal::FunctionTemplateInfo>,
   v8::internal::MaybeHandle<v8::internal::Name>) */

undefined8
v8::internal::ApiNatives::InstantiateFunction
          (Isolate *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  SaveContext aSStack_58 [24];
  
  SaveContext::SaveContext(aSStack_58,param_1);
  uVar1 = FUN_0147cb10(param_1,param_2,param_3,param_4);
  if (((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) ||
     ((int)*(ulong *)(param_1 + 0x2bd8) != (int)*(undefined8 *)(param_1 + 0xa8))) {
    Isolate::ReportPendingMessages(param_1);
  }
  else {
    *(undefined8 *)(param_1 + 0x2c10) = *(undefined8 *)(param_1 + 0xa8);
  }
  SaveContext::~SaveContext(aSStack_58);
  return uVar1;
}

