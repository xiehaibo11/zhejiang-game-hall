
/* v8::internal::interpreter::BreakableControlFlowBuilder::EmitJumpIfUndefined(v8::internal::interpreter::BytecodeLabels*)
    */

void __thiscall
v8::internal::interpreter::BreakableControlFlowBuilder::EmitJumpIfUndefined
          (BreakableControlFlowBuilder *this,BytecodeLabels *param_1)

{
  BytecodeLabel *pBVar1;
  BytecodeArrayBuilder *this_00;
  
  this_00 = *(BytecodeArrayBuilder **)(this + 8);
  pBVar1 = (BytecodeLabel *)BytecodeLabels::New(param_1);
  BytecodeArrayBuilder::JumpIfUndefined(this_00,pBVar1);
  return;
}

