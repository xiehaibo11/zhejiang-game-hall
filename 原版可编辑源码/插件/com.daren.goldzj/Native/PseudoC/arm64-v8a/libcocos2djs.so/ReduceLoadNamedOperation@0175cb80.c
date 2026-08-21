
/* v8::internal::compiler::JSTypeHintLowering::ReduceLoadNamedOperation(v8::internal::compiler::Operator
   const*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::FeedbackSlot) const */

void v8::internal::compiler::JSTypeHintLowering::ReduceLoadNamedOperation
               (undefined4 *param_1_00,JSTypeHintLowering *param_1,undefined8 param_3,
               undefined8 param_4_00,undefined8 param_4,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  
  lVar1 = TryBuildSoftDeopt(param_1,param_7,param_4,param_6,0xd);
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

