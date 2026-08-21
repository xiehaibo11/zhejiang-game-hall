
/* v8::internal::compiler::JSCallReducer::ReduceStringIteratorPrototypeNext(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringIteratorPrototypeNext
          (JSCallReducer *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  AccessBuilder *pAVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  Node *pNVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  Graph *pGVar16;
  SimplifiedOperatorBuilder *pSVar17;
  Node *local_f8;
  Node *pNStack_f0;
  Node *local_e8;
  Node *pNStack_e0;
  AccessBuilder *local_d8;
  Node *pNStack_d0;
  Node *local_c8;
  Node *pNStack_c0;
  MapInference aMStack_a0 [48];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  uVar5 = NodeProperties::GetContextInput(param_1);
  MapInference::MapInference(aMStack_a0,*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
  uVar6 = MapInference::HaveMaps(aMStack_a0);
  if (((uVar6 & 1) == 0) ||
     (pAVar7 = (AccessBuilder *)MapInference::AllOfInstanceTypesAre(aMStack_a0,0x430),
     ((ulong)pAVar7 & 1) == 0)) {
    uVar4 = 0;
  }
  else {
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForJSStringIteratorString(pAVar7);
    pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar17,(FieldAccess *)&local_d8);
    local_f8 = pNVar2;
    pNStack_f0 = pNVar3;
    local_e8 = (Node *)uVar4;
    pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar8,3,&local_f8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForJSStringIteratorIndex(pAVar7);
    pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar17,(FieldAccess *)&local_d8);
    local_f8 = pNVar2;
    pNStack_f0 = (Node *)pAVar7;
    local_e8 = (Node *)uVar4;
    pNVar3 = (Node *)Graph::NewNode(pGVar16,pOVar8,3,&local_f8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StringLength
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_d8 = pAVar7;
    uVar9 = Graph::NewNode(pGVar16,pOVar8,1,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::NumberLessThan
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_d8 = (AccessBuilder *)pNVar3;
    pNStack_d0 = (Node *)uVar9;
    pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::Branch
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
    local_d8 = (AccessBuilder *)pNVar10;
    pNStack_d0 = (Node *)uVar4;
    pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::IfTrue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_d8 = (AccessBuilder *)pNVar10;
    pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar8,1,(Node **)&local_d8,false);
    pNVar12 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StringFromCodePointAt
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_d8 = pAVar7;
    pNStack_d0 = pNVar3;
    local_c8 = pNVar3;
    pNStack_c0 = pNVar11;
    pNVar13 = (Node *)Graph::NewNode(pGVar16,pOVar8,4,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::StringLength
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_d8 = (AccessBuilder *)pNVar13;
    uVar4 = Graph::NewNode(pGVar16,pOVar8,1,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             SimplifiedOperatorBuilder::NumberAdd
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_d8 = (AccessBuilder *)pNVar3;
    pNStack_d0 = (Node *)uVar4;
    pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar8,2,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForJSStringIteratorIndex(pAVar7);
    pOVar8 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar17,(FieldAccess *)&local_d8);
    local_f8 = pNVar2;
    pNStack_f0 = (Node *)pAVar7;
    local_e8 = pNVar13;
    pNStack_e0 = pNVar11;
    pNVar2 = (Node *)Graph::NewNode(pGVar16,pOVar8,4,&local_f8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_d8 = (AccessBuilder *)pNVar10;
    uVar4 = Graph::NewNode(pGVar16,pOVar8,1,(Node **)&local_d8,false);
    uVar9 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    uVar14 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_d8 = (AccessBuilder *)pNVar11;
    pNStack_d0 = (Node *)uVar4;
    uVar15 = Graph::NewNode(pGVar16,pOVar8,2,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_d8 = (AccessBuilder *)pNVar2;
    pNStack_d0 = pNVar3;
    local_c8 = (Node *)uVar15;
    uVar4 = Graph::NewNode(pGVar16,pOVar8,3,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_d8 = (AccessBuilder *)pNVar13;
    pNStack_d0 = (Node *)uVar9;
    local_c8 = (Node *)uVar15;
    pNVar2 = (Node *)Graph::NewNode(pGVar16,pOVar8,3,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_d8 = (AccessBuilder *)pNVar12;
    pNStack_d0 = (Node *)uVar14;
    local_c8 = (Node *)uVar15;
    uVar9 = Graph::NewNode(pGVar16,pOVar8,3,(Node **)&local_d8,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             JSOperatorBuilder::CreateIterResultObject
                       ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
    local_d8 = (AccessBuilder *)pNVar2;
    pNStack_d0 = (Node *)uVar9;
    local_c8 = (Node *)uVar5;
    pNStack_c0 = (Node *)uVar4;
    uVar4 = Graph::NewNode(pGVar16,pOVar8,4,(Node **)&local_d8,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,uVar4,uVar15);
  }
  MapInference::~MapInference(aMStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

