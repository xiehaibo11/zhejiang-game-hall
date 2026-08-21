
/* v8::internal::EntryFrame::ComputeCallerState(v8::internal::StackFrame::State*) const */

void v8::internal::EntryFrame::ComputeCallerState(State *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f42f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}

