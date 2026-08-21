
/* v8::internal::interpreter::BreakableControlFlowBuilder::BindBreakTarget() */

void __thiscall
v8::internal::interpreter::BreakableControlFlowBuilder::BindBreakTarget
          (BreakableControlFlowBuilder *this)

{
  BytecodeLabels::Bind((BytecodeLabels *)(this + 0x10),*(BytecodeArrayBuilder **)(this + 8));
  return;
}

