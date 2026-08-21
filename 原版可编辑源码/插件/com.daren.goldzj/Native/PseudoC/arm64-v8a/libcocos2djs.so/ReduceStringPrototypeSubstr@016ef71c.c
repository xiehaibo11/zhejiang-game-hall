
/* v8::internal::compiler::JSCallReducer::ReduceStringPrototypeSubstr(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringPrototypeSubstr
          (JSCallReducer *this,Node *param_1)

{
  FeedbackSource *pFVar1;
  CommonOperatorBuilder *pCVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Operator *pOVar10;
  Node *pNVar11;
  Node *pNVar12;
  Node *pNVar13;
  undefined8 uVar14;
  Operator *pOVar15;
  Operator *pOVar16;
  undefined8 uVar17;
  Graph *pGVar18;
  Graph *this_00;
  Graph *pGVar19;
  Node *local_88;
  Node *pNStack_80;
  Node *local_78;
  undefined8 uStack_70;
  Node *local_68;
  
  if ((*(int *)(*(Operator **)param_1 + 0x14) < 3) ||
     (lVar4 = CallParametersOf(*(Operator **)param_1), (*(byte *)(lVar4 + 3) >> 4 & 1) != 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = NodeProperties::GetEffectInput(param_1,0);
    uVar6 = NodeProperties::GetControlInput(param_1,0);
    pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,1);
    pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,2);
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      pNVar9 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    pFVar1 = (FeedbackSource *)(lVar4 + 8);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::CheckString
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1);
    local_88 = pNVar7;
    pNStack_80 = (Node *)uVar5;
    local_78 = (Node *)uVar6;
    pNVar7 = (Node *)Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::CheckSmi
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1);
    local_88 = pNVar8;
    pNStack_80 = pNVar7;
    local_78 = (Node *)uVar6;
    pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StringLength
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_88 = pNVar7;
    pNVar11 = (Node *)Graph::NewNode(pGVar19,pOVar10,1,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::ReferenceEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pNStack_80 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    local_88 = pNVar9;
    pNVar12 = (Node *)Graph::NewNode(pGVar19,pOVar10,2,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
    local_88 = pNVar12;
    pNStack_80 = (Node *)uVar6;
    pNVar12 = (Node *)Graph::NewNode(pGVar19,pOVar10,2,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::IfTrue
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_88 = pNVar12;
    pNVar13 = (Node *)Graph::NewNode(pGVar19,pOVar10,1,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::IfFalse
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_88 = pNVar12;
    uVar5 = Graph::NewNode(pGVar19,pOVar10,1,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::CheckSmi
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1);
    local_88 = pNVar9;
    pNStack_80 = pNVar8;
    local_78 = (Node *)uVar5;
    uVar6 = Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Merge
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_88 = pNVar13;
    pNStack_80 = (Node *)uVar5;
    uVar5 = Graph::NewNode(pGVar19,pOVar10,2,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::EffectPhi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_88 = pNVar8;
    pNStack_80 = (Node *)uVar6;
    local_78 = (Node *)uVar5;
    uVar14 = Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Phi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_88 = pNVar11;
    pNStack_80 = (Node *)uVar6;
    local_78 = (Node *)uVar5;
    pNVar9 = (Node *)Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Select
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::NumberLessThan
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pNStack_80 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    local_88 = pNVar8;
    pNVar12 = (Node *)Graph::NewNode(pGVar18,pOVar15,2,&local_88,false);
    pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::NumberMax
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar16 = (Operator *)
              SimplifiedOperatorBuilder::NumberAdd
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_88 = pNVar11;
    pNStack_80 = pNVar8;
    pNVar13 = (Node *)Graph::NewNode(this_00,pOVar16,2,&local_88,false);
    pNStack_80 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    local_88 = pNVar13;
    pNStack_80 = (Node *)Graph::NewNode(pGVar18,pOVar15,2,&local_88,false);
    local_88 = pNVar12;
    local_78 = pNVar8;
    pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pCVar2 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
    uVar3 = BitsetType::UnsignedSmall();
    pOVar10 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar2,uVar3 | 1);
    local_88 = pNVar8;
    pNStack_80 = (Node *)uVar14;
    local_78 = (Node *)uVar5;
    pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::NumberMin
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::NumberMax
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    pNStack_80 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    local_88 = pNVar9;
    pNVar9 = (Node *)Graph::NewNode(pGVar18,pOVar15,2,&local_88,false);
    pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::NumberSubtract
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_88 = pNVar11;
    pNStack_80 = pNVar8;
    pNStack_80 = (Node *)Graph::NewNode(pGVar18,pOVar15,2,&local_88,false);
    local_88 = pNVar9;
    uVar6 = Graph::NewNode(pGVar19,pOVar10,2,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pCVar2 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
    uVar3 = BitsetType::UnsignedSmall();
    pOVar10 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar2,uVar3 | 1);
    pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::NumberAdd
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_88 = pNVar8;
    pNStack_80 = (Node *)uVar6;
    local_88 = (Node *)Graph::NewNode(pGVar18,pOVar15,2,&local_88,false);
    pNStack_80 = pNVar8;
    local_78 = (Node *)uVar5;
    uVar14 = Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::NumberLessThan
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_88 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    pNStack_80 = (Node *)uVar6;
    pNVar9 = (Node *)Graph::NewNode(pGVar19,pOVar10,2,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
    local_88 = pNVar9;
    pNStack_80 = (Node *)uVar5;
    pNVar9 = (Node *)Graph::NewNode(pGVar19,pOVar10,2,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::IfTrue
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_88 = pNVar9;
    pNVar11 = (Node *)Graph::NewNode(pGVar19,pOVar10,1,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::StringSubstring
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_88 = pNVar7;
    pNStack_80 = pNVar8;
    local_78 = (Node *)uVar14;
    uStack_70 = uVar14;
    local_68 = pNVar11;
    pNVar7 = (Node *)Graph::NewNode(pGVar19,pOVar10,5,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::IfFalse
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_88 = pNVar9;
    uVar5 = Graph::NewNode(pGVar19,pOVar10,1,&local_88,false);
    uVar6 = JSGraph::EmptyStringConstant(*(JSGraph **)(this + 0x10));
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Merge
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_88 = pNVar11;
    pNStack_80 = (Node *)uVar5;
    uVar17 = Graph::NewNode(pGVar19,pOVar10,2,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::EffectPhi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_88 = pNVar7;
    pNStack_80 = (Node *)uVar14;
    local_78 = (Node *)uVar17;
    uVar14 = Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Phi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_88 = pNVar7;
    pNStack_80 = (Node *)uVar6;
    local_78 = (Node *)uVar17;
    uVar5 = Graph::NewNode(pGVar19,pOVar10,3,&local_88,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar5,uVar14,uVar17);
  }
  return uVar5;
}

