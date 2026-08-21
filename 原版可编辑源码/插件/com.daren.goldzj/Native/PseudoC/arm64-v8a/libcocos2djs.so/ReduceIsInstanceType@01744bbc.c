
/* v8::internal::compiler::JSIntrinsicLowering::ReduceIsInstanceType(v8::internal::compiler::Node*,
   v8::internal::InstanceType) */

void __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceIsInstanceType
          (JSIntrinsicLowering *this,Node *param_1,ushort param_3)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  AccessBuilder *this_00;
  AccessBuilder *this_01;
  Graph *pGVar9;
  SimplifiedOperatorBuilder *pSVar10;
  Node *local_b8;
  Node *pNStack_b0;
  AccessBuilder *local_a8;
  Node *local_a0;
  AccessBuilder *pAStack_98;
  Node *local_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsSmi
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_a0 = pNVar2;
  pNVar6 = (Node *)Graph::NewNode(pGVar9,pOVar5,1,&local_a0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
  local_a0 = pNVar6;
  pAStack_98 = (AccessBuilder *)uVar4;
  pNVar6 = (Node *)Graph::NewNode(pGVar9,pOVar5,2,&local_a0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_a0 = pNVar6;
  pNVar7 = (Node *)Graph::NewNode(pGVar9,pOVar5,1,&local_a0,false);
  pNVar8 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::IfFalse
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_a0 = pNVar6;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar9,pOVar5,1,&local_a0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForMap(this_00);
  pOVar5 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,(FieldAccess *)&local_a0);
  local_b8 = pNVar2;
  pNStack_b0 = pNVar3;
  local_a8 = this_00;
  this_01 = (AccessBuilder *)Graph::NewNode(pGVar9,pOVar5,3,&local_b8,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForMapInstanceType(this_01);
  pOVar5 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,(FieldAccess *)&local_a0);
  local_b8 = (Node *)this_01;
  pNStack_b0 = (Node *)this_01;
  local_a8 = this_00;
  pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar5,3,&local_b8,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::NumberEqual
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  pAStack_98 = (AccessBuilder *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)param_3);
  local_a0 = pNVar2;
  pNVar6 = (Node *)Graph::NewNode(pGVar9,pOVar5,2,&local_a0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Merge
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_a0 = pNVar7;
  pAStack_98 = this_00;
  pNVar7 = (Node *)Graph::NewNode(pGVar9,pOVar5,2,&local_a0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_a0 = pNVar3;
  pAStack_98 = (AccessBuilder *)pNVar2;
  local_90 = pNVar7;
  uVar4 = Graph::NewNode(pGVar9,pOVar5,3,&local_a0,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,uVar4,pNVar7);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),8,2);
  Change(this,param_1,pOVar5,pNVar8,pNVar6,pNVar7);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

