
/* v8::Isolate::SetAllowCodeGenerationFromStringsCallback(bool (*)(v8::Local<v8::Context>,
   v8::Local<v8::String>)) */

void __thiscall
v8::Isolate::SetAllowCodeGenerationFromStringsCallback
          (Isolate *this,_func_bool_Local_Local *param_1)

{
  *(_func_bool_Local_Local **)(this + 0xb750) = param_1;
  return;
}

