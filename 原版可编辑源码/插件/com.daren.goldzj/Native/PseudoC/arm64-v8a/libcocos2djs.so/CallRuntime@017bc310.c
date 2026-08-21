
/* v8::internal::interpreter::BytecodeArrayBuilder::CallRuntime(v8::internal::Runtime::FunctionId,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CallRuntime
          (BytecodeArrayBuilder *this,undefined8 param_2,ulong param_3)

{
  CallRuntime(this,param_2,param_3 & 0xffffffff | 0x100000000);
  return;
}

