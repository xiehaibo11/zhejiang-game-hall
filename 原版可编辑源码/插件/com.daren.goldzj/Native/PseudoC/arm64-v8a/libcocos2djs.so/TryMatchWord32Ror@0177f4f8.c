
/* v8::internal::compiler::MachineOperatorReducer::TryMatchWord32Ror(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::TryMatchWord32Ror
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *this_00;
  Node *pNVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Node *pNVar4;
  Use *pUVar5;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_e0 [16];
  int local_d0;
  char local_cc;
  Node *local_c8;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_b8 [8];
  Node *local_b0;
  Node *local_a0;
  int local_98;
  char local_94;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_90 [8];
  Node *local_88;
  Node *local_78;
  int local_70;
  char local_6c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_68 [8];
  Node *local_60;
  Node *local_50;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_68,param_1);
  if (*(short *)(*(long *)local_60 + 0x10) == 300) {
    pNVar3 = local_50;
    pNVar4 = local_60;
    if (*(short *)(*(long *)local_50 + 0x10) != 299) {
      return (Node *)0x0;
    }
  }
  else {
    if (*(short *)(*(long *)local_60 + 0x10) != 299) {
      return (Node *)0x0;
    }
    pNVar3 = local_60;
    pNVar4 = local_50;
    if (*(short *)(*(long *)local_50 + 0x10) != 300) {
      return (Node *)0x0;
    }
  }
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_90,pNVar3);
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_b8,pNVar4);
  if (local_88 == local_b0) {
    if ((local_6c == '\0') || (local_94 == '\0')) {
      pNVar3 = local_78;
      pNVar4 = local_a0;
      if (((*(short *)(*(long *)local_78 + 0x10) == 0x131) ||
          (pNVar3 = local_a0, pNVar4 = local_78, *(short *)(*(long *)local_a0 + 0x10) == 0x131)) &&
         (((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
            ::BinopMatcher(aBStack_e0,pNVar3), local_cc != '\0' && (local_d0 == 0x20)) &&
          (pNVar3 = local_88, local_c8 == pNVar4)))) goto LAB_0177f640;
    }
    else {
      pNVar3 = local_88;
      if (local_98 + local_70 == 0x20) {
LAB_0177f640:
        pNVar4 = param_1 + 0x20;
        pNVar1 = pNVar4;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar1 = (Node *)(*(long *)pNVar4 + 0x10);
        }
        this_00 = *(Node **)pNVar1;
        if (this_00 != pNVar3) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar5 = (Use *)(*(long *)pNVar4 + -0x18);
          }
          else {
            pUVar5 = (Use *)(param_1 + -0x18);
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,pUVar5);
          }
          *(Node **)pNVar1 = pNVar3;
          if (pNVar3 != (Node *)0x0) {
            Node::AppendUse(pNVar3,pUVar5);
          }
        }
        pNVar3 = pNVar4;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar3 = (Node *)(*(long *)pNVar4 + 0x10);
        }
        pNVar1 = *(Node **)(pNVar3 + 8);
        if (pNVar1 != local_a0) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar5 = (Use *)(*(long *)pNVar4 + -0x30);
          }
          else {
            pUVar5 = (Use *)(param_1 + -0x30);
          }
          if (pNVar1 != (Node *)0x0) {
            Node::RemoveUse(pNVar1,pUVar5);
          }
          *(Node **)(pNVar3 + 8) = local_a0;
          if (local_a0 != (Node *)0x0) {
            Node::AppendUse(local_a0,pUVar5);
          }
        }
        pOVar2 = (Operator *)
                 MachineOperatorBuilder::Word32Ror
                           (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        NodeProperties::ChangeOp(param_1,pOVar2);
        return param_1;
      }
    }
  }
  return (Node *)0x0;
}

