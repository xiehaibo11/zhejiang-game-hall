
/* v8::internal::JSObject::NotifyMapChange(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Isolate*) */

void v8::internal::JSObject::NotifyMapChange(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(uint *)(*param_1 + 0xb) >> 0x14 & 1) == 0) {
    return;
  }
  FUN_010d8b9c();
  UpdatePrototypeUserRegistration(param_1,param_2,param_3);
  return;
}

