
/* v8::internal::interpreter::BytecodeArrayBuilder::GetInputRegisterOperand(v8::internal::interpreter::Register)
    */

int __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::GetInputRegisterOperand
          (BytecodeArrayBuilder *this,int param_2)

{
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    param_2 = BytecodeRegisterOptimizer::GetInputRegister
                        (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
  }
  return -5 - param_2;
}

