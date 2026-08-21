
/* v8::internal::compiler::BytecodeGraphBuilder::TryBuildSimplifiedConstruct(v8::internal::compiler::Operator
   const*, v8::internal::compiler::Node* const*, int, v8::internal::FeedbackSlot) */

void v8::internal::compiler::BytecodeGraphBuilder::TryBuildSimplifiedConstruct
               (int *param_1_00,BytecodeGraphBuilder *param_1)

{
  Node *pNVar1;
  
  JSTypeHintLowering::ReduceConstructOperation(param_1_00,param_1 + 0x50);
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

