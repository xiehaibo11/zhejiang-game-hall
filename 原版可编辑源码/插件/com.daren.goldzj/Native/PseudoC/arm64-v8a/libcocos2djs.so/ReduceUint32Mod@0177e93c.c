
/* v8::internal::compiler::MachineOperatorReducer::ReduceUint32Mod(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceUint32Mod
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Operator *pOVar3;
  MachineGraph *this_00;
  Node *pNVar4;
  undefined8 uVar5;
  int iVar6;
  Graph *this_01;
  Use *pUVar7;
  Node *pNVar8;
  undefined2 uVar9;
  uint uVar10;
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_78 [8];
  Node *local_70;
  uint local_68;
  char local_64;
  Node *local_60;
  uint local_58;
  char local_54;
  Node *local_50;
  undefined8 uStack_48;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_78,param_1);
  if ((local_64 != '\0') && (local_68 == 0)) {
    return local_70;
  }
  if (local_54 == '\0') {
LAB_0177e994:
    if (local_70 != local_60) {
      if (local_64 == '\0') {
        if (local_54 == '\0') {
          return (Node *)0x0;
        }
        uVar10 = CONCAT13(POPCOUNT((char)(local_58 >> 0x18)),
                          CONCAT12(POPCOUNT((char)(local_58 >> 0x10)),
                                   CONCAT11(POPCOUNT((char)(local_58 >> 8)),POPCOUNT((char)local_58)
                                           )));
        uVar9 = NEON_uaddlv((ulong)uVar10,1);
        if (CONCAT22((short)(uVar10 >> 0x10),uVar9) == 1) {
          pNVar1 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),local_58 - 1)
          ;
          pNVar4 = param_1 + 0x20;
          pNVar8 = pNVar4;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
          }
          pNVar2 = *(Node **)(pNVar8 + 8);
          if (pNVar2 != pNVar1) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar7 = (Use *)(*(long *)pNVar4 + -0x30);
            }
            else {
              pUVar7 = (Use *)(param_1 + -0x30);
            }
            if (pNVar2 != (Node *)0x0) {
              Node::RemoveUse(pNVar2,pUVar7);
            }
            *(Node **)(pNVar8 + 8) = pNVar1;
            if (pNVar1 != (Node *)0x0) {
              Node::AppendUse(pNVar1,pUVar7);
            }
          }
          Node::TrimInputCount(param_1,2);
          pOVar3 = (Operator *)
                   MachineOperatorBuilder::Word32And
                             (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        }
        else {
          pNVar4 = (Node *)Uint32Div(this,local_70,local_58);
          uVar5 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),local_58);
          this_01 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar3 = (Operator *)
                   MachineOperatorBuilder::Int32Mul
                             ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
          local_50 = pNVar4;
          uStack_48 = uVar5;
          pNVar1 = (Node *)Graph::NewNode(this_01,pOVar3,2,&local_50,false);
          pNVar4 = param_1 + 0x20;
          pNVar8 = pNVar4;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
          }
          pNVar2 = *(Node **)(pNVar8 + 8);
          if (pNVar2 != pNVar1) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar7 = (Use *)(*(long *)pNVar4 + -0x30);
            }
            else {
              pUVar7 = (Use *)(param_1 + -0x30);
            }
            if (pNVar2 != (Node *)0x0) {
              Node::RemoveUse(pNVar2,pUVar7);
            }
            *(Node **)(pNVar8 + 8) = pNVar1;
            if (pNVar1 != (Node *)0x0) {
              Node::AppendUse(pNVar1,pUVar7);
            }
          }
          Node::TrimInputCount(param_1,2);
          pOVar3 = (Operator *)
                   MachineOperatorBuilder::Int32Sub
                             (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        }
        NodeProperties::ChangeOp(param_1,pOVar3);
        return param_1;
      }
      if (local_54 == '\0') {
        return (Node *)0x0;
      }
      if (local_58 == 0) {
        iVar6 = 0;
      }
      else {
        uVar10 = 0;
        if (local_58 != 0) {
          uVar10 = local_68 / local_58;
        }
        iVar6 = local_68 - uVar10 * local_58;
      }
      this_00 = *(MachineGraph **)(this + 0x10);
      goto LAB_0177ea98;
    }
  }
  else if (local_58 != 1) {
    if (local_58 == 0) {
      return local_60;
    }
    goto LAB_0177e994;
  }
  this_00 = *(MachineGraph **)(this + 0x10);
  iVar6 = 0;
LAB_0177ea98:
  pNVar4 = (Node *)MachineGraph::Int32Constant(this_00,iVar6);
  return pNVar4;
}

