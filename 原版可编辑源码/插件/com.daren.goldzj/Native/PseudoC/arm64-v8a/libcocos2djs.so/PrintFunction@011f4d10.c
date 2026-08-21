
/* v8::internal::StringStream::PrintFunction(v8::internal::JSFunction, v8::internal::Object,
   v8::internal::Code*) */

void __thiscall
v8::internal::StringStream::PrintFunction
          (undefined8 param_1,ulong param_2,undefined8 param_3,ulong *param_4)

{
  PrintPrototype();
  *param_4 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x17);
  return;
}

