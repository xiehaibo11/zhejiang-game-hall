
/* v8::internal::LoopChoiceNode::GetQuickCheckDetailsFromLoopEntry(v8::internal::QuickCheckDetails*,
   v8::internal::RegExpCompiler*, int, bool) */

void v8::internal::LoopChoiceNode::GetQuickCheckDetailsFromLoopEntry
               (QuickCheckDetails *param_1,RegExpCompiler *param_2,int param_3,bool param_4)

{
  uint in_w4;
  
  if (param_1[0x5a] != (QuickCheckDetails)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0153e7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x28))(param_1);
    return;
  }
  param_1[0x5a] = (QuickCheckDetails)0x1;
  (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2,param_3,param_4,in_w4 & 1);
  param_1[0x5a] = (QuickCheckDetails)0x0;
  return;
}

