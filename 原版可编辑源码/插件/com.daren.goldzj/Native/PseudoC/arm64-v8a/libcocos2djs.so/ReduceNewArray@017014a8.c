
/* v8::internal::compiler::JSCreateLowering::ReduceNewArray(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::MapRef, v8::internal::ElementsKind,
   v8::internal::AllocationType, v8::internal::compiler::SlackTrackingPrediction const&) */

Node * v8::internal::compiler::JSCreateLowering::ReduceNewArray
                 (long param_1,Node *param_2,Node *param_3,undefined8 param_4,undefined8 param_5,
                 uint param_6,undefined4 param_7,int *param_8)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  AccessBuilder *this;
  AccessBuilder *pAVar8;
  undefined8 uVar9;
  ulong uVar10;
  Graph *pGVar11;
  JSGraph *pJVar12;
  int iVar13;
  JSGraph *local_128;
  AccessBuilder *local_120;
  Node *local_118;
  undefined8 local_110;
  char local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  Node *local_d8;
  Node *pNStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Node *local_a0;
  Node *local_98;
  AccessBuilder *local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  uVar10 = (ulong)param_6;
  local_f0 = param_4;
  uStack_e8 = param_5;
  uVar3 = NodeProperties::GetEffectInput(param_2,0);
  uVar4 = NodeProperties::GetControlInput(param_2,0);
  if (((param_6 & 0xff) < 7) && ((0x55U >> (ulong)(param_6 & 0x1f) & 1) != 0)) {
    uVar10 = 0x7010501030101 >> ((uVar10 & 7) << 3);
  }
  MapRef::AsElementsKind(local_108,&local_f0,uVar10 & 0xffffffff);
  if (local_108[0] == '\0') {
    param_2 = (Node *)NoChangeBecauseOfMissingData
                                (*(JSHeapBroker **)(param_1 + 0x20),"ReduceNewArray",0x1d8);
  }
  else {
    uStack_e8 = uStack_f8;
    local_f0 = local_100;
    pGVar11 = (Graph *)**(undefined8 **)(param_1 + 0x18);
    local_a0 = (Node *)0x0;
    local_98 = (Node *)CONCAT44(local_98._4_4_,0xffffffff);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::CheckBounds
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x18))[0x2f],
                        (FeedbackSource *)&local_a0);
    pNStack_d0 = (Node *)JSGraph::Constant(*(JSGraph **)(param_1 + 0x18),16380.0);
    local_d8 = param_3;
    local_c8 = uVar3;
    uStack_c0 = uVar4;
    pNVar6 = (Node *)Graph::NewNode(pGVar11,pOVar5,4,&local_d8,false);
    pGVar11 = (Graph *)**(undefined8 **)(param_1 + 0x18);
    uVar2 = MapRef::elements_kind((MapRef *)&local_f0);
    if ((uVar2 & 0xfe) == 4) {
      pOVar5 = (Operator *)SimplifiedOperatorBuilder::NewDoubleElements();
    }
    else {
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NewSmiOrObjectElements
                         (*(SimplifiedOperatorBuilder **)(*(long *)(param_1 + 0x18) + 0x178),param_7
                         );
    }
    local_d8 = pNVar6;
    pNStack_d0 = pNVar6;
    local_c8 = uVar4;
    pNVar7 = (Node *)Graph::NewNode(pGVar11,pOVar5,3,&local_d8,false);
    pJVar12 = *(JSGraph **)(param_1 + 0x18);
    local_120 = (AccessBuilder *)0x0;
    pGVar11 = *(Graph **)pJVar12;
    iVar13 = *param_8;
    local_128 = pJVar12;
    local_118 = pNVar7;
    local_110 = uVar4;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar12 + 8),1);
    local_d8 = pNVar7;
    uVar3 = Graph::NewNode(pGVar11,pOVar5,1,&local_d8,false);
    pGVar11 = *(Graph **)pJVar12;
    local_118 = (Node *)uVar3;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::Allocate
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),0xffffffff,param_7);
    local_d8 = (Node *)JSGraph::Constant(pJVar12,(double)(long)iVar13);
    pNStack_d0 = (Node *)uVar3;
    local_c8 = uVar4;
    this = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar5,3,&local_d8,false);
    local_120 = this;
    local_118 = (Node *)this;
    AccessBuilder::ForMap(this);
    uVar3 = JSGraph::Constant(pJVar12,(ObjectRef *)&local_f0);
    pGVar11 = *(Graph **)pJVar12;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)&local_d8);
    local_a0 = (Node *)this;
    local_98 = (Node *)uVar3;
    local_90 = this;
    uStack_88 = uVar4;
    pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar5,4,&local_a0,false);
    local_118 = (Node *)pAVar8;
    AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar8);
    uVar3 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(param_1 + 0x18));
    pGVar11 = *(Graph **)pJVar12;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)&local_d8);
    local_a0 = (Node *)this;
    local_98 = (Node *)uVar3;
    local_90 = pAVar8;
    uStack_88 = uVar4;
    pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar5,4,&local_a0,false);
    local_118 = (Node *)pAVar8;
    AccessBuilder::ForJSObjectElements(pAVar8);
    pJVar12 = local_128;
    pGVar11 = *(Graph **)local_128;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_128 + 0x178),(FieldAccess *)&local_d8)
    ;
    uVar3 = local_110;
    uStack_88 = local_110;
    local_a0 = (Node *)this;
    local_98 = pNVar7;
    local_90 = pAVar8;
    uVar4 = Graph::NewNode(pGVar11,pOVar5,4,&local_a0,false);
    local_118 = (Node *)uVar4;
    MapRef::elements_kind((MapRef *)&local_f0);
    AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_d8);
    pGVar11 = *(Graph **)pJVar12;
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar12 + 0x178),(FieldAccess *)&local_d8);
    uVar9 = 4;
    uStack_88 = uVar3;
    local_a0 = (Node *)this;
    local_98 = pNVar6;
    local_90 = (AccessBuilder *)uVar4;
    local_118 = (Node *)Graph::NewNode(pGVar11,pOVar5,4,&local_a0,false);
    if (0 < param_8[1]) {
      uVar2 = 0;
      do {
        AccessBuilder::ForJSObjectInObjectProperty
                  ((AccessBuilder *)&local_f0,(MapRef *)(ulong)uVar2,(int)uVar9);
        pNVar6 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(param_1 + 0x18));
        pGVar11 = *(Graph **)local_128;
        pOVar5 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField
                           (*(SimplifiedOperatorBuilder **)(local_128 + 0x178),
                            (FieldAccess *)&local_d8);
        uVar9 = 4;
        local_a0 = (Node *)local_120;
        local_90 = (AccessBuilder *)local_118;
        uStack_88 = local_110;
        local_98 = pNVar6;
        local_118 = (Node *)Graph::NewNode(pGVar11,pOVar5,4,&local_a0,false);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < param_8[1]);
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

