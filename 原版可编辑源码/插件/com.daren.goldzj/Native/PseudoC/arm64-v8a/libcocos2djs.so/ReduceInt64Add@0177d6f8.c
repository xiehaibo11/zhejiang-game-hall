
/* v8::internal::compiler::MachineOperatorReducer::ReduceInt64Add(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceInt64Add
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  Graph *pGVar2;
  long lVar3;
  Operator *pOVar4;
  Node *pNVar5;
  Node *this_00;
  long *plVar6;
  undefined8 *puVar7;
  Use *pUVar8;
  Node *pNVar9;
  Node *local_c0;
  Node *local_b8;
  Node *local_b0;
  long local_90;
  char local_88;
  undefined8 *local_80;
  Node *local_78;
  long local_70;
  char local_68;
  long local_58;
  char local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                  *)&local_80,param_1);
  if ((local_50 == '\0') || (local_58 != 0)) {
    if (local_68 == '\0') {
      if (((local_50 != '\0') && (*(short *)(*(long *)local_78 + 0x10) == 0x142)) &&
         (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
          ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                          *)&local_b8,local_78), local_88 != '\0')) {
        for (plVar6 = *(long **)(local_78 + 0x18); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6)
        {
          puVar7 = plVar6 + (ulong)(*(uint *)(plVar6 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar6 + 2) & 1) == 0) {
            puVar7 = (undefined8 *)*puVar7;
          }
          if (puVar7 != local_80) goto LAB_0177d86c;
        }
        pGVar2 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::Int64Constant
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                            local_90 + local_58);
        local_c0 = (Node *)0x0;
        pNVar5 = (Node *)Graph::NewNode(pGVar2,pOVar4,0,&local_c0,false);
        pNVar1 = param_1 + 0x20;
        pNVar9 = pNVar1;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar9 = (Node *)(*(long *)pNVar1 + 0x10);
        }
        this_00 = *(Node **)(pNVar9 + 8);
        if (this_00 != pNVar5) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar8 = (Use *)(*(long *)pNVar1 + -0x30);
          }
          else {
            pUVar8 = (Use *)(param_1 + -0x30);
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,pUVar8);
          }
          *(Node **)(pNVar9 + 8) = pNVar5;
          if (pNVar5 != (Node *)0x0) {
            Node::AppendUse(pNVar5,pUVar8);
          }
        }
        pNVar9 = pNVar1;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar9 = (Node *)(*(long *)pNVar1 + 0x10);
        }
        pNVar5 = *(Node **)pNVar9;
        local_78 = param_1;
        if (pNVar5 != local_b0) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar8 = (Use *)(*(long *)pNVar1 + -0x18);
          }
          else {
            pUVar8 = (Use *)(param_1 + -0x18);
          }
          if (pNVar5 != (Node *)0x0) {
            Node::RemoveUse(pNVar5,pUVar8);
          }
          *(Node **)pNVar9 = local_b0;
          if (local_b0 != (Node *)0x0) {
            Node::AppendUse(local_b0,pUVar8);
          }
        }
        goto LAB_0177d878;
      }
    }
    else if (local_50 != '\0') {
      pGVar2 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                          local_58 + local_70);
      local_b8 = (Node *)0x0;
      local_78 = (Node *)Graph::NewNode(pGVar2,pOVar4,0,&local_b8,false);
      goto LAB_0177d878;
    }
LAB_0177d86c:
    local_78 = (Node *)0x0;
  }
LAB_0177d878:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

