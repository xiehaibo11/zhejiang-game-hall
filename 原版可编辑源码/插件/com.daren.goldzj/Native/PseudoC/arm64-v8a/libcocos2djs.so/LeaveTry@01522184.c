
/* v8::internal::interpreter::TryFinallyBuilder::LeaveTry() */

void __thiscall v8::internal::interpreter::TryFinallyBuilder::LeaveTry(TryFinallyBuilder *this)

{
  BytecodeLabel *pBVar1;
  BytecodeArrayBuilder *this_00;
  
  this_00 = *(BytecodeArrayBuilder **)(this + 8);
  pBVar1 = (BytecodeLabel *)BytecodeLabels::New((BytecodeLabels *)(this + 0x28));
  BytecodeArrayBuilder::Jump(this_00,pBVar1);
  return;
}

