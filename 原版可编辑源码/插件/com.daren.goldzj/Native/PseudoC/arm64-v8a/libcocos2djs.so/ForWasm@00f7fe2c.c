
/* v8::internal::NewFunctionArgs::ForWasm(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::WasmJSFunctionData>, v8::internal::Handle<v8::internal::Map>)
    */

void __thiscall
v8::internal::NewFunctionArgs::ForWasm
          (undefined8 *param_1,NewFunctionArgs *this,undefined8 param_3,undefined8 param_4)

{
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *param_1 = this;
  param_1[1] = param_4;
  param_1[2] = param_3;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x34) = 0xffffffff;
  return;
}

