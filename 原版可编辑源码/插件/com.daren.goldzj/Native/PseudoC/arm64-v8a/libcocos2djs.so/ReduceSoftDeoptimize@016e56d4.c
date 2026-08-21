
/* v8::internal::compiler::JSCallReducer::ReduceSoftDeoptimize(v8::internal::compiler::Node*,
   v8::internal::DeoptimizeReason) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceSoftDeoptimize
          (JSCallReducer *this,Node *param_1,undefined4 param_3)

{
  Graph *pGVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  undefined8 *puVar7;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((byte)this[0x28] & 1) == 0) {
    param_1 = (Node *)0x0;
  }
  else {
    uVar3 = NodeProperties::GetEffectInput(param_1,0);
    uVar4 = NodeProperties::GetControlInput(param_1,0);
    puVar7 = *(undefined8 **)(this + 0x10);
    pNVar6 = (Node *)puVar7[0x2c];
    if (pNVar6 == (Node *)0x0) {
      pGVar1 = (Graph *)*puVar7;
      pOVar5 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar7[1]);
      local_80 = (Node *)0x0;
      pNVar6 = (Node *)Graph::NewNode(pGVar1,pOVar5,0,&local_80,false);
      puVar7[0x2c] = pNVar6;
    }
    pNVar6 = (Node *)NodeProperties::FindFrameStateBefore(param_1,pNVar6);
    pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
    local_68 = 0;
    local_60 = 0xffffffff;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Deoptimize
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,param_3,
                        &local_68);
    local_80 = pNVar6;
    uStack_78 = uVar3;
    local_70 = uVar4;
    pNVar6 = (Node *)Graph::NewNode(pGVar1,pOVar5,3,&local_80,false);
    NodeProperties::MergeControlToEnd
              ((Graph *)**(undefined8 **)(this + 0x10),
               (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar6);
    (**(code **)(**(long **)(this + 8) + 0x18))
              (*(long **)(this + 8),*(undefined8 *)(**(long **)(this + 0x10) + 0x10));
    Node::TrimInputCount(param_1,0);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Dead(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
    NodeProperties::ChangeOp(param_1,pOVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

