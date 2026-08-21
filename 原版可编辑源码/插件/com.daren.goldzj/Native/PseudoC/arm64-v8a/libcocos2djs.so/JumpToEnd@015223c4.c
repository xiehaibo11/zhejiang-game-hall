
/* v8::internal::interpreter::ConditionalControlFlowBuilder::JumpToEnd() */

void __thiscall
v8::internal::interpreter::ConditionalControlFlowBuilder::JumpToEnd
          (ConditionalControlFlowBuilder *this)

{
  BytecodeLabel *pBVar1;
  BytecodeArrayBuilder *this_00;
  
  this_00 = *(BytecodeArrayBuilder **)(this + 8);
  pBVar1 = (BytecodeLabel *)BytecodeLabels::New((BytecodeLabels *)(this + 0x10));
  BytecodeArrayBuilder::Jump(this_00,pBVar1);
  return;
}

