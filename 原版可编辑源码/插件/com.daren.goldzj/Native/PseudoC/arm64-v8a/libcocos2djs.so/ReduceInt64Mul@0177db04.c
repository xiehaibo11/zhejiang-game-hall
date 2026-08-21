
/* v8::internal::compiler::MachineOperatorReducer::ReduceInt64Mul(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceInt64Mul
          (MachineOperatorReducer *this,Node *param_1)

{
  Graph *pGVar1;
  ulong uVar2;
  long lVar3;
  Operator *pOVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  Use *pUVar8;
  Node *pNVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  Node *local_d0;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_c8 [8];
  Node *local_c0;
  long local_b8;
  char local_b0;
  Node *local_a8;
  ulong local_a0;
  char local_98;
  Node *local_90;
  Node *local_88;
  long local_80;
  char local_78;
  ulong local_68;
  char local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_c8,param_1);
  if ((local_98 != '\0') &&
     ((pNVar5 = local_c0, local_a0 == 1 || (pNVar5 = local_a8, local_a0 == 0)))) goto LAB_0177de04;
  if (local_b0 == '\0') {
    if (local_98 != '\0') {
      if (local_a0 == 0xffffffffffffffff) {
        pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::Int64Constant
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0);
        local_90 = (Node *)0x0;
        pNVar6 = (Node *)Graph::NewNode(pGVar1,pOVar4,0,&local_90,false);
        pNVar5 = param_1 + 0x20;
        pNVar9 = pNVar5;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar9 = (Node *)(*(long *)pNVar5 + 0x10);
        }
        pNVar7 = *(Node **)pNVar9;
        if (pNVar7 != pNVar6) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar8 = (Use *)(*(long *)pNVar5 + -0x18);
          }
          else {
            pUVar8 = (Use *)(param_1 + -0x18);
          }
          if (pNVar7 != (Node *)0x0) {
            Node::RemoveUse(pNVar7,pUVar8);
          }
          *(Node **)pNVar9 = pNVar6;
          if (pNVar6 != (Node *)0x0) {
            Node::AppendUse(pNVar6,pUVar8);
          }
        }
        pNVar9 = pNVar5;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar9 = (Node *)(*(long *)pNVar5 + 0x10);
        }
        pNVar6 = *(Node **)(pNVar9 + 8);
        if (pNVar6 != local_c0) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar8 = (Use *)(*(long *)pNVar5 + -0x30);
          }
          else {
            pUVar8 = (Use *)(param_1 + -0x30);
          }
          if (pNVar6 != (Node *)0x0) {
            Node::RemoveUse(pNVar6,pUVar8);
          }
          *(Node **)(pNVar9 + 8) = local_c0;
          if (local_c0 != (Node *)0x0) {
            Node::AppendUse(local_c0,pUVar8);
          }
        }
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::Int64Sub
                           (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        NodeProperties::ChangeOp(param_1,pOVar4);
      }
      else {
        pNVar5 = (Node *)0x0;
        if (((long)local_a0 < 1) ||
           (uVar11 = CONCAT17(POPCOUNT((char)(local_a0 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(local_a0 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(local_a0 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(local_a0 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(local_a0 >> 0x18))
                                                                  ,CONCAT12(POPCOUNT((char)(local_a0
                                                                                           >> 0x10))
                                                                            ,CONCAT11(POPCOUNT((char
                                                  )(local_a0 >> 8)),POPCOUNT((char)local_a0)))))))),
           uVar10 = NEON_uaddlv(uVar11,1), 1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10))
           ) goto LAB_0177de04;
        uVar2 = (local_a0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a0 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::Int64Constant
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                            LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20));
        local_90 = (Node *)0x0;
        pNVar6 = (Node *)Graph::NewNode(pGVar1,pOVar4,0,&local_90,false);
        pNVar5 = param_1 + 0x20;
        pNVar9 = pNVar5;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar9 = (Node *)(*(long *)pNVar5 + 0x10);
        }
        pNVar7 = *(Node **)(pNVar9 + 8);
        if (pNVar7 != pNVar6) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar8 = (Use *)(*(long *)pNVar5 + -0x30);
          }
          else {
            pUVar8 = (Use *)(param_1 + -0x30);
          }
          if (pNVar7 != (Node *)0x0) {
            Node::RemoveUse(pNVar7,pUVar8);
          }
          *(Node **)(pNVar9 + 8) = pNVar6;
          if (pNVar6 != (Node *)0x0) {
            Node::AppendUse(pNVar6,pUVar8);
          }
        }
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::Word64Shl
                           (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        NodeProperties::ChangeOp(param_1,pOVar4);
        BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
        ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                        *)&local_90,param_1);
        if (local_60 != '\0') {
          if (local_68 != 0) {
            if (local_78 == '\0') goto LAB_0177de00;
            pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar4 = (Operator *)
                     CommonOperatorBuilder::Int64Constant
                               ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                                local_80 << (local_68 & 0x3f));
            local_d0 = (Node *)0x0;
            local_88 = (Node *)Graph::NewNode(pGVar1,pOVar4,0,&local_d0,false);
          }
          pNVar5 = local_88;
          if (local_88 != (Node *)0x0) goto LAB_0177de04;
        }
      }
LAB_0177de00:
      pNVar5 = param_1;
      goto LAB_0177de04;
    }
  }
  else if (local_98 != '\0') {
    pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar4 = (Operator *)
             CommonOperatorBuilder::Int64Constant
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                        local_a0 * local_b8);
    local_90 = (Node *)0x0;
    pNVar5 = (Node *)Graph::NewNode(pGVar1,pOVar4,0,&local_90,false);
    goto LAB_0177de04;
  }
  pNVar5 = (Node *)0x0;
LAB_0177de04:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pNVar5);
  }
  return;
}

