
/* v8::internal::NewFunctionArgs::ForBuiltin(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Map>, int) */

void __thiscall
v8::internal::NewFunctionArgs::ForBuiltin
          (undefined8 *param_1,NewFunctionArgs *this,undefined8 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = param_3;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *param_1 = this;
  *(undefined4 *)((long)param_1 + 0x34) = param_4;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 6) = 0x101;
  return;
}

