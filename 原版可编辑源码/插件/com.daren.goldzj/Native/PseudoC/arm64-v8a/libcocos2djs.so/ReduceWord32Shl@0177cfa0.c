
/* v8::internal::compiler::MachineOperatorReducer::ReduceWord32Shl(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceWord32Shl
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *this_00;
  Operator *pOVar3;
  Use *pUVar4;
  Node *pNVar5;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_90 [8];
  Node *local_88;
  uint local_70;
  char local_6c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_68 [8];
  Node *local_60;
  int local_58;
  char local_54;
  uint local_48;
  char local_44;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_68,param_1);
  if ((local_44 == '\0') || (local_48 != 0)) {
    if (local_54 == '\0') {
      if ((((local_44 != '\0') && (local_48 - 1 < 0x1f)) &&
          ((*(ushort *)(*(long *)local_60 + 0x10) & 0xfffe) == 300)) &&
         ((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
           ::BinopMatcher(aBStack_90,local_60), local_6c != '\0' && (local_70 == local_48)))) {
        pNVar1 = param_1 + 0x20;
        pNVar5 = pNVar1;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
        }
        pNVar2 = *(Node **)pNVar5;
        if (pNVar2 != local_88) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar4 = (Use *)(*(long *)pNVar1 + -0x18);
          }
          else {
            pUVar4 = (Use *)(param_1 + -0x18);
          }
          if (pNVar2 != (Node *)0x0) {
            Node::RemoveUse(pNVar2,pUVar4);
          }
          *(Node **)pNVar5 = local_88;
          if (local_88 != (Node *)0x0) {
            Node::AppendUse(local_88,pUVar4);
          }
        }
        pNVar2 = (Node *)MachineGraph::Int32Constant
                                   (*(MachineGraph **)(this + 0x10),-1 << (ulong)(local_48 & 0x1f));
        pNVar5 = pNVar1;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
        }
        this_00 = *(Node **)(pNVar5 + 8);
        if (this_00 != pNVar2) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar4 = (Use *)(*(long *)pNVar1 + -0x30);
          }
          else {
            pUVar4 = (Use *)(param_1 + -0x30);
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,pUVar4);
          }
          *(Node **)(pNVar5 + 8) = pNVar2;
          if (pNVar2 != (Node *)0x0) {
            Node::AppendUse(pNVar2,pUVar4);
          }
        }
        pOVar3 = (Operator *)
                 MachineOperatorBuilder::Word32And
                           (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        NodeProperties::ChangeOp(param_1,pOVar3);
        pNVar1 = (Node *)ReduceWord32And(this,param_1);
        if (pNVar1 == (Node *)0x0) {
          return param_1;
        }
        return pNVar1;
      }
    }
    else if (local_44 != '\0') {
      pNVar1 = (Node *)MachineGraph::Int32Constant
                                 (*(MachineGraph **)(this + 0x10),
                                  local_58 << (ulong)(local_48 & 0x1f));
      return pNVar1;
    }
    local_60 = (Node *)ReduceWord32Shifts(this,param_1);
  }
  return local_60;
}

