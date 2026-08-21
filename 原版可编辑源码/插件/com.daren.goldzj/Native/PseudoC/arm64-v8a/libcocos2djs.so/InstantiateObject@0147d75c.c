
/* v8::internal::ApiNatives::InstantiateObject(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ObjectTemplateInfo>,
   v8::internal::Handle<v8::internal::JSReceiver>) */

undefined8
v8::internal::ApiNatives::InstantiateObject(Isolate *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  SaveContext aSStack_48 [24];
  
  SaveContext::SaveContext(aSStack_48,param_1);
  uVar1 = FUN_0147d7f4(param_1,param_2,param_3,0);
  if (((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) ||
     ((int)*(ulong *)(param_1 + 0x2bd8) != (int)*(undefined8 *)(param_1 + 0xa8))) {
    Isolate::ReportPendingMessages(param_1);
  }
  else {
    *(undefined8 *)(param_1 + 0x2c10) = *(undefined8 *)(param_1 + 0xa8);
  }
  SaveContext::~SaveContext(aSStack_48);
  return uVar1;
}

