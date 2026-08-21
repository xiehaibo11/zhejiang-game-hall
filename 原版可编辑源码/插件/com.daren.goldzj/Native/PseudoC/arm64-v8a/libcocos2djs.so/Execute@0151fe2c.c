
/* v8::internal::interpreter::BytecodeGenerator::ControlScopeForBreakable::Execute(v8::internal::interpreter::BytecodeGenerator::ControlScope::Command,
   v8::internal::Statement*, int) */

undefined8
v8::internal::interpreter::BytecodeGenerator::ControlScopeForBreakable::Execute
          (long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 == 0) && (*(long *)(param_1 + 0x20) == param_3)) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x2f8) != *(long *)(param_1 + 0x18)) {
      BytecodeArrayBuilder::PopContext
                ((BytecodeArrayBuilder *)(*(long *)(param_1 + 8) + 0x18),
                 *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18));
    }
    BreakableControlFlowBuilder::EmitJump
              (*(BreakableControlFlowBuilder **)(param_1 + 0x28),
               (BytecodeLabels *)(*(BreakableControlFlowBuilder **)(param_1 + 0x28) + 0x10));
    uVar1 = 1;
  }
  return uVar1;
}

