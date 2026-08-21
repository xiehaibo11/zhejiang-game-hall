
/* v8::internal::ActionNode::GetQuickCheckDetails(v8::internal::QuickCheckDetails*,
   v8::internal::RegExpCompiler*, int, bool) */

void v8::internal::ActionNode::GetQuickCheckDetails
               (QuickCheckDetails *param_1,RegExpCompiler *param_2,int param_3,bool param_4)

{
  uint in_w4;
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0153d0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x28))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0153d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x30))(*(long **)(param_1 + 0x38),param_2,param_3,param_4,in_w4 & 1);
  return;
}

