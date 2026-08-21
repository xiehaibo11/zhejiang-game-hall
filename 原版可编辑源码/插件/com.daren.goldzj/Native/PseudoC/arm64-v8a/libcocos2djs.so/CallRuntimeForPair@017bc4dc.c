
/* v8::internal::interpreter::BytecodeArrayBuilder::CallRuntimeForPair(v8::internal::Runtime::FunctionId,
   v8::internal::interpreter::Register, v8::internal::interpreter::RegisterList) */

void v8::internal::interpreter::BytecodeArrayBuilder::CallRuntimeForPair
               (BytecodeArrayBuilder *param_1,undefined8 param_2,ulong param_3)

{
  CallRuntimeForPair(param_1,param_2,param_3 & 0xffffffff | 0x100000000);
  return;
}

