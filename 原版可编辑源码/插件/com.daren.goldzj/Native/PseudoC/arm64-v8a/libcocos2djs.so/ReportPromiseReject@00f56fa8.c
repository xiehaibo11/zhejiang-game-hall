
/* v8::internal::Isolate::ReportPromiseReject(v8::internal::Handle<v8::internal::JSPromise>,
   v8::internal::Handle<v8::internal::Object>, v8::PromiseRejectEvent) */

void __thiscall
v8::internal::Isolate::ReportPromiseReject
          (Isolate *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  if (*(code **)(this + 0xb7e0) != (code *)0x0) {
    local_28 = param_2;
    local_20 = param_4;
    local_18 = param_3;
    (**(code **)(this + 0xb7e0))(&local_28);
  }
  return;
}

