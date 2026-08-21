
/* v8::internal::compiler::JSCallReducer::ReduceArrayIndexOfIncludes(v8::internal::compiler::JSCallReducer::SearchVariant,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayIndexOfIncludes
          (JSCallReducer *this,int param_2,Node *param_3)

{
  long lVar1;
  long lVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  ulong uVar6;
  undefined8 uVar7;
  AccessBuilder *this_00;
  Operator *pOVar8;
  Node *pNVar9;
  Node *pNVar10;
  Operator *pOVar11;
  Operator *pOVar12;
  Node *pNVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  Graph *pGVar17;
  SimplifiedOperatorBuilder *pSVar18;
  Graph *this_01;
  Graph *pGVar19;
  undefined8 local_118 [2];
  int *local_108;
  byte local_fc [4];
  Node *local_f8;
  Node *local_f0;
  Node *pNStack_e8;
  Node *local_e0;
  MapInference aMStack_d8 [48];
  Node *local_a8;
  Node *pNStack_a0;
  Node *local_98;
  Node *pNStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  Node *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  lVar2 = CallParametersOf(*(Operator **)param_3);
  if ((*(byte *)(lVar2 + 3) >> 4 & 1) != 0) {
    pNVar3 = (Node *)0x0;
    goto LAB_016e2778;
  }
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_3,1);
  pNVar4 = (Node *)NodeProperties::GetEffectInput(param_3,0);
  local_f8 = pNVar4;
  pNVar5 = (Node *)NodeProperties::GetControlInput(param_3,0);
  MapInference::MapInference(aMStack_d8,*(JSHeapBroker **)(this + 0x18),pNVar3,pNVar4);
  uVar6 = MapInference::HaveMaps(aMStack_d8);
  if ((uVar6 & 1) == 0) {
    pNVar3 = (Node *)0x0;
  }
  else {
    uVar7 = MapInference::GetMaps(aMStack_d8);
    uVar6 = FUN_016e047c(*(undefined8 *)(this + 0x18),uVar7,local_fc);
    if ((uVar6 & 1) == 0) {
      pNVar3 = (Node *)MapInference::NoChange(aMStack_d8);
    }
    else {
      if (((local_fc[0] < 6) && ((local_fc[0] & 1) != 0)) &&
         (uVar6 = CompilationDependencies::DependOnNoElementsProtector
                            (*(CompilationDependencies **)(this + 0x30)), (uVar6 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      MapInference::RelyOnMapsPreferStability
                (aMStack_d8,*(CompilationDependencies **)(this + 0x30),*(JSGraph **)(this + 0x10),
                 &local_f8,pNVar5,(FeedbackSource *)(lVar2 + 8));
      if (param_2 == 1) {
        if (local_fc[0] < 5) {
          puVar16 = &DAT_01a5d414;
LAB_016e245c:
          uVar15 = *(undefined4 *)(puVar16 + (long)(char)local_fc[0] * 4);
        }
        else {
          uVar15 = 0xb7;
        }
      }
      else {
        if (local_fc[0] < 5) {
          puVar16 = &DAT_01a5d428;
          goto LAB_016e245c;
        }
        uVar15 = 0xb3;
      }
      Builtins::CallableFor
                ((Builtins *)local_118,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),uVar15);
      local_a8 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
      pNStack_a0 = (Node *)local_108;
      this_00 = (AccessBuilder *)
                Linkage::GetStubCallDescriptor
                          (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_a8,
                           local_108[2] - *local_108,0,0x70,0);
      pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar18 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSObjectElements(this_00);
      pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar18,(FieldAccess *)&local_a8);
      pNStack_e8 = local_f8;
      local_f0 = pNVar3;
      local_e0 = pNVar5;
      pNVar4 = (Node *)Graph::NewNode(pGVar17,pOVar8,3,&local_f0,false);
      local_f8 = pNVar4;
      if (*(int *)(*(long *)param_3 + 0x14) < 3) {
        pNVar9 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
      }
      else {
        pNVar9 = (Node *)NodeProperties::GetValueInput(param_3,2);
      }
      pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar18 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_a8,local_fc[0]);
      pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar18,(FieldAccess *)&local_a8);
      pNStack_e8 = local_f8;
      local_f0 = pNVar3;
      local_e0 = pNVar5;
      pNVar3 = (Node *)Graph::NewNode(pGVar17,pOVar8,3,&local_f0,false);
      local_f8 = pNVar3;
      uVar7 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      if (3 < *(int *)(*(long *)param_3 + 0x14)) {
        pNVar10 = (Node *)NodeProperties::GetValueInput(param_3,3);
        pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar8 = (Operator *)
                 SimplifiedOperatorBuilder::CheckSmi
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                            (FeedbackSource *)(lVar2 + 8));
        pNStack_a0 = local_f8;
        local_a8 = pNVar10;
        local_98 = pNVar5;
        pNVar5 = (Node *)Graph::NewNode(pGVar17,pOVar8,3,&local_a8,false);
        pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
        local_f8 = pNVar5;
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::Select
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar11 = (Operator *)
                  SimplifiedOperatorBuilder::NumberLessThan
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        pNStack_a0 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
        local_a8 = pNVar5;
        pNVar10 = (Node *)Graph::NewNode(pGVar19,pOVar11,2,&local_a8,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar11 = (Operator *)
                  SimplifiedOperatorBuilder::NumberMax
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        this_01 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::NumberAdd
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_a8 = pNVar3;
        pNStack_a0 = pNVar5;
        pNVar13 = (Node *)Graph::NewNode(this_01,pOVar12,2,&local_a8,false);
        pNStack_a0 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
        local_a8 = pNVar13;
        pNStack_a0 = (Node *)Graph::NewNode(pGVar19,pOVar11,2,&local_a8,false);
        local_a8 = pNVar10;
        local_98 = pNVar5;
        uVar7 = Graph::NewNode(pGVar17,pOVar8,3,&local_a8,false);
      }
      uVar14 = NodeProperties::GetContextInput(param_3);
      pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Call
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                          (CallDescriptor *)this_00);
      local_a8 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_118[0]);
      local_78 = local_f8;
      pNStack_a0 = pNVar4;
      local_98 = pNVar9;
      pNStack_90 = pNVar3;
      local_88 = uVar7;
      uStack_80 = uVar14;
      pNVar3 = (Node *)Graph::NewNode(pGVar17,pOVar8,7,&local_a8,false);
      local_f8 = pNVar3;
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_3,pNVar3,pNVar3,0);
    }
  }
  MapInference::~MapInference(aMStack_d8);
LAB_016e2778:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

