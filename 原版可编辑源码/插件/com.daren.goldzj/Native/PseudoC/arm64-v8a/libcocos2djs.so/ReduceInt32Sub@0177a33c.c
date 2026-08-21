
/* v8::internal::compiler::MachineOperatorReducer::ReduceInt32Sub(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceInt32Sub
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *this_00;
  Node *this_01;
  Operator *pOVar1;
  Node *pNVar2;
  Use *pUVar3;
  Node *pNVar4;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_68 [8];
  Node *local_60;
  int local_58;
  char local_54;
  Node *local_50;
  int local_48;
  char local_44;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_68,param_1);
  if ((local_44 == '\0') || (local_48 != 0)) {
    if ((local_54 == '\0') || (local_44 == '\0')) {
      if (local_60 == local_50) {
        local_60 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
      }
      else if (local_44 == '\0') {
        local_60 = (Node *)0x0;
      }
      else {
        this_00 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),-local_48);
        pNVar2 = param_1 + 0x20;
        pNVar4 = pNVar2;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar4 = (Node *)(*(long *)pNVar2 + 0x10);
        }
        this_01 = *(Node **)(pNVar4 + 8);
        if (this_01 != this_00) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar3 = (Use *)(*(long *)pNVar2 + -0x30);
          }
          else {
            pUVar3 = (Use *)(param_1 + -0x30);
          }
          if (this_01 != (Node *)0x0) {
            Node::RemoveUse(this_01,pUVar3);
          }
          *(Node **)(pNVar4 + 8) = this_00;
          if (this_00 != (Node *)0x0) {
            Node::AppendUse(this_00,pUVar3);
          }
        }
        pOVar1 = (Operator *)
                 MachineOperatorBuilder::Int32Add
                           (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        NodeProperties::ChangeOp(param_1,pOVar1);
        pNVar2 = (Node *)ReduceInt32Add(this,param_1);
        local_60 = param_1;
        if (pNVar2 != (Node *)0x0) {
          local_60 = pNVar2;
        }
      }
    }
    else {
      local_60 = (Node *)MachineGraph::Int32Constant
                                   (*(MachineGraph **)(this + 0x10),local_58 - local_48);
    }
  }
  return local_60;
}

