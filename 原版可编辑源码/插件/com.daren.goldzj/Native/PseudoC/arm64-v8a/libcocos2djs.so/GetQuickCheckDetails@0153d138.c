
/* v8::internal::NegativeLookaroundChoiceNode::GetQuickCheckDetails(v8::internal::QuickCheckDetails*,
   v8::internal::RegExpCompiler*, int, bool) */

void v8::internal::NegativeLookaroundChoiceNode::GetQuickCheckDetails
               (QuickCheckDetails *param_1,RegExpCompiler *param_2,int param_3,bool param_4)

{
  uint in_w4;
  
                    /* WARNING: Could not recover jumptable at 0x0153d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(**(long **)(param_1 + 0x38) + 0x10) + 0x28))
            (*(long **)(**(long **)(param_1 + 0x38) + 0x10),param_2,param_3,param_4,in_w4 & 1);
  return;
}

