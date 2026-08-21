
/* v8::internal::compiler::JSTypeHintLowering::ReduceUnaryOperation(v8::internal::compiler::Operator
   const*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::FeedbackSlot) const */

void v8::internal::compiler::JSTypeHintLowering::ReduceUnaryOperation
               (undefined4 *param_1_00,JSTypeHintLowering *param_1,long param_2,Node *param_3,
               undefined8 param_4,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  JSGraph *this;
  double dVar6;
  JSTypeHintLowering *local_b8;
  undefined8 uStack_b0;
  Node *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = TryBuildSoftDeopt(param_1,param_7,param_4,param_6,0xf);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1_00 + 2) = 0;
    *(undefined8 *)(param_1_00 + 4) = 0;
    *param_1_00 = 2;
    *(long *)(param_1_00 + 6) = lVar3;
    goto LAB_0175c264;
  }
  local_b8 = param_1;
  local_a8 = param_3;
  local_98 = param_4;
  uStack_90 = param_6;
  local_88 = param_7;
  switch(*(undefined2 *)(param_2 + 0x10)) {
  case 0x2ce:
    uStack_b0 = JSOperatorBuilder::BitwiseXor
                          (*(JSOperatorBuilder **)(*(long *)(param_1 + 8) + 0x170));
    this = *(JSGraph **)(param_1 + 8);
    dVar6 = -1.0;
    goto LAB_0175c218;
  case 0x2cf:
    uStack_b0 = JSOperatorBuilder::Subtract(*(JSOperatorBuilder **)(*(long *)(param_1 + 8) + 0x170))
    ;
    break;
  case 0x2d0:
    uStack_b0 = JSOperatorBuilder::Add(*(JSOperatorBuilder **)(*(long *)(param_1 + 8) + 0x170),8);
    break;
  case 0x2d1:
    uVar4 = JSOperatorBuilder::Multiply(*(JSOperatorBuilder **)(*(long *)(param_1 + 8) + 0x170));
    uStack_a0 = JSGraph::Constant(*(JSGraph **)(param_1 + 8),-1.0);
    uStack_b0 = uVar4;
    lVar3 = JSSpeculativeBinopBuilder::TryBuildNumberBinop((JSSpeculativeBinopBuilder *)&local_b8);
    if (lVar3 != 0) goto joined_r0x0175c1f8;
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_80,*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),param_7);
    cVar2 = JSHeapBroker::GetFeedbackForBinaryOperation
                      (*(JSHeapBroker **)param_1,(FeedbackSource *)&local_80);
    if (cVar2 == '\a') {
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::SpeculativeBigIntNegate
                         (*(SimplifiedOperatorBuilder **)(*(long *)(param_1 + 8) + 0x178),0);
      local_80 = param_3;
      uStack_78 = param_4;
      local_70 = param_6;
      lVar3 = Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 8),pOVar5,3,&local_80,false);
      goto joined_r0x0175c1f8;
    }
    goto LAB_0175c258;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  this = *(JSGraph **)(param_1 + 8);
  dVar6 = 1.0;
LAB_0175c218:
  uStack_a0 = JSGraph::Constant(this,dVar6);
  lVar3 = JSSpeculativeBinopBuilder::TryBuildNumberBinop((JSSpeculativeBinopBuilder *)&local_b8);
joined_r0x0175c1f8:
  if (lVar3 == 0) {
LAB_0175c258:
    *param_1_00 = 0;
    *(undefined8 *)(param_1_00 + 4) = 0;
    *(undefined8 *)(param_1_00 + 6) = 0;
    *(undefined8 *)(param_1_00 + 2) = 0;
  }
  else {
    *(long *)(param_1_00 + 2) = lVar3;
    *(long *)(param_1_00 + 4) = lVar3;
    *param_1_00 = 1;
    *(undefined8 *)(param_1_00 + 6) = param_6;
  }
LAB_0175c264:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

