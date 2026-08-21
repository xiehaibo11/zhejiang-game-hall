
/* v8::internal::MessageHandler::GetLocalizedMessage(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::MessageHandler::GetLocalizedMessage(undefined8 param_1_00,Isolate *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x95a0);
  lVar2 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  puVar3 = (undefined8 *)GetMessage();
  local_28 = *puVar3;
  String::ToCString(param_1_00,&local_28,1,1,0);
  if (param_1 != (Isolate *)0x0) {
    *(undefined8 *)(param_1 + 0x95a0) = uVar1;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar2) {
      *(long *)(param_1 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_1);
    }
  }
  return;
}

