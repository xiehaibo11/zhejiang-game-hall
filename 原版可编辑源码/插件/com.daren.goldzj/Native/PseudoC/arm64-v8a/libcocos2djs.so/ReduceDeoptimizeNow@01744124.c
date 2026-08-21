
/* v8::internal::compiler::JSIntrinsicLowering::ReduceDeoptimizeNow(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceDeoptimizeNow
          (JSIntrinsicLowering *this,Node *param_1)

{
  Graph *this_00;
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetFrameStateInput(param_1);
  uVar3 = NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  local_68 = 0;
  local_60 = 0xffffffff;
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Deoptimize
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,4,&local_68);
  local_80 = pNVar2;
  uStack_78 = uVar3;
  local_70 = uVar4;
  pNVar2 = (Node *)Graph::NewNode(this_00,pOVar5,3,&local_80,false);
  NodeProperties::MergeControlToEnd
            ((Graph *)**(undefined8 **)(this + 0x10),
             (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar2);
  (**(code **)(**(long **)(this + 8) + 0x18))
            (*(long **)(this + 8),*(undefined8 *)(**(long **)(this + 0x10) + 0x10));
  Node::TrimInputCount(param_1,0);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Dead(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  NodeProperties::ChangeOp(param_1,pOVar5);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

