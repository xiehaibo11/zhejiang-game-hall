
/* v8::internal::compiler::JSCallReducer::SafeLoadElement(v8::internal::ElementsKind,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**, v8::internal::compiler::FeedbackSource const&) */

void __thiscall
v8::internal::compiler::JSCallReducer::SafeLoadElement
          (JSCallReducer *this,undefined4 param_2,Node *param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6,FeedbackSource *param_7)

{
  long lVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  AccessBuilder *this_00;
  Node *pNVar4;
  Graph *pGVar5;
  SimplifiedOperatorBuilder *pSVar6;
  Node *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  Node *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar6 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_a0,param_2);
  pOVar2 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar6,(FieldAccess *)&local_a0);
  uStack_b0 = *param_5;
  local_b8 = param_3;
  local_a8 = param_4;
  uVar3 = Graph::NewNode(pGVar5,pOVar2,3,&local_b8,false);
  *param_5 = uVar3;
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::CheckBounds
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],param_7);
  local_a0 = (Node *)*param_6;
  local_90 = *param_5;
  uStack_98 = uVar3;
  uStack_88 = param_4;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar5,pOVar2,4,&local_a0,false);
  *param_5 = this_00;
  *param_6 = this_00;
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar6 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForJSObjectElements(this_00);
  pOVar2 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar6,(FieldAccess *)&local_a0);
  uStack_b0 = *param_5;
  local_b8 = param_3;
  local_a8 = param_4;
  pNVar4 = (Node *)Graph::NewNode(pGVar5,pOVar2,3,&local_b8,false);
  *param_5 = pNVar4;
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar6 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_b8,param_2,0);
  pOVar2 = (Operator *)SimplifiedOperatorBuilder::LoadElement(pSVar6,(ElementAccess *)&local_b8);
  uStack_98 = *param_6;
  local_90 = *param_5;
  local_a0 = pNVar4;
  uStack_88 = param_4;
  uVar3 = Graph::NewNode(pGVar5,pOVar2,4,&local_a0,false);
  *param_5 = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

