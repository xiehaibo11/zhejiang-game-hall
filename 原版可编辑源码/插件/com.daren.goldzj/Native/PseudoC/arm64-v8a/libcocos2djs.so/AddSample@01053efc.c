
/* v8::internal::Histogram::AddSample(int) */

void v8::internal::Histogram::AddSample(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)((ulong)(uint)param_1 + 0x18) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)((ulong)(uint)param_1 + 0x20) + 0x28);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01053f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

