
/* v8::internal::interpreter::ConditionalControlFlowBuilder::Else() */

void __thiscall
v8::internal::interpreter::ConditionalControlFlowBuilder::Else(ConditionalControlFlowBuilder *this)

{
  BytecodeLabels::Bind((BytecodeLabels *)(this + 0x60),*(BytecodeArrayBuilder **)(this + 8));
  if ((*(long *)(this + 0x98) != 0) && (*(int *)(this + 0x94) != -1)) {
    BytecodeArrayBuilder::IncBlockCounter
              (*(BytecodeArrayBuilder **)(*(long *)(this + 0x98) + 0x20),*(int *)(this + 0x94));
    return;
  }
  return;
}

