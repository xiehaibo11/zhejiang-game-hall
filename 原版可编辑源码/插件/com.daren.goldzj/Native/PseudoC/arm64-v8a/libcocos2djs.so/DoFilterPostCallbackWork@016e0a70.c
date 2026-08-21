
/* v8::internal::compiler::JSCallReducer::DoFilterPostCallbackWork(v8::internal::ElementsKind,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSCallReducer::DoFilterPostCallbackWork
          (JSCallReducer *this,uint param_2,undefined8 *param_3,undefined8 *param_4,Node *param_5,
          Node *param_6,undefined8 param_7,Node *param_8)

{
  CommonOperatorBuilder *pCVar1;
  long lVar2;
  Operator *pOVar3;
  Node *pNVar4;
  AccessBuilder *this_00;
  Node *pNVar5;
  long lVar6;
  AccessBuilder *this_01;
  Node *pNVar7;
  undefined8 uVar8;
  Graph *pGVar9;
  SimplifiedOperatorBuilder *pSVar10;
  undefined8 uVar11;
  Node *local_c0;
  Node *pNStack_b8;
  AccessBuilder *local_b0;
  undefined8 uStack_a8;
  AccessBuilder *local_a0;
  AccessBuilder *pAStack_98;
  Node *local_88;
  AccessBuilder *local_80;
  AccessBuilder *local_78;
  AccessBuilder *pAStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::ToBoolean
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_c0 = param_8;
  pNVar4 = (Node *)Graph::NewNode(pGVar9,pOVar3,1,&local_c0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
  pNStack_b8 = (Node *)*param_3;
  local_c0 = pNVar4;
  pNVar4 = (Node *)Graph::NewNode(pGVar9,pOVar3,2,&local_c0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_c0 = pNVar4;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar9,pOVar3,1,&local_c0,false);
  uVar8 = *param_4;
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForJSObjectElements(this_00);
  pOVar3 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,(FieldAccess *)&local_c0);
  local_88 = param_5;
  local_80 = (AccessBuilder *)uVar8;
  local_78 = this_00;
  pNVar5 = (Node *)Graph::NewNode(pGVar9,pOVar3,3,&local_88,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pCVar1 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
  lVar6 = TypeCache::Get();
  pOVar3 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar1,*(undefined8 *)(lVar6 + 0x1b0));
  local_c0 = param_6;
  pNStack_b8 = pNVar5;
  local_b0 = this_00;
  this_01 = (AccessBuilder *)Graph::NewNode(pGVar9,pOVar3,3,&local_c0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForFixedArrayLength(this_01);
  pOVar3 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar10,(FieldAccess *)&local_c0);
  local_88 = pNVar5;
  local_80 = this_01;
  local_78 = this_00;
  uVar8 = Graph::NewNode(pGVar9,pOVar3,3,&local_88,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  local_88 = (Node *)0x0;
  local_80 = (AccessBuilder *)CONCAT44(local_80._4_4_,0xffffffff);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::MaybeGrowFastElements
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                      (param_2 & 0xfe) != 4,&local_88);
  local_c0 = param_5;
  pNStack_b8 = pNVar5;
  local_b0 = this_01;
  uStack_a8 = uVar8;
  local_a0 = (AccessBuilder *)uVar8;
  pAStack_98 = this_00;
  pNVar5 = (Node *)Graph::NewNode(pGVar9,pOVar3,6,&local_c0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::NumberAdd
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  pNStack_b8 = (Node *)JSGraph::OneConstant(*(JSGraph **)(this + 0x10));
  local_c0 = (Node *)this_01;
  pNVar7 = (Node *)Graph::NewNode(pGVar9,pOVar3,2,&local_c0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_c0,param_2);
  pOVar3 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar10,(FieldAccess *)&local_c0);
  local_88 = param_5;
  local_80 = (AccessBuilder *)pNVar7;
  local_78 = (AccessBuilder *)pNVar5;
  pAStack_70 = this_00;
  uVar8 = Graph::NewNode(pGVar9,pOVar3,4,&local_88,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pSVar10 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_88,param_2,1);
  pOVar3 = (Operator *)SimplifiedOperatorBuilder::StoreElement(pSVar10,(ElementAccess *)&local_88);
  local_c0 = pNVar5;
  pNStack_b8 = (Node *)this_01;
  local_b0 = (AccessBuilder *)param_7;
  uStack_a8 = uVar8;
  local_a0 = this_00;
  pNVar5 = (Node *)Graph::NewNode(pGVar9,pOVar3,5,&local_c0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::IfFalse
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_c0 = pNVar4;
  uVar8 = Graph::NewNode(pGVar9,pOVar3,1,&local_c0,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  uVar11 = *param_4;
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Merge
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_c0 = (Node *)this_00;
  pNStack_b8 = (Node *)uVar8;
  uVar8 = Graph::NewNode(pGVar9,pOVar3,2,&local_c0,false);
  *param_3 = uVar8;
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_b0 = (AccessBuilder *)*param_3;
  local_c0 = pNVar5;
  pNStack_b8 = (Node *)uVar11;
  uVar8 = Graph::NewNode(pGVar9,pOVar3,3,&local_c0,false);
  *param_4 = uVar8;
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Phi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],6,2);
  local_b0 = (AccessBuilder *)*param_3;
  local_c0 = pNVar7;
  pNStack_b8 = param_6;
  Graph::NewNode(pGVar9,pOVar3,3,&local_c0,false);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

