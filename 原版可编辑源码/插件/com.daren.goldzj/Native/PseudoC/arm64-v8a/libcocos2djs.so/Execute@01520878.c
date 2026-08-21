
/* v8::internal::interpreter::BytecodeGenerator::ControlScopeForIteration::Execute(v8::internal::interpreter::BytecodeGenerator::ControlScope::Command,
   v8::internal::Statement*, int) */

undefined8
v8::internal::interpreter::BytecodeGenerator::ControlScopeForIteration::Execute
          (long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  BreakableControlFlowBuilder *this;
  BreakableControlFlowBuilder *pBVar2;
  
  if (*(long *)(param_1 + 0x20) == param_3) {
    if (param_2 == 1) {
      if (*(long *)(*(long *)(param_1 + 8) + 0x2f8) != *(long *)(param_1 + 0x18)) {
        BytecodeArrayBuilder::PopContext
                  ((BytecodeArrayBuilder *)(*(long *)(param_1 + 8) + 0x18),
                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18));
      }
      this = *(BreakableControlFlowBuilder **)(param_1 + 0x28);
      pBVar2 = this + 0x50;
    }
    else {
      if (param_2 != 0) goto LAB_01520890;
      if (*(long *)(*(long *)(param_1 + 8) + 0x2f8) != *(long *)(param_1 + 0x18)) {
        BytecodeArrayBuilder::PopContext
                  ((BytecodeArrayBuilder *)(*(long *)(param_1 + 8) + 0x18),
                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18));
      }
      this = *(BreakableControlFlowBuilder **)(param_1 + 0x28);
      pBVar2 = this + 0x10;
    }
    BreakableControlFlowBuilder::EmitJump(this,(BytecodeLabels *)pBVar2);
    uVar1 = 1;
  }
  else {
LAB_01520890:
    uVar1 = 0;
  }
  return uVar1;
}

