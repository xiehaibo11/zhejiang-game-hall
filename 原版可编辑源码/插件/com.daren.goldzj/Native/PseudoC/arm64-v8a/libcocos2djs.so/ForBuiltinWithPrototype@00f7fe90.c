
/* v8::internal::NewFunctionArgs::ForBuiltinWithPrototype(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::HeapObject>, v8::internal::InstanceType, int, int, int,
   v8::internal::MutableMode) */

void __thiscall
v8::internal::NewFunctionArgs::ForBuiltinWithPrototype
          (undefined8 *param_1,NewFunctionArgs *this,undefined8 param_3,undefined2 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = this;
  *(undefined2 *)((long)param_1 + 0x1a) = param_4;
  *(undefined4 *)((long)param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 4) = param_6;
  param_1[5] = param_3;
  *(undefined4 *)((long)param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 7) = param_8;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  *(undefined2 *)(param_1 + 6) = 0x101;
  return;
}

