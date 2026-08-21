
/* v8::internal::Isolate::RunPrepareStackTraceCallback(v8::internal::Handle<v8::internal::Context>,
   v8::internal::Handle<v8::internal::JSObject>, v8::internal::Handle<v8::internal::JSArray>) */

void __thiscall
v8::internal::Isolate::RunPrepareStackTraceCallback
          (Isolate *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(this + 0xc798))(param_2,param_3,param_4);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(this + 0x2c20);
    *(undefined8 *)(this + 0x2c20) = *(undefined8 *)(this + 0xa8);
    *(undefined8 *)(this + 0x2bd8) = uVar2;
  }
  return;
}

