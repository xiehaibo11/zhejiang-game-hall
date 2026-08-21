
/* v8::internal::NewFunctionArgs::ForFunctionWithoutCode(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::LanguageMode) */

void __thiscall
v8::internal::NewFunctionArgs::ForFunctionWithoutCode
          (undefined8 *param_1,NewFunctionArgs *this,undefined8 param_3,byte param_4)

{
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = param_3;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *param_1 = this;
  *(byte *)((long)param_1 + 0x31) = param_4 & 1;
  *(undefined8 *)((long)param_1 + 0x34) = 0x97;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

