
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreatePromise(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreatePromise
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  Node *pNVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  AccessBuilder *this_00;
  AccessBuilder *pAVar6;
  undefined8 uVar7;
  long lVar8;
  JSGraph *pJVar9;
  Graph *pGVar10;
  undefined8 uVar11;
  JSGraph *local_f0;
  AccessBuilder *local_e8;
  Node *local_e0;
  undefined8 local_d8;
  MapRef local_d0 [16];
  Node *local_c0;
  undefined8 uStack_b8;
  AccessBuilder *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  lVar8 = *(long *)(this + 0x20);
  if (*(char *)(lVar8 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_b8 = *(undefined8 *)(lVar8 + 0x28);
  local_c0 = *(Node **)(lVar8 + 0x20);
  local_a0 = NativeContextRef::promise_function((NativeContextRef *)&local_c0);
  local_d0 = (MapRef  [16])JSFunctionRef::initial_map((JSFunctionRef *)local_a0);
  pJVar9 = *(JSGraph **)(this + 0x18);
  uVar11 = *(undefined8 *)(*(long *)pJVar9 + 8);
  local_e8 = (AccessBuilder *)0x0;
  local_f0 = pJVar9;
  local_e0 = pNVar3;
  local_d8 = uVar11;
  iVar2 = MapRef::instance_size(local_d0);
  pGVar10 = *(Graph **)pJVar9;
  pOVar4 = (Operator *)CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(pJVar9 + 8),1)
  ;
  local_a0._0_8_ = pNVar3;
  uVar5 = Graph::NewNode(pGVar10,pOVar4,1,(Node **)local_a0,false);
  pGVar10 = *(Graph **)pJVar9;
  local_e0 = (Node *)uVar5;
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     (*(SimplifiedOperatorBuilder **)(pJVar9 + 0x178),0xffffffff,0);
  local_a0._0_8_ = JSGraph::Constant(pJVar9,(double)iVar2);
  local_a0._8_8_ = uVar5;
  local_90 = uVar11;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar4,3,(Node **)local_a0,false);
  local_e8 = this_00;
  local_e0 = (Node *)this_00;
  AccessBuilder::ForMap(this_00);
  uVar5 = JSGraph::Constant(pJVar9,(ObjectRef *)local_d0);
  pGVar10 = *(Graph **)pJVar9;
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar9 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)this_00;
  uStack_b8 = uVar5;
  local_b0 = this_00;
  uStack_a8 = uVar11;
  pAVar6 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar4,4,&local_c0,false);
  local_e0 = (Node *)pAVar6;
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar6);
  uVar5 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pGVar10 = *(Graph **)pJVar9;
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar9 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)this_00;
  uStack_b8 = uVar5;
  local_b0 = pAVar6;
  uStack_a8 = uVar11;
  pAVar6 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar4,4,&local_c0,false);
  local_e0 = (Node *)pAVar6;
  AccessBuilder::ForJSObjectElements(pAVar6);
  uVar11 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pJVar9 = local_f0;
  pGVar10 = *(Graph **)local_f0;
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(local_f0 + 0x178),(FieldAccess *)local_a0);
  uVar5 = local_d8;
  uStack_a8 = local_d8;
  local_c0 = (Node *)this_00;
  uStack_b8 = uVar11;
  local_b0 = pAVar6;
  uVar11 = Graph::NewNode(pGVar10,pOVar4,4,&local_c0,false);
  local_e0 = (Node *)uVar11;
  AccessBuilder::ForJSObjectOffset((AccessBuilder *)local_a0,0xc,5);
  uVar7 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
  pGVar10 = *(Graph **)pJVar9;
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar9 + 0x178),(FieldAccess *)local_a0);
  uStack_a8 = uVar5;
  local_c0 = (Node *)this_00;
  uStack_b8 = uVar7;
  local_b0 = (AccessBuilder *)uVar11;
  uVar11 = Graph::NewNode(pGVar10,pOVar4,4,&local_c0,false);
  local_e0 = (Node *)uVar11;
  AccessBuilder::ForJSObjectOffset((AccessBuilder *)local_a0,0x10,5);
  uVar7 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
  pGVar10 = *(Graph **)pJVar9;
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(pJVar9 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)local_e8;
  uStack_a8 = uVar5;
  uStack_b8 = uVar7;
  local_b0 = (AccessBuilder *)uVar11;
  local_e0 = (Node *)Graph::NewNode(pGVar10,pOVar4,4,&local_c0,false);
  AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_f0,param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

