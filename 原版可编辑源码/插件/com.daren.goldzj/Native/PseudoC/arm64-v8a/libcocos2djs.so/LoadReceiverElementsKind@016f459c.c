
/* v8::internal::compiler::JSCallReducer::LoadReceiverElementsKind(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::JSCallReducer::LoadReceiverElementsKind
          (JSCallReducer *this,Node *param_1,Node **param_2,Node **param_3)

{
  long lVar1;
  Operator *pOVar2;
  AccessBuilder *this_00;
  Node *pNVar3;
  Operator *pOVar4;
  Graph *pGVar5;
  Graph *this_01;
  SimplifiedOperatorBuilder *pSVar6;
  Node *local_a8;
  Node *pNStack_a0;
  Node *local_98;
  Node *local_90;
  undefined8 uStack_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar6 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForMap((AccessBuilder *)this);
  pOVar2 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar6,(FieldAccess *)&local_90);
  local_98 = *param_3;
  pNStack_a0 = *param_2;
  local_a8 = param_1;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar5,pOVar2,3,&local_a8,false);
  *param_2 = (Node *)this_00;
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar6 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForMapBitField2(this_00);
  pOVar2 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar6,(FieldAccess *)&local_90);
  local_98 = *param_3;
  pNStack_a0 = *param_2;
  local_a8 = (Node *)this_00;
  pNVar3 = (Node *)Graph::NewNode(pGVar5,pOVar2,3,&local_a8,false);
  *param_2 = pNVar3;
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::NumberShiftRightLogical
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  this_01 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::NumberBitwiseAnd
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  uStack_88 = JSGraph::Constant(*(JSGraph **)(this + 0x10),248.0);
  local_90 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(this_01,pOVar4,2,&local_90,false);
  uStack_88 = JSGraph::Constant(*(JSGraph **)(this + 0x10),3.0);
  local_90 = pNVar3;
  Graph::NewNode(pGVar5,pOVar2,2,&local_90,false);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

