
/* v8::internal::Isolate::RunPromiseHook(v8::PromiseHookType,
   v8::internal::Handle<v8::internal::JSPromise>, v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::Isolate::RunPromiseHook
          (Isolate *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  RunPromiseHookForAsyncEventDelegate();
  if (*(code **)(this + 0xb668) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f56bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xb668))(param_2,param_3,param_4);
    return;
  }
  return;
}

