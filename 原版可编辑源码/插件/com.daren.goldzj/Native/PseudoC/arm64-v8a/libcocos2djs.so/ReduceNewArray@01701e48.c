
/* v8::internal::compiler::JSCreateLowering::ReduceNewArray(v8::internal::compiler::Node*,
   std::__ndk1::vector<v8::internal::compiler::Node*,
   std::__ndk1::allocator<v8::internal::compiler::Node*> >, v8::internal::compiler::MapRef,
   v8::internal::ElementsKind, v8::internal::AllocationType,
   v8::internal::compiler::SlackTrackingPrediction const&) */

Node * v8::internal::compiler::JSCreateLowering::ReduceNewArray
                 (JSCreateLowering *param_1,Node *param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,undefined4 param_7,int *param_8)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  Operator *pOVar7;
  Node *pNVar8;
  undefined8 uVar9;
  AccessBuilder *this;
  undefined8 uVar10;
  AccessBuilder *pAVar11;
  undefined8 uVar12;
  Graph *pGVar13;
  JSGraph *pJVar14;
  ulong *puVar15;
  int iVar16;
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
  ulong local_d0;
  undefined8 local_c8;
  Node *local_a0;
  Node *local_98;
  AccessBuilder *local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  local_f0 = param_4;
  uStack_e8 = param_5;
  uVar4 = NodeProperties::GetEffectInput(param_2,0);
  uVar5 = NodeProperties::GetControlInput(param_2,0);
  MapRef::AsElementsKind(local_108,&local_f0,param_6);
  if (local_108[0] == '\0') {
    param_2 = (Node *)NoChangeBecauseOfMissingData
                                (*(JSHeapBroker **)(param_1 + 0x20),"ReduceNewArray",0x234);
  }
  else {
    uStack_e8 = uStack_f8;
    local_f0 = local_100;
    if ((param_6 & 0xff) < 2) {
      puVar1 = (ulong *)param_3[1];
      for (puVar15 = (ulong *)*param_3; puVar15 != puVar1; puVar15 = puVar15 + 1) {
        local_d8 = *(Node **)(*puVar15 + 8);
        uVar3 = BitsetType::SignedSmall();
        if ((local_d8 != (Node *)(ulong)(uVar3 | 1)) &&
           (uVar6 = Type::SlowIs((Type *)&local_d8), (uVar6 & 1) == 0)) {
          pGVar13 = (Graph *)**(undefined8 **)(param_1 + 0x18);
          local_a0 = (Node *)0x0;
          local_98 = (Node *)CONCAT44(local_98._4_4_,0xffffffff);
          pOVar7 = (Operator *)
                   SimplifiedOperatorBuilder::CheckSmi
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x18))[0x2f],
                              (FeedbackSource *)&local_a0);
          local_d8 = (Node *)*puVar15;
          local_d0 = uVar4;
          local_c8 = uVar5;
          uVar4 = Graph::NewNode(pGVar13,pOVar7,3,&local_d8,false);
          *puVar15 = uVar4;
        }
      }
    }
    else if ((param_6 & 0xfe) == 4) {
      puVar1 = (ulong *)param_3[1];
      for (puVar15 = (ulong *)*param_3; puVar15 != puVar1; puVar15 = puVar15 + 1) {
        local_d8 = *(Node **)(*puVar15 + 8);
        if ((local_d8 != (Node *)0x1c5f) &&
           (uVar6 = Type::SlowIs((Type *)&local_d8,0x1c5f), (uVar6 & 1) == 0)) {
          pGVar13 = (Graph *)**(undefined8 **)(param_1 + 0x18);
          local_a0 = (Node *)0x0;
          local_98 = (Node *)CONCAT44(local_98._4_4_,0xffffffff);
          pOVar7 = (Operator *)
                   SimplifiedOperatorBuilder::CheckNumber
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x18))[0x2f],
                              (FeedbackSource *)&local_a0);
          local_d8 = (Node *)*puVar15;
          local_d0 = uVar4;
          local_c8 = uVar5;
          uVar4 = Graph::NewNode(pGVar13,pOVar7,3,&local_d8,false);
          *puVar15 = uVar4;
        }
        pGVar13 = (Graph *)**(undefined8 **)(param_1 + 0x18);
        pOVar7 = (Operator *)
                 SimplifiedOperatorBuilder::NumberSilenceNaN
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x18))[0x2f]);
        local_d8 = (Node *)*puVar15;
        uVar6 = Graph::NewNode(pGVar13,pOVar7,1,&local_d8,false);
        *puVar15 = uVar6;
      }
    }
    pNVar8 = (Node *)AllocateElements(param_1,uVar4,uVar5,param_6,param_3,param_7);
    uVar9 = JSGraph::Constant(*(JSGraph **)(param_1 + 0x18),
                              (double)(int)((ulong)(param_3[1] - *param_3) >> 3));
    pJVar14 = *(JSGraph **)(param_1 + 0x18);
    local_120 = (AccessBuilder *)0x0;
    pGVar13 = *(Graph **)pJVar14;
    iVar16 = *param_8;
    local_128 = pJVar14;
    local_118 = pNVar8;
    local_110 = uVar5;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar14 + 8),1);
    local_d8 = pNVar8;
    uVar4 = Graph::NewNode(pGVar13,pOVar7,1,&local_d8,false);
    pGVar13 = *(Graph **)pJVar14;
    local_118 = (Node *)uVar4;
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::Allocate
                       (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),0xffffffff,param_7);
    local_d8 = (Node *)JSGraph::Constant(pJVar14,(double)(long)iVar16);
    local_d0 = uVar4;
    local_c8 = uVar5;
    this = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar7,3,&local_d8,false);
    local_120 = this;
    local_118 = (Node *)this;
    AccessBuilder::ForMap(this);
    uVar10 = JSGraph::Constant(pJVar14,(ObjectRef *)&local_f0);
    pGVar13 = *(Graph **)pJVar14;
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)&local_d8);
    local_a0 = (Node *)this;
    local_98 = (Node *)uVar10;
    local_90 = this;
    uStack_88 = uVar5;
    pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar7,4,&local_a0,false);
    local_118 = (Node *)pAVar11;
    AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar11);
    uVar10 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(param_1 + 0x18));
    pGVar13 = *(Graph **)pJVar14;
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)&local_d8);
    local_a0 = (Node *)this;
    local_98 = (Node *)uVar10;
    local_90 = pAVar11;
    uStack_88 = uVar5;
    pAVar11 = (AccessBuilder *)Graph::NewNode(pGVar13,pOVar7,4,&local_a0,false);
    local_118 = (Node *)pAVar11;
    AccessBuilder::ForJSObjectElements(pAVar11);
    pJVar14 = local_128;
    pGVar13 = *(Graph **)local_128;
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_128 + 0x178),(FieldAccess *)&local_d8)
    ;
    uVar5 = local_110;
    uStack_88 = local_110;
    local_a0 = (Node *)this;
    local_98 = pNVar8;
    local_90 = pAVar11;
    uVar10 = Graph::NewNode(pGVar13,pOVar7,4,&local_a0,false);
    local_118 = (Node *)uVar10;
    AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_d8,param_6);
    pGVar13 = *(Graph **)pJVar14;
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(pJVar14 + 0x178),(FieldAccess *)&local_d8);
    uVar12 = 4;
    uStack_88 = uVar5;
    local_a0 = (Node *)this;
    local_98 = (Node *)uVar9;
    local_90 = (AccessBuilder *)uVar10;
    local_118 = (Node *)Graph::NewNode(pGVar13,pOVar7,4,&local_a0,false);
    if (0 < param_8[1]) {
      uVar3 = 0;
      do {
        AccessBuilder::ForJSObjectInObjectProperty
                  ((AccessBuilder *)&local_f0,(MapRef *)(ulong)uVar3,(int)uVar12);
        uVar5 = JSGraph::UndefinedConstant(*(JSGraph **)(param_1 + 0x18));
        pGVar13 = *(Graph **)local_128;
        pOVar7 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField
                           (*(SimplifiedOperatorBuilder **)(local_128 + 0x178),
                            (FieldAccess *)&local_d8);
        uVar12 = 4;
        local_a0 = (Node *)local_120;
        local_90 = (AccessBuilder *)local_118;
        uStack_88 = local_110;
        local_98 = (Node *)uVar5;
        local_118 = (Node *)Graph::NewNode(pGVar13,pOVar7,4,&local_a0,false);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < param_8[1]);
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x20))
              (*(long **)(param_1 + 8),param_2,param_2,param_2,0);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_128,param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

