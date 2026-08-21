
/* v8::internal::compiler::ScheduleLateNodeVisitor::ScheduleRegion(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ScheduleLateNodeVisitor::ScheduleRegion
          (ScheduleLateNodeVisitor *this,BasicBlock *param_1,Node *param_2)

{
  short sVar1;
  
  if (*(short *)(*(long *)param_2 + 0x10) == 0x28) {
    ScheduleNode(this,param_1,param_2);
    do {
      param_2 = (Node *)NodeProperties::GetEffectInput(param_2,0);
      sVar1 = *(short *)(*(long *)param_2 + 0x10);
      ScheduleNode(this,param_1,param_2);
    } while (sVar1 != 0x27);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IrOpcode::kFinishRegion == region_end->opcode()");
}

