
/* v8::internal::interpreter::LoopBuilder::JumpToHeader(int) */

void __thiscall v8::internal::interpreter::LoopBuilder::JumpToHeader(LoopBuilder *this,int param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  BytecodeArrayBuilder::JumpLoop
            (*(BytecodeArrayBuilder **)(this + 8),(BytecodeLoopHeader *)(this + 0x48),param_1);
  return;
}

