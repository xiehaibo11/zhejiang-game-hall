
/* v8::internal::compiler::JSTypeHintLowering::ReduceStoreKeyedOperation(v8::internal::compiler::Operator
   const*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::FeedbackSlot) const */

void v8::internal::compiler::JSTypeHintLowering::ReduceStoreKeyedOperation
               (undefined4 *param_1_00,JSTypeHintLowering *param_1)

{
  long lVar1;
  undefined8 param_6;
  undefined8 in_x6;
  undefined4 in_w7;
  
  lVar1 = TryBuildSoftDeopt(param_1,in_w7,param_6,in_x6,0xe);
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

