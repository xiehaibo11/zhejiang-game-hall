
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreate(v8::internal::compiler::Node*) */

Node * v8::internal::compiler::JSCreateLowering::ReduceJSCreate(Node *param_1)

{
  long lVar1;
  long *plVar2;
  Node *pNVar3;
  undefined8 uVar4;
  ulong uVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  AccessBuilder *this;
  AccessBuilder *pAVar8;
  Node *in_x1;
  Node *in_x2;
  undefined8 uVar9;
  uint uVar10;
  JSGraph *this_00;
  Graph *pGVar11;
  uint uVar12;
  JSGraph *local_110;
  AccessBuilder *local_108;
  Node *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  char local_e0;
  AccessBuilder aAStack_d8 [16];
  AccessBuilder *local_c8;
  undefined8 uStack_c0;
  AccessBuilder *local_b8;
  undefined8 uStack_b0;
  Node *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)NodeProperties::GetValueInput(in_x1,1);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(in_x1,0);
  uVar4 = NodeProperties::GetControlInput(in_x1,0);
  NodeProperties::GetJSCreateMap(*(NodeProperties **)(param_1 + 0x20),(JSHeapBroker *)in_x1,in_x2);
  if (local_e0 == '\0') {
    in_x1 = (Node *)0x0;
  }
  else {
    if (*(short *)(*plVar2 + 0x10) == 0x1e) {
      uVar9 = *(undefined8 *)(*plVar2 + 0x30);
    }
    else {
      uVar9 = 0;
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_a8,*(undefined8 *)(param_1 + 0x20),uVar9,0);
    uVar5 = ObjectRef::IsHeapObject((ObjectRef *)&local_a8);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    local_f0 = ObjectRef::AsJSFunction((ObjectRef *)&local_a8);
    uVar9 = CompilationDependencies::DependOnInitialMapInstanceSizePrediction
                      (*(CompilationDependencies **)(param_1 + 0x10),(JSFunctionRef *)local_f0);
    this_00 = *(JSGraph **)(param_1 + 0x18);
    local_108 = (AccessBuilder *)0x0;
    pGVar11 = *(Graph **)this_00;
    local_110 = this_00;
    local_100 = pNVar3;
    local_f8 = uVar4;
    pOVar6 = (Operator *)
             CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(this_00 + 8),1);
    local_a8 = pNVar3;
    uVar7 = Graph::NewNode(pGVar11,pOVar6,1,&local_a8,false);
    pGVar11 = *(Graph **)this_00;
    local_100 = (Node *)uVar7;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::Allocate
                       (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),0xffffffff,0);
    local_a8 = (Node *)JSGraph::Constant(this_00,(double)(int)uVar9);
    uStack_a0 = uVar7;
    local_98 = uVar4;
    this = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar6,3,&local_a8,false);
    local_108 = this;
    local_100 = (Node *)this;
    AccessBuilder::ForMap(this);
    uVar7 = JSGraph::Constant(this_00,(ObjectRef *)aAStack_d8);
    pGVar11 = *(Graph **)this_00;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = this;
    uStack_c0 = uVar7;
    local_b8 = this;
    uStack_b0 = uVar4;
    pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar6,4,(Node **)&local_c8,false);
    local_100 = (Node *)pAVar8;
    AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar8);
    uVar7 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(param_1 + 0x18));
    pGVar11 = *(Graph **)this_00;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_a8);
    local_c8 = this;
    uStack_c0 = uVar7;
    local_b8 = pAVar8;
    uStack_b0 = uVar4;
    pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar11,pOVar6,4,(Node **)&local_c8,false);
    local_100 = (Node *)pAVar8;
    AccessBuilder::ForJSObjectElements(pAVar8);
    uVar4 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(param_1 + 0x18));
    pGVar11 = *(Graph **)local_110;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_110 + 0x178),(FieldAccess *)&local_a8)
    ;
    uVar7 = 4;
    uStack_b0 = local_f8;
    local_c8 = this;
    uStack_c0 = uVar4;
    local_b8 = pAVar8;
    local_100 = (Node *)Graph::NewNode(pGVar11,pOVar6,4,(Node **)&local_c8,false);
    uVar12 = (uint)((ulong)uVar9 >> 0x20);
    if (0 < (int)uVar12) {
      uVar10 = 0;
      do {
        AccessBuilder::ForJSObjectInObjectProperty(aAStack_d8,(MapRef *)(ulong)uVar10,(int)uVar7);
        uVar4 = JSGraph::UndefinedConstant(*(JSGraph **)(param_1 + 0x18));
        pGVar11 = *(Graph **)local_110;
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField
                           (*(SimplifiedOperatorBuilder **)(local_110 + 0x178),
                            (FieldAccess *)&local_a8);
        uVar7 = 4;
        local_c8 = local_108;
        local_b8 = (AccessBuilder *)local_100;
        uStack_b0 = local_f8;
        uStack_c0 = uVar4;
        local_100 = (Node *)Graph::NewNode(pGVar11,pOVar6,4,(Node **)&local_c8,false);
        uVar10 = uVar10 + 1;
      } while (uVar12 != uVar10);
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x20))();
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_110,in_x1);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return in_x1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

