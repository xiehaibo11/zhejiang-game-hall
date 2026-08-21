
/* v8::internal::NegativeSubmatchSuccess::Emit(v8::internal::RegExpCompiler*, v8::internal::Trace*)
    */

void v8::internal::NegativeSubmatchSuccess::Emit(RegExpCompiler *param_1,Trace *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x28);
  if (-1 < *(int *)(param_1 + 0x10)) {
    (**(code **)(*plVar1 + 0x40))(plVar1);
  }
  (**(code **)(*plVar1 + 0x138))(plVar1,*(undefined4 *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x140))(plVar1,*(undefined4 *)(param_1 + 0x3c));
  if (0 < *(int *)(param_1 + 0x44)) {
    (**(code **)(*plVar1 + 0x168))
              (plVar1,*(int *)(param_1 + 0x48),
               *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0153c76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1);
  return;
}

