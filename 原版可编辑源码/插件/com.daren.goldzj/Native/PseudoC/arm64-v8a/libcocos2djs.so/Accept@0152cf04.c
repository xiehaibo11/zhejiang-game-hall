
/* v8::internal::RegExpDisjunction::Accept(v8::internal::RegExpVisitor*, void*) */

void v8::internal::RegExpDisjunction::Accept(RegExpVisitor *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0152cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x10))(param_2,param_1);
  return;
}

