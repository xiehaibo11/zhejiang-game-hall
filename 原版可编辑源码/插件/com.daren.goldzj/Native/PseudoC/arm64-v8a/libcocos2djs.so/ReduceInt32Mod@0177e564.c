
/* v8::internal::compiler::MachineOperatorReducer::ReduceInt32Mod(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceInt32Mod
          (MachineOperatorReducer *this,Node *param_1)

{
  int iVar1;
  Node *pNVar2;
  CommonOperatorBuilder *pCVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  Node *pNVar6;
  undefined8 uVar7;
  Node *pNVar8;
  Node *this_00;
  MachineGraph *this_01;
  undefined8 *puVar9;
  Use *pUVar10;
  Graph *pGVar11;
  undefined2 uVar12;
  uint uVar13;
  Graph *local_c0;
  CommonOperatorBuilder *pCStack_b8;
  undefined8 local_98;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_90 [8];
  Node *local_88;
  int local_80;
  char local_7c;
  Node *local_78;
  int local_70;
  char local_6c;
  CommonOperatorBuilder *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_90,param_1);
  if ((local_7c != '\0') && (local_80 == 0)) {
    return local_88;
  }
  if (local_6c == '\0') {
LAB_0177e5c8:
    if (local_88 != local_78) {
      if (local_7c == '\0') {
        if (local_6c == '\0') {
          return (Node *)0x0;
        }
        iVar1 = -local_70;
        if (-1 < local_70) {
          iVar1 = local_70;
        }
        uVar13 = CONCAT13(POPCOUNT((char)((uint)iVar1 >> 0x18)),
                          CONCAT12(POPCOUNT((char)((uint)iVar1 >> 0x10)),
                                   CONCAT11(POPCOUNT((char)((uint)iVar1 >> 8)),POPCOUNT((char)iVar1)
                                           )));
        uVar12 = NEON_uaddlv((ulong)uVar13,1);
        if (CONCAT22((short)(uVar13 >> 0x10),uVar12) == 1) {
          pCVar3 = (CommonOperatorBuilder *)
                   MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
          puVar9 = *(undefined8 **)(this + 0x10);
          pGVar11 = (Graph *)*puVar9;
          uVar7 = puVar9[1];
          pOVar4 = (Operator *)
                   MachineOperatorBuilder::Int32LessThan((MachineOperatorBuilder *)puVar9[2]);
          local_c0 = (Graph *)local_88;
          pCStack_b8 = pCVar3;
          uVar5 = Graph::NewNode(pGVar11,pOVar4,2,(Node **)&local_c0,false);
          Diamond::Diamond((Diamond *)&local_c0,pGVar11,uVar7,uVar5,2);
          pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar4 = (Operator *)
                   MachineOperatorBuilder::Int32Sub
                             ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
          pNStack_60 = local_88;
          local_68 = pCVar3;
          pNVar2 = (Node *)Graph::NewNode(pGVar11,pOVar4,2,(Node **)&local_68,false);
          pNVar6 = (Node *)ReduceInt32Sub(this,pNVar2);
          if (pNVar6 != (Node *)0x0) {
            pNVar2 = pNVar6;
          }
          uVar7 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar1 + -1);
          pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar4 = (Operator *)
                   MachineOperatorBuilder::Word32And
                             ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
          local_68 = (CommonOperatorBuilder *)pNVar2;
          pNStack_60 = (Node *)uVar7;
          pNVar2 = (Node *)Graph::NewNode(pGVar11,pOVar4,2,(Node **)&local_68,false);
          pNVar6 = (Node *)ReduceWord32And(this,pNVar2);
          if (pNVar6 != (Node *)0x0) {
            pNVar2 = pNVar6;
          }
          pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar4 = (Operator *)
                   MachineOperatorBuilder::Int32Sub
                             ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
          local_68 = pCVar3;
          pNStack_60 = pNVar2;
          pNVar2 = (Node *)Graph::NewNode(pGVar11,pOVar4,2,(Node **)&local_68,false);
          pNVar6 = (Node *)ReduceInt32Sub(this,pNVar2);
          if (pNVar6 != (Node *)0x0) {
            pNVar2 = pNVar6;
          }
          uVar7 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar1 + -1);
          pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar4 = (Operator *)
                   MachineOperatorBuilder::Word32And
                             ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
          local_68 = (CommonOperatorBuilder *)local_88;
          pNStack_60 = (Node *)uVar7;
          pNVar6 = (Node *)Graph::NewNode(pGVar11,pOVar4,2,(Node **)&local_68,false);
          pNVar8 = (Node *)ReduceWord32And(this,pNVar6);
          pGVar11 = local_c0;
          if (pNVar8 != (Node *)0x0) {
            pNVar6 = pNVar8;
          }
          pOVar4 = (Operator *)CommonOperatorBuilder::Phi(pCStack_b8,4,2);
          local_58 = local_98;
          local_68 = (CommonOperatorBuilder *)pNVar2;
          pNStack_60 = pNVar6;
          pNVar2 = (Node *)Graph::NewNode(pGVar11,pOVar4,3,(Node **)&local_68,false);
          return pNVar2;
        }
        pNVar2 = (Node *)Int32Div(this,local_88,iVar1);
        uVar7 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar1);
        pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::Int32Mul
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
        local_c0 = (Graph *)pNVar2;
        pCStack_b8 = (CommonOperatorBuilder *)uVar7;
        pNVar8 = (Node *)Graph::NewNode(pGVar11,pOVar4,2,(Node **)&local_c0,false);
        pNVar2 = param_1 + 0x20;
        pNVar6 = pNVar2;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar6 = (Node *)(*(long *)pNVar2 + 0x10);
        }
        this_00 = *(Node **)(pNVar6 + 8);
        if (this_00 != pNVar8) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar10 = (Use *)(*(long *)pNVar2 + -0x30);
          }
          else {
            pUVar10 = (Use *)(param_1 + -0x30);
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,pUVar10);
          }
          *(Node **)(pNVar6 + 8) = pNVar8;
          if (pNVar8 != (Node *)0x0) {
            Node::AppendUse(pNVar8,pUVar10);
          }
        }
        Node::TrimInputCount(param_1,2);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::Int32Sub
                           (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        NodeProperties::ChangeOp(param_1,pOVar4);
        return param_1;
      }
      if (local_6c == '\0') {
        return (Node *)0x0;
      }
      iVar1 = base::bits::SignedMod32(local_80,local_70);
      this_01 = *(MachineGraph **)(this + 0x10);
      goto LAB_0177e604;
    }
  }
  else if ((local_70 != -1) && (local_70 != 1)) {
    if (local_70 == 0) {
      return local_78;
    }
    goto LAB_0177e5c8;
  }
  this_01 = *(MachineGraph **)(this + 0x10);
  iVar1 = 0;
LAB_0177e604:
  pNVar2 = (Node *)MachineGraph::Int32Constant(this_01,iVar1);
  return pNVar2;
}

