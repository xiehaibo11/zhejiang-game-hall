
/* v8::internal::compiler::BytecodeGraphBuilder::TryBuildSimplifiedForInPrepare(v8::internal::compiler::Node*,
   v8::internal::FeedbackSlot) */

void v8::internal::compiler::BytecodeGraphBuilder::TryBuildSimplifiedForInPrepare
               (int *param_1_00,BytecodeGraphBuilder *param_1,undefined8 param_3,undefined4 param_4)

{
  Node *pNVar1;
  
  JSTypeHintLowering::ReduceForInPrepareOperation
            (param_1_00,param_1 + 0x50,param_3,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x18),param_4);
  pNVar1 = *(Node **)(param_1_00 + 6);
  if (*param_1_00 == 1) {
    *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x20) = *(undefined8 *)(param_1_00 + 4);
    *(Node **)(*(long *)(param_1 + 0xa8) + 0x18) = pNVar1;
  }
  else if (*param_1_00 == 2) {
    MergeControlToLeaveFunction(param_1,pNVar1);
    return;
  }
  return;
}

