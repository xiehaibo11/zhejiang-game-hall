
/* v8::internal::interpreter::BytecodeArrayBuilder::GetOutputRegisterListOperand(v8::internal::interpreter::RegisterList)
    */

int __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::GetOutputRegisterListOperand
          (BytecodeArrayBuilder *this,ulong param_2)

{
  int iVar1;
  
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegisterList
              (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
  }
  iVar1 = 0;
  if (param_2 >> 0x20 != 0) {
    iVar1 = (int)param_2;
  }
  return -5 - iVar1;
}

