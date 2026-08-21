
/* v8::internal::JSObject::GetFunctionRealm(v8::internal::Handle<v8::internal::JSObject>) */

void v8::internal::JSObject::GetFunctionRealm(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  JSReceiver::GetCreationContext((JSReceiver *)&local_18);
  return;
}

