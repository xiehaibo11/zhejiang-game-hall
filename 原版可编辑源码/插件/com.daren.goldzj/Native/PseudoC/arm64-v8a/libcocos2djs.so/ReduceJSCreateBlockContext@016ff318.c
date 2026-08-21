
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateBlockContext(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateBlockContext
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  ulong extraout_x1;
  long lVar7;
  undefined8 uVar8;
  AccessBuilder *this_00;
  Graph *pGVar9;
  undefined1 auVar10 [16];
  JSGraph *local_e0;
  Node *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ObjectRef aOStack_c0 [16];
  Node *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar8 = *(undefined8 *)(this + 0x20);
  uVar3 = ScopeInfoOf(*(Operator **)param_1);
  ObjectRef::ObjectRef(aOStack_c0,uVar8,uVar3,0);
  uVar4 = ObjectRef::IsScopeInfo(aOStack_c0);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
  uVar2 = ScopeInfoRef::ContextLength((ScopeInfoRef *)aOStack_c0);
  if ((int)uVar2 < 0x10) {
    uVar3 = NodeProperties::GetEffectInput(param_1,0);
    uVar8 = NodeProperties::GetControlInput(param_1,0);
    uVar5 = NodeProperties::GetContextInput(param_1);
    local_e0 = *(JSGraph **)(this + 0x18);
    local_d8 = (Node *)0x0;
    lVar7 = *(long *)(this + 0x20);
    local_d0 = uVar3;
    local_c8 = uVar8;
    if (*(char *)(lVar7 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    uStack_88 = *(undefined8 *)(lVar7 + 0x28);
    local_90 = *(undefined8 *)(lVar7 + 0x20);
    auVar10 = NativeContextRef::block_context_map((NativeContextRef *)&local_90);
    AllocationBuilder::AllocateContext
              (&local_e0,(AccessBuilder *)(ulong)uVar2,auVar10._0_8_,auVar10._8_8_);
    AccessBuilder::ForContextSlot((AccessBuilder *)0x0,extraout_x1);
    uVar3 = JSGraph::Constant(local_e0,aOStack_c0);
    pGVar9 = *(Graph **)local_e0;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)&local_90);
    local_b0 = local_d8;
    local_a0 = local_d0;
    uStack_98 = local_c8;
    uStack_a8 = uVar3;
    auVar10 = Graph::NewNode(pGVar9,pOVar6,4,&local_b0,false);
    local_d0 = auVar10._0_8_;
    AccessBuilder::ForContextSlot((AccessBuilder *)0x1,auVar10._8_8_);
    pGVar9 = *(Graph **)local_e0;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)&local_90);
    local_b0 = local_d8;
    local_a0 = local_d0;
    uStack_98 = local_c8;
    uStack_a8 = uVar5;
    auVar10 = Graph::NewNode(pGVar9,pOVar6,4,&local_b0,false);
    local_d0 = auVar10._0_8_;
    if (2 < (int)uVar2) {
      this_00 = (AccessBuilder *)0x2;
      do {
        local_d0 = auVar10._0_8_;
        AccessBuilder::ForContextSlot(this_00,auVar10._8_8_);
        uVar3 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
        pGVar9 = *(Graph **)local_e0;
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField
                           (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),
                            (FieldAccess *)&local_90);
        local_b0 = local_d8;
        local_a0 = local_d0;
        uStack_98 = local_c8;
        uStack_a8 = uVar3;
        auVar10 = Graph::NewNode(pGVar9,pOVar6,4,&local_b0,false);
        local_d0 = auVar10._0_8_;
        this_00 = this_00 + 1;
      } while ((AccessBuilder *)(ulong)uVar2 != this_00);
    }
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_e0,param_1);
  }
  else {
    param_1 = (Node *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

