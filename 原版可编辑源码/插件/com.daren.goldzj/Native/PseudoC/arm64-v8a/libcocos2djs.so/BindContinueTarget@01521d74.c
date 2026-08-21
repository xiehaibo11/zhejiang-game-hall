
/* v8::internal::interpreter::LoopBuilder::BindContinueTarget() */

void __thiscall v8::internal::interpreter::LoopBuilder::BindContinueTarget(LoopBuilder *this)

{
  BytecodeLabels::Bind((BytecodeLabels *)(this + 0x50),*(BytecodeArrayBuilder **)(this + 8));
  return;
}

