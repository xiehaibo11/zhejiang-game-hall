
/* v8::internal::compiler::JSTypeHintLowering::ReduceToNumberOperation(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::FeedbackSlot) const
    */

void v8::internal::compiler::JSTypeHintLowering::ReduceToNumberOperation
               (undefined4 *param_1_00,undefined8 *param_1,Node *param_2,undefined8 param_3,
               undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  int iVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  Graph *this;
  undefined8 local_70;
  undefined4 local_68;
  Node *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FeedbackSource::FeedbackSource((FeedbackSource *)&local_60,param_1[3],param_1[4],param_6);
  iVar2 = JSHeapBroker::GetFeedbackForBinaryOperation
                    ((JSHeapBroker *)*param_1,(FeedbackSource *)&local_60);
  if ((iVar2 - 1U & 0xff) < 5) {
    this = *(Graph **)param_1[1];
    local_70 = 0;
    local_68 = 0xffffffff;
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::SpeculativeToNumber
                       ((SimplifiedOperatorBuilder *)((undefined8 *)param_1[1])[0x2f],iVar2 - 1U,
                        &local_70);
    local_60 = param_2;
    uStack_58 = param_3;
    local_50 = param_5;
    uVar4 = Graph::NewNode(this,pOVar3,3,&local_60,false);
    *(undefined8 *)(param_1_00 + 2) = uVar4;
    *(undefined8 *)(param_1_00 + 4) = uVar4;
    *param_1_00 = 1;
    *(undefined8 *)(param_1_00 + 6) = param_5;
  }
  else {
    *param_1_00 = 0;
    *(undefined8 *)(param_1_00 + 4) = 0;
    *(undefined8 *)(param_1_00 + 6) = 0;
    *(undefined8 *)(param_1_00 + 2) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

