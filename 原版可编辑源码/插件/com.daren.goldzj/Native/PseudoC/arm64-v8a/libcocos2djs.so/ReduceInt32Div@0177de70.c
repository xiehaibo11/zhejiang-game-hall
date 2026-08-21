
/* v8::internal::compiler::MachineOperatorReducer::ReduceInt32Div(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceInt32Div
          (MachineOperatorReducer *this,Node *param_1)

{
  int iVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *this_00;
  uint uVar8;
  Graph *pGVar9;
  Use *pUVar10;
  undefined2 uVar11;
  uint uVar12;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_98 [8];
  Node *local_90;
  int local_88;
  char local_84;
  Node *local_80;
  uint local_78;
  char local_74;
  Node *local_70;
  Node *pNStack_68;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_98,param_1);
  if ((local_84 != '\0') && (local_88 == 0)) {
    return local_90;
  }
  if (local_74 != '\0') {
    if (local_78 == 1) {
      return local_90;
    }
    if (local_78 == 0) {
      return local_80;
    }
  }
  if ((local_84 != '\0') && (local_74 != '\0')) {
    iVar1 = base::bits::SignedDiv32(local_88,local_78);
    pNVar2 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar1);
    return pNVar2;
  }
  if (local_90 == local_80) {
    uVar5 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    local_70 = local_90;
    pNStack_68 = (Node *)uVar5;
    pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar3,2,&local_70,false);
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    local_70 = pNVar2;
    pNStack_68 = (Node *)uVar5;
    pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar3,2,&local_70,false);
    return pNVar2;
  }
  if (local_74 == '\0') {
    return (Node *)0x0;
  }
  if (local_78 == 0xffffffff) {
    pNVar6 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
    pNVar2 = param_1 + 0x20;
    pNVar4 = pNVar2;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    pNVar7 = *(Node **)pNVar4;
    if (pNVar7 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar2 + -0x18);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x18);
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,pUVar10);
      }
      *(Node **)pNVar4 = pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,pUVar10);
      }
    }
    pNVar4 = pNVar2;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    pNVar6 = *(Node **)(pNVar4 + 8);
    if (pNVar6 == local_90) goto LAB_0177e2e4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar10 = (Use *)(*(long *)pNVar2 + -0x30);
    }
    else {
      pUVar10 = (Use *)(param_1 + -0x30);
    }
    if (pNVar6 != (Node *)0x0) {
      Node::RemoveUse(pNVar6,pUVar10);
    }
    *(Node **)(pNVar4 + 8) = local_90;
    pNVar2 = local_90;
  }
  else {
    uVar8 = -local_78;
    if (-1 < (int)local_78) {
      uVar8 = local_78;
    }
    uVar12 = CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                      CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                               CONCAT11(POPCOUNT((char)(uVar8 >> 8)),POPCOUNT((char)uVar8))));
    uVar11 = NEON_uaddlv((ulong)uVar12,1);
    if (CONCAT22((short)(uVar12 >> 0x10),uVar11) == 1) {
      uVar8 = (local_78 & 0xaaaaaaaa) >> 1 | (local_78 & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
      pNVar2 = local_90;
      if (1 < uVar8) {
        pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar3 = (Operator *)
                 MachineOperatorBuilder::Word32Sar
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
        pNStack_68 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0x1f);
        local_70 = local_90;
        pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar3,2,&local_70,false);
      }
      if (0x20 - uVar8 != 0) {
        pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar3 = (Operator *)
                 MachineOperatorBuilder::Word32Shr
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
        pNStack_68 = (Node *)MachineGraph::Int32Constant
                                       (*(MachineGraph **)(this + 0x10),0x20 - uVar8);
        local_70 = pNVar2;
        pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar3,2,&local_70,false);
      }
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar3 = (Operator *)
               MachineOperatorBuilder::Int32Add
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
      pNStack_68 = local_90;
      local_70 = pNVar2;
      pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar3,2,&local_70,false);
      pNVar4 = (Node *)ReduceInt32Add(this,pNVar2);
      if (pNVar4 != (Node *)0x0) {
        pNVar2 = pNVar4;
      }
      if (uVar8 != 0) {
        pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar3 = (Operator *)
                 MachineOperatorBuilder::Word32Sar
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
        pNStack_68 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),uVar8);
        local_70 = pNVar2;
        pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar3,2,&local_70,false);
      }
    }
    else {
      pNVar2 = (Node *)Int32Div(this,local_90,uVar8);
    }
    if (-1 < (int)local_78) {
      return pNVar2;
    }
    pNVar7 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
    pNVar4 = param_1 + 0x20;
    pNVar6 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    this_00 = *(Node **)pNVar6;
    if (this_00 != pNVar7) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar4 + -0x18);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x18);
      }
      if (this_00 != (Node *)0x0) {
        Node::RemoveUse(this_00,pUVar10);
      }
      *(Node **)pNVar6 = pNVar7;
      if (pNVar7 != (Node *)0x0) {
        Node::AppendUse(pNVar7,pUVar10);
      }
    }
    pNVar6 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar7 = *(Node **)(pNVar6 + 8);
    if (pNVar7 == pNVar2) goto LAB_0177e2e4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar10 = (Use *)(*(long *)pNVar4 + -0x30);
    }
    else {
      pUVar10 = (Use *)(param_1 + -0x30);
    }
    if (pNVar7 != (Node *)0x0) {
      Node::RemoveUse(pNVar7,pUVar10);
    }
    *(Node **)(pNVar6 + 8) = pNVar2;
  }
  if (pNVar2 != (Node *)0x0) {
    Node::AppendUse(pNVar2,pUVar10);
  }
LAB_0177e2e4:
  Node::TrimInputCount(param_1,2);
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Int32Sub
                     (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
  NodeProperties::ChangeOp(param_1,pOVar3);
  return param_1;
}

