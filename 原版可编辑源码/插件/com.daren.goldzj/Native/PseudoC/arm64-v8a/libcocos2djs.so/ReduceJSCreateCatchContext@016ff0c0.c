
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateCatchContext(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateCatchContext
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  ulong extraout_x1;
  long lVar7;
  undefined8 uVar8;
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
  uVar2 = ScopeInfoOf(*(Operator **)param_1);
  ObjectRef::ObjectRef(aOStack_c0,uVar8,uVar2,0);
  uVar3 = ObjectRef::IsScopeInfo(aOStack_c0);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
  uVar2 = NodeProperties::GetValueInput(param_1,0);
  uVar8 = NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  uVar5 = NodeProperties::GetContextInput(param_1);
  local_e0 = *(JSGraph **)(this + 0x18);
  local_d8 = (Node *)0x0;
  lVar7 = *(long *)(this + 0x20);
  local_d0 = uVar8;
  local_c8 = uVar4;
  if (*(char *)(lVar7 + 0x18) == '\x01') {
    uStack_88 = *(undefined8 *)(lVar7 + 0x28);
    local_90 = *(undefined8 *)(lVar7 + 0x20);
    auVar10 = NativeContextRef::catch_context_map((NativeContextRef *)&local_90);
    AllocationBuilder::AllocateContext(&local_e0,3,auVar10._0_8_,auVar10._8_8_);
    AccessBuilder::ForContextSlot((AccessBuilder *)0x0,extraout_x1);
    uVar8 = JSGraph::Constant(local_e0,aOStack_c0);
    pGVar9 = *(Graph **)local_e0;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)&local_90);
    local_b0 = local_d8;
    local_a0 = local_d0;
    uStack_98 = local_c8;
    uStack_a8 = uVar8;
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
    AccessBuilder::ForContextSlot((AccessBuilder *)0x2,auVar10._8_8_);
    pGVar9 = *(Graph **)local_e0;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)&local_90);
    local_b0 = local_d8;
    local_a0 = local_d0;
    uStack_98 = local_c8;
    uStack_a8 = uVar2;
    local_d0 = Graph::NewNode(pGVar9,pOVar6,4,&local_b0,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_e0,param_1);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","storage_.is_populated_");
}

