
/* v8::internal::AllocationSite::PretenureDecisionName(v8::internal::AllocationSite::PretenureDecision)
    */

undefined * __thiscall
v8::internal::AllocationSite::PretenureDecisionName(undefined8 param_1,uint param_2)

{
  if (param_2 < 5) {
    return (&PTR_s_undecided_01cb4e48)[(int)param_2];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

