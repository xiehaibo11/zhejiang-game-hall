
/* v8::Isolate::SetWasmLoadSourceMapCallback(v8::Local<v8::String> (*)(v8::Isolate*, char const*))
    */

void __thiscall
v8::Isolate::SetWasmLoadSourceMapCallback(Isolate *this,_func_Local_Isolate_ptr_char_ptr *param_1)

{
  *(_func_Local_Isolate_ptr_char_ptr **)(this + 0xb788) = param_1;
  return;
}

