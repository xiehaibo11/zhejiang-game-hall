
/* v8::internal::compiler::JSTypeHintLowering::TryBuildSoftDeopt(v8::internal::FeedbackSlot,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::DeoptimizeReason)
   const */

Node * __thiscall
v8::internal::compiler::JSTypeHintLowering::TryBuildSoftDeopt
          (JSTypeHintLowering *this,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  Graph *pGVar1;
  Graph *this_00;
  long lVar2;
  ulong uVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *this_01;
  Node *this_02;
  Node *pNVar7;
  Use *pUVar8;
  Node *pNVar9;
  undefined8 *puVar10;
  Node *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  FeedbackSource aFStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((byte)this[0x10] >> 1 & 1) != 0) {
    FeedbackSource::FeedbackSource
              (aFStack_68,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),param_2);
    uVar3 = JSHeapBroker::FeedbackIsInsufficient(*(JSHeapBroker **)this,aFStack_68);
    if ((uVar3 & 1) != 0) {
      pGVar1 = (Graph *)**(undefined8 **)(this + 8);
      local_78 = 0;
      local_70 = 0xffffffff;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Deoptimize
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],1,param_5,
                          &local_78);
      puVar10 = *(undefined8 **)(this + 8);
      local_90 = (Node *)puVar10[0x2c];
      if (local_90 == (Node *)0x0) {
        this_00 = (Graph *)*puVar10;
        pOVar5 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar10[1]);
        local_90 = (Node *)0x0;
        local_90 = (Node *)Graph::NewNode(this_00,pOVar5,0,&local_90,false);
        puVar10[0x2c] = local_90;
      }
      uStack_88 = param_3;
      local_80 = param_4;
      pNVar6 = (Node *)Graph::NewNode(pGVar1,pOVar4,3,&local_90,false);
      puVar10 = *(undefined8 **)(this + 8);
      pNVar7 = (Node *)puVar10[0x2c];
      if (pNVar7 == (Node *)0x0) {
        pGVar1 = (Graph *)*puVar10;
        pOVar4 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar10[1]);
        local_90 = (Node *)0x0;
        pNVar7 = (Node *)Graph::NewNode(pGVar1,pOVar4,0,&local_90,false);
        puVar10[0x2c] = pNVar7;
      }
      this_01 = (Node *)NodeProperties::FindFrameStateBefore(pNVar6,pNVar7);
      pNVar7 = pNVar6 + 0x20;
      pNVar9 = pNVar7;
      if ((*(uint *)(pNVar6 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar9 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      this_02 = *(Node **)pNVar9;
      if (this_02 != this_01) {
        if ((*(uint *)(pNVar6 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar8 = (Use *)(*(long *)pNVar7 + -0x18);
        }
        else {
          pUVar8 = (Use *)(pNVar6 + -0x18);
        }
        if (this_02 != (Node *)0x0) {
          Node::RemoveUse(this_02,pUVar8);
        }
        *(Node **)pNVar9 = this_01;
        if (this_01 != (Node *)0x0) {
          Node::AppendUse(this_01,pUVar8);
        }
      }
      goto LAB_0175c420;
    }
  }
  pNVar6 = (Node *)0x0;
LAB_0175c420:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return pNVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

