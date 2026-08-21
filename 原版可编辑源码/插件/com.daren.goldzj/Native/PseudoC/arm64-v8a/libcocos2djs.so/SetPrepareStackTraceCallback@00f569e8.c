
/* v8::internal::Isolate::SetPrepareStackTraceCallback(v8::MaybeLocal<v8::Value>
   (*)(v8::Local<v8::Context>, v8::Local<v8::Value>, v8::Local<v8::Array>)) */

void __thiscall
v8::internal::Isolate::SetPrepareStackTraceCallback
          (Isolate *this,_func_MaybeLocal_Local_Local_Local *param_1)

{
  *(_func_MaybeLocal_Local_Local_Local **)(this + 0xc798) = param_1;
  return;
}

