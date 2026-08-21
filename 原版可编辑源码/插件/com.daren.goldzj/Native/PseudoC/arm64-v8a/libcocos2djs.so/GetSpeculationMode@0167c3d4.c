
/* v8::internal::compiler::BytecodeGraphBuilder::GetSpeculationMode(int) const */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::GetSpeculationMode
          (BytecodeGraphBuilder *this,int param_1)

{
  long lVar1;
  undefined4 uVar2;
  ProcessedFeedback *this_00;
  long lVar3;
  FeedbackSource aFStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FeedbackSource::FeedbackSource
            (aFStack_38,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),param_1);
  this_00 = (ProcessedFeedback *)JSHeapBroker::GetFeedbackForCall(*(JSHeapBroker **)this,aFStack_38)
  ;
  if (*(int *)this_00 == 0) {
    uVar2 = 1;
  }
  else {
    lVar3 = ProcessedFeedback::AsCall(this_00);
    uVar2 = *(undefined4 *)(lVar3 + 0x24);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

