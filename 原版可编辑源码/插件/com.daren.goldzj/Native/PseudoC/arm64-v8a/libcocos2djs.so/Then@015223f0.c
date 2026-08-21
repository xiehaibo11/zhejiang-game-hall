
/* v8::internal::interpreter::ConditionalControlFlowBuilder::Then() */

void __thiscall
v8::internal::interpreter::ConditionalControlFlowBuilder::Then(ConditionalControlFlowBuilder *this)

{
  BytecodeLabels::Bind((BytecodeLabels *)(this + 0x38),*(BytecodeArrayBuilder **)(this + 8));
  if ((*(long *)(this + 0x98) != 0) && (*(int *)(this + 0x90) != -1)) {
    BytecodeArrayBuilder::IncBlockCounter
              (*(BytecodeArrayBuilder **)(*(long *)(this + 0x98) + 0x20),*(int *)(this + 0x90));
    return;
  }
  return;
}

