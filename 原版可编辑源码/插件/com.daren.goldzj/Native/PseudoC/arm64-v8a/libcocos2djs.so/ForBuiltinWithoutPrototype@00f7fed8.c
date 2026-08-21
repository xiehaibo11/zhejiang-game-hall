
/* v8::internal::NewFunctionArgs::ForBuiltinWithoutPrototype(v8::internal::Handle<v8::internal::String>,
   int, v8::internal::LanguageMode) */

void __thiscall
v8::internal::NewFunctionArgs::ForBuiltinWithoutPrototype
          (undefined8 *param_1,NewFunctionArgs *this,undefined4 param_3,byte param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = this;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  *(byte *)((long)param_1 + 0x31) = param_4 & 1;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

