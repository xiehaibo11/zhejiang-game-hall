
/* v8::Isolate::SetModifyCodeGenerationFromStringsCallback(v8::ModifyCodeGenerationFromStringsResult
   (*)(v8::Local<v8::Context>, v8::Local<v8::Value>)) */

void __thiscall
v8::Isolate::SetModifyCodeGenerationFromStringsCallback
          (Isolate *this,_func_ModifyCodeGenerationFromStringsResult_Local_Local *param_1)

{
  *(_func_ModifyCodeGenerationFromStringsResult_Local_Local **)(this + 0xb758) = param_1;
  return;
}

