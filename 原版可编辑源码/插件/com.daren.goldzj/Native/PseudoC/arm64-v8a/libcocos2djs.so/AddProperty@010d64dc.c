
/* v8::internal::JSObject::AddProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>, char const*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

void v8::internal::JSObject::AddProperty
               (Factory *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  char *local_50;
  size_t sStack_48;
  
  sStack_48 = strlen(param_3);
  local_50 = param_3;
  uVar1 = Factory::InternalizeUtf8String(param_1,(Vector *)&local_50);
  AddProperty(param_1,param_2,uVar1,param_4,param_5);
  return;
}

