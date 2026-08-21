
/* v8::internal::interpreter::BytecodeGenerator::BuildIncrementBlockCoverageCounterIfEnabled(int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildIncrementBlockCoverageCounterIfEnabled
          (BytecodeGenerator *this,int param_1)

{
  if ((param_1 != -1) && (*(long *)(this + 0x208) != 0)) {
    BytecodeArrayBuilder::IncBlockCounter
              (*(BytecodeArrayBuilder **)(*(long *)(this + 0x208) + 0x20),param_1);
    return;
  }
  return;
}

