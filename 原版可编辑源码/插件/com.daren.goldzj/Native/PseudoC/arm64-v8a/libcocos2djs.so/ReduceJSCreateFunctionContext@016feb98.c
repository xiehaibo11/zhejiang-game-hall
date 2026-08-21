
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateFunctionContext(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateFunctionContext
          (JSCreateLowering *this,Node *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Operator *pOVar9;
  ulong extraout_x1;
  long lVar10;
  AccessBuilder *this_00;
  Graph *pGVar11;
  undefined1 auVar12 [16];
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
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)CreateFunctionContextParametersOf(*(Operator **)param_1);
  ObjectRef::ObjectRef(aOStack_c0,*(undefined8 *)(this + 0x20),*puVar4,0);
  uVar5 = ObjectRef::IsScopeInfo(aOStack_c0);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
  iVar2 = *(int *)(puVar4 + 1);
  if (iVar2 < 0x10) {
    cVar1 = *(char *)((long)puVar4 + 0xc);
    uVar6 = NodeProperties::GetEffectInput(param_1,0);
    uVar7 = NodeProperties::GetControlInput(param_1,0);
    uVar8 = NodeProperties::GetContextInput(param_1);
    local_e0 = *(JSGraph **)(this + 0x18);
    local_d8 = (Node *)0x0;
    local_d0 = uVar6;
    local_c8 = uVar7;
    if (cVar1 == '\x02') {
      lVar10 = *(long *)(this + 0x20);
      if (*(char *)(lVar10 + 0x18) != '\x01') goto LAB_016fee54;
      uStack_88 = *(undefined8 *)(lVar10 + 0x28);
      local_90 = *(undefined8 *)(lVar10 + 0x20);
      auVar12 = NativeContextRef::function_context_map((NativeContextRef *)&local_90);
    }
    else {
      if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar10 = *(long *)(this + 0x20);
      if (*(char *)(lVar10 + 0x18) != '\x01') {
LAB_016fee54:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      uStack_88 = *(undefined8 *)(lVar10 + 0x28);
      local_90 = *(undefined8 *)(lVar10 + 0x20);
      auVar12 = NativeContextRef::eval_context_map((NativeContextRef *)&local_90);
    }
    AllocationBuilder::AllocateContext
              (&local_e0,(long)iVar2 + 2U & 0xffffffff,auVar12._0_8_,auVar12._8_8_);
    AccessBuilder::ForContextSlot((AccessBuilder *)0x0,extraout_x1);
    uVar6 = JSGraph::Constant(local_e0,aOStack_c0);
    pGVar11 = *(Graph **)local_e0;
    pOVar9 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)&local_90);
    local_b0 = local_d8;
    local_a0 = local_d0;
    uStack_98 = local_c8;
    uStack_a8 = uVar6;
    auVar12 = Graph::NewNode(pGVar11,pOVar9,4,&local_b0,false);
    local_d0 = auVar12._0_8_;
    AccessBuilder::ForContextSlot((AccessBuilder *)0x1,auVar12._8_8_);
    pGVar11 = *(Graph **)local_e0;
    pOVar9 = (Operator *)
             SimplifiedOperatorBuilder::StoreField
                       (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),(FieldAccess *)&local_90);
    local_b0 = local_d8;
    local_a0 = local_d0;
    uStack_98 = local_c8;
    uStack_a8 = uVar8;
    auVar12 = Graph::NewNode(pGVar11,pOVar9,4,&local_b0,false);
    local_d0 = auVar12._0_8_;
    if (0 < iVar2) {
      this_00 = (AccessBuilder *)0x2;
      do {
        local_d0 = auVar12._0_8_;
        AccessBuilder::ForContextSlot(this_00,auVar12._8_8_);
        uVar6 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
        pGVar11 = *(Graph **)local_e0;
        pOVar9 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField
                           (*(SimplifiedOperatorBuilder **)(local_e0 + 0x178),
                            (FieldAccess *)&local_90);
        local_b0 = local_d8;
        local_a0 = local_d0;
        uStack_98 = local_c8;
        uStack_a8 = uVar6;
        auVar12 = Graph::NewNode(pGVar11,pOVar9,4,&local_b0,false);
        local_d0 = auVar12._0_8_;
        this_00 = this_00 + 1;
      } while ((long)this_00 < (long)((long)iVar2 + 2U));
    }
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
    AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_e0,param_1);
  }
  else {
    param_1 = (Node *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

