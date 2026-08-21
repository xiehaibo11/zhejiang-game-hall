
/* v8::internal::WasmTableObject::Fill(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, unsigned int,
   v8::internal::Handle<v8::internal::Object>, unsigned int) */

void v8::internal::WasmTableObject::Fill
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  for (; param_5 != 0; param_5 = param_5 + -1) {
    Set(param_1,param_2,param_3,param_4);
    param_3 = param_3 + 1;
  }
  return;
}

