
/* v8::internal::Isolate::SetFailedAccessCheckCallback(void (*)(v8::Local<v8::Object>,
   v8::AccessType, v8::Local<v8::Value>)) */

void __thiscall
v8::internal::Isolate::SetFailedAccessCheckCallback
          (Isolate *this,_func_void_Local_AccessType_Local *param_1)

{
  *(_func_void_Local_AccessType_Local **)(this + 0x2c68) = param_1;
  return;
}

