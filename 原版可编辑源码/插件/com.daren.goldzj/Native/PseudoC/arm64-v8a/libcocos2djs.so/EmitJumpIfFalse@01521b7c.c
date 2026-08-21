
/* v8::internal::interpreter::BreakableControlFlowBuilder::EmitJumpIfFalse(v8::internal::interpreter::BytecodeArrayBuilder::ToBooleanMode,
   v8::internal::interpreter::BytecodeLabels*) */

void __thiscall
v8::internal::interpreter::BreakableControlFlowBuilder::EmitJumpIfFalse
          (BreakableControlFlowBuilder *this,undefined4 param_2,BytecodeLabels *param_3)

{
  undefined8 uVar1;
  BytecodeArrayBuilder *pBVar2;
  
  pBVar2 = *(BytecodeArrayBuilder **)(this + 8);
  uVar1 = BytecodeLabels::New(param_3);
  BytecodeArrayBuilder::JumpIfFalse(pBVar2,param_2,uVar1);
  return;
}

