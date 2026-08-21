
/* v8::internal::compiler::MachineOperatorReducer::ReduceWord32Sar(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceWord32Sar
          (MachineOperatorReducer *this,Node *param_1)

{
  uint uVar1;
  ulong uVar2;
  Node *pNVar3;
  Node *this_00;
  Operator *pOVar4;
  Node *pNVar5;
  Use *pUVar6;
  Node *pNVar7;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_90 [8];
  Node *local_88 [3];
  int local_70;
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
    if ((local_54 == '\0') || (local_44 == '\0')) {
      if (*(short *)(*(long *)local_60 + 0x10) == 299) {
        BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
        ::BinopMatcher(aBStack_90,local_60);
        uVar2 = NodeMatcher::IsComparison((NodeMatcher *)local_88);
        if ((uVar2 & 1) == 0) {
          if ((*(short *)(*(Operator **)local_88[0] + 0x10) == 0x1aa) &&
             (uVar1 = LoadRepresentationOf(*(Operator **)local_88[0]), local_44 != '\0')) {
            if (local_48 == 0x10) {
              if ((((local_6c != '\0') && ((uVar1 >> 8 & 0xff) == 2)) && ((uVar1 & 0xff) == 3)) &&
                 (local_70 == 0x10)) {
                return local_88[0];
              }
            }
            else if (((local_48 == 0x18) && (local_6c != '\0')) &&
                    (((uVar1 >> 8 & 0xff) == 2 && (((uVar1 & 0xff) == 2 && (local_70 == 0x18)))))) {
              return local_88[0];
            }
          }
        }
        else if ((((local_44 != '\0') && (local_48 == 0x1f)) && (local_6c != '\0')) &&
                (local_70 == 0x1f)) {
          pNVar3 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
          pNVar5 = param_1 + 0x20;
          pNVar7 = pNVar5;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar7 = (Node *)(*(long *)pNVar5 + 0x10);
          }
          this_00 = *(Node **)pNVar7;
          if (this_00 != pNVar3) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar6 = (Use *)(*(long *)pNVar5 + -0x18);
            }
            else {
              pUVar6 = (Use *)(param_1 + -0x18);
            }
            if (this_00 != (Node *)0x0) {
              Node::RemoveUse(this_00,pUVar6);
            }
            *(Node **)pNVar7 = pNVar3;
            if (pNVar3 != (Node *)0x0) {
              Node::AppendUse(pNVar3,pUVar6);
            }
          }
          pNVar7 = pNVar5;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar7 = (Node *)(*(long *)pNVar5 + 0x10);
          }
          pNVar3 = *(Node **)(pNVar7 + 8);
          if (pNVar3 != local_88[0]) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar6 = (Use *)(*(long *)pNVar5 + -0x30);
            }
            else {
              pUVar6 = (Use *)(param_1 + -0x30);
            }
            if (pNVar3 != (Node *)0x0) {
              Node::RemoveUse(pNVar3,pUVar6);
            }
            *(Node **)(pNVar7 + 8) = local_88[0];
            if (local_88[0] != (Node *)0x0) {
              Node::AppendUse(local_88[0],pUVar6);
            }
          }
          pOVar4 = (Operator *)
                   MachineOperatorBuilder::Int32Sub
                             (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          NodeProperties::ChangeOp(param_1,pOVar4);
          pNVar5 = (Node *)ReduceInt32Sub(this,param_1);
          if (pNVar5 == (Node *)0x0) {
            return param_1;
          }
          return pNVar5;
        }
      }
      local_60 = (Node *)ReduceWord32Shifts(this,param_1);
    }
    else {
      local_60 = (Node *)MachineGraph::Int32Constant
                                   (*(MachineGraph **)(this + 0x10),local_58 >> (local_48 & 0x1f));
    }
  }
  return local_60;
}

