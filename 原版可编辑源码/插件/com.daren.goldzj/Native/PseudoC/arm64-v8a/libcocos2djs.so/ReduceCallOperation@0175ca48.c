
/* v8::internal::compiler::JSTypeHintLowering::ReduceCallOperation(v8::internal::compiler::Operator
   const*, v8::internal::compiler::Node* const*, int, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::FeedbackSlot) const */

void v8::internal::compiler::JSTypeHintLowering::ReduceCallOperation
               (undefined4 *param_1_00,JSTypeHintLowering *param_1)

{
  long lVar1;
  undefined8 param_5;
  undefined8 in_x5;
  undefined4 in_w6;
  
  lVar1 = TryBuildSoftDeopt(param_1,in_w6,param_5,in_x5,8);
  if (lVar1 == 0) {
    *param_1_00 = 0;
    *(undefined8 *)(param_1_00 + 4) = 0;
    *(undefined8 *)(param_1_00 + 6) = 0;
    *(undefined8 *)(param_1_00 + 2) = 0;
  }
  else {
    *(undefined8 *)(param_1_00 + 2) = 0;
    *(undefined8 *)(param_1_00 + 4) = 0;
    *param_1_00 = 2;
    *(long *)(param_1_00 + 6) = lVar1;
  }
  return;
}

