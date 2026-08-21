
/* v8::internal::AssertionNode::GetQuickCheckDetails(v8::internal::QuickCheckDetails*,
   v8::internal::RegExpCompiler*, int, bool) */

void __thiscall
v8::internal::AssertionNode::GetQuickCheckDetails
          (AssertionNode *this,QuickCheckDetails *param_1,RegExpCompiler *param_2,int param_3,
          bool param_4)

{
  if ((*(int *)(this + 0x40) == 1) && (param_4)) {
    param_1[0x24] = (QuickCheckDetails)0x1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0153ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x38) + 0x28))();
  return;
}

