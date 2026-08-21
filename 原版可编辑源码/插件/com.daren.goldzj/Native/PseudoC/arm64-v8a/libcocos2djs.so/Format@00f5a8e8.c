
/* v8::internal::MessageFormatter::Format(v8::internal::Isolate*, v8::internal::MessageTemplate,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::MessageFormatter::Format(Factory *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  char *local_30;
  undefined8 uStack_28;
  
  uVar1 = Object::NoSideEffectsToString(param_1,param_3);
  lVar2 = Format(param_1,param_2,uVar1,param_1 + 200,param_1 + 200);
  if (lVar2 != 0) {
    String::Flatten(param_1,lVar2,0);
    return;
  }
  *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
  local_30 = "<error>";
  uStack_28 = 7;
  Factory::InternalizeString<unsigned_char>(param_1,(Vector *)&local_30,false);
  return;
}

