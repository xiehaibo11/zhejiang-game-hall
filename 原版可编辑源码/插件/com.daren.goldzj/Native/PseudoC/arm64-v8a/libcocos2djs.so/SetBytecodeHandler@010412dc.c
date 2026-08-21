
/* v8::internal::interpreter::Interpreter::SetBytecodeHandler(v8::internal::interpreter::Bytecode,
   v8::internal::interpreter::OperandScale, v8::internal::Code) */

void __thiscall
v8::internal::interpreter::Interpreter::SetBytecodeHandler
          (Interpreter *this,ulong param_2,uint param_3,long param_4)

{
  long local_28;
  
  if (*(int *)(param_4 + 0x17) < 0) {
    local_28 = param_4;
    param_4 = Code::OffHeapInstructionStart((Code *)&local_28);
  }
  else {
    param_4 = param_4 + 0x3f;
  }
  *(long *)(this + (param_2 & 0xff | (ulong)(param_3 >> 1 & 0x7f) << 8) * 8 + 0x10) = param_4;
  return;
}

