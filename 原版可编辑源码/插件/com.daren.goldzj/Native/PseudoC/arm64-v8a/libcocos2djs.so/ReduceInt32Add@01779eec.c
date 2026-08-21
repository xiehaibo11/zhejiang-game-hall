
/* v8::internal::compiler::MachineOperatorReducer::ReduceInt32Add(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceInt32Add
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *this_00;
  Operator *pOVar3;
  long *plVar4;
  undefined8 *puVar5;
  Use *pUVar6;
  Node *pNVar7;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_90 [8];
  Node *local_88;
  int local_80;
  char local_7c;
  Node *local_78;
  int local_70;
  char local_6c;
  undefined8 *local_68;
  Node *local_60;
  int local_58;
  char local_54;
  Node *local_50;
  int local_48;
  char local_44;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                  *)&local_68,param_1);
  if ((local_44 != '\0') && (local_48 == 0)) {
    return local_60;
  }
  if ((local_54 != '\0') && (local_44 != '\0')) {
    pNVar1 = (Node *)MachineGraph::Int32Constant
                               (*(MachineGraph **)(this + 0x10),local_48 + local_58);
    return pNVar1;
  }
  if (((*(short *)(*(long *)local_60 + 0x10) == 0x131) &&
      (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
       ::BinopMatcher(aBStack_90,local_60), local_7c != '\0')) && (local_80 == 0)) {
    pNVar1 = param_1 + 0x20;
    pNVar7 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar2 = *(Node **)pNVar7;
    if (pNVar2 != local_50) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar6 = (Use *)(*(long *)pNVar1 + -0x18);
      }
      else {
        pUVar6 = (Use *)(param_1 + -0x18);
      }
      if (pNVar2 != (Node *)0x0) {
        Node::RemoveUse(pNVar2,pUVar6);
      }
      *(Node **)pNVar7 = local_50;
      if (local_50 != (Node *)0x0) {
        Node::AppendUse(local_50,pUVar6);
      }
    }
    pNVar7 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar2 = *(Node **)(pNVar7 + 8);
    if (pNVar2 == local_78) goto LAB_0177a1bc;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar6 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar6 = (Use *)(param_1 + -0x30);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar6);
    }
    *(Node **)(pNVar7 + 8) = local_78;
  }
  else {
    if (((*(short *)(*(long *)local_50 + 0x10) != 0x131) ||
        (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
         ::BinopMatcher(aBStack_90,local_50), local_7c == '\0')) || (local_80 != 0)) {
      if (((local_44 != '\0') && (*(short *)(*(long *)local_60 + 0x10) == 0x12f)) &&
         (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
          ::BinopMatcher(aBStack_90,local_60), local_6c != '\0')) {
        plVar4 = *(long **)(local_60 + 0x18);
        while( true ) {
          if (plVar4 == (long *)0x0) {
            pNVar2 = (Node *)MachineGraph::Int32Constant
                                       (*(MachineGraph **)(this + 0x10),local_70 + local_48);
            pNVar1 = param_1 + 0x20;
            pNVar7 = pNVar1;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
            }
            this_00 = *(Node **)(pNVar7 + 8);
            if (this_00 != pNVar2) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar6 = (Use *)(*(long *)pNVar1 + -0x30);
              }
              else {
                pUVar6 = (Use *)(param_1 + -0x30);
              }
              if (this_00 != (Node *)0x0) {
                Node::RemoveUse(this_00,pUVar6);
              }
              *(Node **)(pNVar7 + 8) = pNVar2;
              if (pNVar2 != (Node *)0x0) {
                Node::AppendUse(pNVar2,pUVar6);
              }
            }
            pNVar7 = pNVar1;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
            }
            pNVar2 = *(Node **)pNVar7;
            if (pNVar2 == local_88) {
              return param_1;
            }
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar6 = (Use *)(*(long *)pNVar1 + -0x18);
            }
            else {
              pUVar6 = (Use *)(param_1 + -0x18);
            }
            if (pNVar2 != (Node *)0x0) {
              Node::RemoveUse(pNVar2,pUVar6);
            }
            *(Node **)pNVar7 = local_88;
            if (local_88 == (Node *)0x0) {
              return param_1;
            }
            Node::AppendUse(local_88,pUVar6);
            return param_1;
          }
          puVar5 = plVar4 + (ulong)(*(uint *)(plVar4 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar4 + 2) & 1) == 0) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if (puVar5 != local_68) break;
          plVar4 = (long *)*plVar4;
        }
      }
      return (Node *)0x0;
    }
    pNVar1 = param_1 + 0x20;
    pNVar7 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar2 = *(Node **)(pNVar7 + 8);
    if (pNVar2 == local_78) goto LAB_0177a1bc;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar6 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar6 = (Use *)(param_1 + -0x30);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar6);
    }
    *(Node **)(pNVar7 + 8) = local_78;
  }
  if (local_78 != (Node *)0x0) {
    Node::AppendUse(local_78,pUVar6);
  }
LAB_0177a1bc:
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Int32Sub
                     (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
  NodeProperties::ChangeOp(param_1,pOVar3);
  pNVar1 = (Node *)ReduceInt32Sub(this,param_1);
  if (pNVar1 != (Node *)0x0) {
    param_1 = pNVar1;
  }
  return param_1;
}

