
/* v8::internal::compiler::JSCreateLowering::ReduceNewArray(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int, v8::internal::compiler::MapRef, v8::internal::ElementsKind,
   v8::internal::AllocationType, v8::internal::compiler::SlackTrackingPrediction const&) */

Node * v8::internal::compiler::JSCreateLowering::ReduceNewArray
                 (JSCreateLowering *param_1,Node *param_2,long param_3,int param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,undefined4 param_8,int *param_9)

{
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  AccessBuilder *this;
  AccessBuilder *pAVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  JSGraph *pJVar12;
  Graph *pGVar13;
  double dVar14;
  int iVar15;
  JSGraph *local_128;
  AccessBuilder *local_120;
  Node *local_118;
  undefined8 local_110;
  char local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  AccessBuilder *local_d8;
  Node *pNStack_d0;
  AccessBuilder *local_c8;
  undefined8 uStack_c0;
  Node *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  uVar11 = (ulong)param_7;
  local_f0 = param_5;
  uStack_e8 = param_6;
  pNVar2 = (Node *)NodeProperties::GetEffectInput(param_2,0);
  uVar3 = NodeProperties::GetControlInput(param_2,0);
  local_b8 = *(Node **)(param_3 + 8);
  dVar14 = (double)Type::Max((Type *)&local_b8);
  if (((0.0 < dVar14) && ((param_7 & 0xff) < 7)) && ((0x55U >> (ulong)(param_7 & 0x1f) & 1) != 0)) {
    uVar11 = 0x7010501030101 >> ((uVar11 & 7) << 3);
  }
  MapRef::AsElementsKind(local_108,&local_f0,uVar11 & 0xffffffff);
  if (local_108[0] == '\0') {
    param_2 = (Node *)NoChangeBecauseOfMissingData
                                (*(JSHeapBroker **)(param_1 + 0x20),"ReduceNewArray",0x20b);
  }
  else {
    uStack_e8 = uStack_f8;
    local_f0 = local_100;
    if (param_4 == 0) {
      pNVar4 = (Node *)JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(param_1 + 0x18));
    }
    else {
      pNVar4 = (Node *)AllocateElements(param_1,pNVar2,uVar3,uVar11 & 0xffffffff,param_4,param_8);
      pNVar2 = pNVar4;
    }
    pJVar12 = *(JSGraph **)(param_1 + 0x18);
    local_120 = (AccessBuilder *)0x0;
    pGVar13 = *(Graph **)pJVar12;
    iVar15 = *param_9;
    local_128 = pJVar12;
    local_118 = pNVar2;
    local_110 = uVar3;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar12 + 8),1);
    local_b8 = pNVar2;
    uVar6 = Graph::NewNode(pGVar13,pOVar5,1,&local_b8,false);
    pGVar13 = *(Graph **)pJVar12;
    local_118 = (Node *)uVar6;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::Allocate
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),0xffffffff,param_8);
    local_b8 = (Node *)JSGraph::Constant(pJVar12,(double)(long)iVar15);
    uStack_b0 = uVar6;
    local_a8 = uVar3;
    this = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar5,3,&local_b8,false);
    local_120 = this;
    local_118 = (Node *)this;
    AccessBuilder::ForMap(this);
    uVar6 = JSGraph::Constant(pJVar12,(ObjectRef *)&local_f0);
    pGVar13 = *(Graph **)pJVar12;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)&local_b8);
    local_d8 = this;
    pNStack_d0 = (Node *)uVar6;
    local_c8 = this;
    uStack_c0 = uVar3;
    pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar5,4,(Node **)&local_d8,false);
    local_118 = (Node *)pAVar7;
    AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar7);
    uVar6 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(param_1 + 0x18));
    pGVar13 = *(Graph **)pJVar12;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)&local_b8);
    local_d8 = this;
    pNStack_d0 = (Node *)uVar6;
    local_c8 = pAVar7;
    uStack_c0 = uVar3;
    pAVar7 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar5,4,(Node **)&local_d8,false);
    local_118 = (Node *)pAVar7;
    AccessBuilder::ForJSObjectElements(pAVar7);
    pJVar12 = local_128;
    pGVar13 = *(Graph **)local_128;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_128 + 0x178),(FieldAccess *)&local_b8)
    ;
    uVar3 = local_110;
    uStack_c0 = local_110;
    local_d8 = this;
    pNStack_d0 = pNVar4;
    local_c8 = pAVar7;
    uVar6 = Graph::NewNode(pGVar13,pOVar5,4,(Node **)&local_d8,false);
    local_118 = (Node *)uVar6;
    AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_b8,uVar11 & 0xffffffff);
    pGVar13 = *(Graph **)pJVar12;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)&local_b8);
    uVar9 = 4;
    uStack_c0 = uVar3;
    local_d8 = this;
    pNStack_d0 = (Node *)param_3;
    local_c8 = (AccessBuilder *)uVar6;
    local_118 = (Node *)Graph::NewNode(pGVar13,pOVar5,4,(Node **)&local_d8,false);
    if (0 < param_9[1]) {
      uVar10 = 0;
      do {
        AccessBuilder::ForJSObjectInObjectProperty
                  ((AccessBuilder *)&local_f0,(MapRef *)(ulong)uVar10,(int)uVar9);
        lVar8 = JSGraph::UndefinedConstant(*(JSGraph **)(param_1 + 0x18));
        pGVar13 = *(Graph **)local_128;
        pOVar5 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField
                           (*(SimplifiedOperatorBuilder **)(local_128 + 0x178),
                            (FieldAccess *)&local_b8);
        uVar9 = 4;
        local_d8 = local_120;
        local_c8 = (AccessBuilder *)local_118;
        uStack_c0 = local_110;
        pNStack_d0 = (Node *)lVar8;
        local_118 = (Node *)Graph::NewNode(pGVar13,pOVar5,4,(Node **)&local_d8,false);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < param_9[1]);
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x20))
              (*(long **)(param_1 + 8),param_2,param_2,param_2,0);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_128,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

