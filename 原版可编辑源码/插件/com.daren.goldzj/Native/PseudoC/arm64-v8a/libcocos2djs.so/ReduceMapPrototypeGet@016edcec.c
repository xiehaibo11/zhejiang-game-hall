
/* v8::internal::compiler::JSCallReducer::ReduceMapPrototypeGet(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceMapPrototypeGet(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  AccessBuilder *pAVar7;
  Operator *pOVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  undefined8 uVar12;
  Graph *pGVar13;
  SimplifiedOperatorBuilder *pSVar14;
  Node *local_e8;
  Node *pNStack_e0;
  undefined8 local_d8;
  Node *local_d0;
  Node *pNStack_c8;
  Node *local_c0;
  AccessBuilder *pAStack_b8;
  MapInference aMStack_98 [48];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*(long *)param_1 + 0x14) == 3) {
    pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
    pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    uVar4 = NodeProperties::GetControlInput(param_1,0);
    uVar5 = NodeProperties::GetValueInput(param_1,2);
    MapInference::MapInference(aMStack_98,*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
    uVar6 = MapInference::HaveMaps(aMStack_98);
    if (((uVar6 & 1) == 0) ||
       (pAVar7 = (AccessBuilder *)MapInference::AllOfInstanceTypesAre(aMStack_98,0x41c),
       ((ulong)pAVar7 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar14 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSCollectionTable(pAVar7);
      pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar14,(FieldAccess *)&local_d0);
      local_e8 = pNVar2;
      pNStack_e0 = pNVar3;
      local_d8 = uVar4;
      pNVar2 = (Node *)Graph::NewNode(pGVar13,pOVar8,3,&local_e8,false);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::FindOrderedHashMapEntry
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_d0 = pNVar2;
      pNStack_c8 = (Node *)uVar5;
      local_c0 = pNVar2;
      pAStack_b8 = (AccessBuilder *)uVar4;
      pNVar3 = (Node *)Graph::NewNode(pGVar13,pOVar8,4,&local_d0,false);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::NumberEqual
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      pNStack_c8 = (Node *)JSGraph::MinusOneConstant(*(JSGraph **)(this + 0x10));
      local_d0 = pNVar3;
      pNVar9 = (Node *)Graph::NewNode(pGVar13,pOVar8,2,&local_d0,false);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Branch
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
      local_d0 = pNVar9;
      pNStack_c8 = (Node *)uVar4;
      pNVar9 = (Node *)Graph::NewNode(pGVar13,pOVar8,2,&local_d0,false);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfTrue
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_d0 = pNVar9;
      pNVar10 = (Node *)Graph::NewNode(pGVar13,pOVar8,1,&local_d0,false);
      pNVar11 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::IfFalse
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_d0 = pNVar9;
      pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar8,1,&local_d0,false);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar14 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForOrderedHashMapEntryValue(pAVar7);
      pOVar8 = (Operator *)
               SimplifiedOperatorBuilder::LoadElement(pSVar14,(ElementAccess *)&local_e8);
      local_d0 = pNVar2;
      pNStack_c8 = pNVar3;
      local_c0 = pNVar3;
      pAStack_b8 = pAVar7;
      uVar5 = Graph::NewNode(pGVar13,pOVar8,4,&local_d0,false);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Merge
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
      local_d0 = pNVar10;
      pNStack_c8 = (Node *)pAVar7;
      uVar12 = Graph::NewNode(pGVar13,pOVar8,2,&local_d0,false);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Phi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
      local_d0 = pNVar11;
      pNStack_c8 = (Node *)uVar5;
      local_c0 = (Node *)uVar12;
      uVar4 = Graph::NewNode(pGVar13,pOVar8,3,&local_d0,false);
      pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
      local_d0 = pNVar3;
      pNStack_c8 = (Node *)uVar5;
      local_c0 = (Node *)uVar12;
      uVar5 = Graph::NewNode(pGVar13,pOVar8,3,&local_d0,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,uVar5,uVar12);
    }
    MapInference::~MapInference(aMStack_98);
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

