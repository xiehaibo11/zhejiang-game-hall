
/* v8::internal::compiler::BytecodeGraphBuilder::ComputeCallFrequency(int) const */

float __thiscall
v8::internal::compiler::BytecodeGraphBuilder::ComputeCallFrequency
          (BytecodeGraphBuilder *this,int param_1)

{
  long lVar1;
  ProcessedFeedback *this_00;
  long lVar2;
  float fVar3;
  FeedbackSource aFStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (NAN(*(float *)(this + 0x48))) {
    fVar3 = NAN;
  }
  else {
    FeedbackSource::FeedbackSource
              (aFStack_48,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),param_1);
    this_00 = (ProcessedFeedback *)
              JSHeapBroker::GetFeedbackForCall(*(JSHeapBroker **)this,aFStack_48);
    fVar3 = 0.0;
    if (*(int *)this_00 != 0) {
      lVar2 = ProcessedFeedback::AsCall(this_00);
      if (*(float *)(lVar2 + 0x20) != 0.0) {
        fVar3 = *(float *)(lVar2 + 0x20) * *(float *)(this + 0x48);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar3;
}

