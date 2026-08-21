
/* v8::internal::compiler::MachineOperatorReducer::ReduceUint32Div(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceUint32Div
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *this_00;
  Node *this_01;
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Graph *pGVar4;
  Use *pUVar5;
  Node *pNVar6;
  undefined2 uVar7;
  uint uVar8;
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
  pNVar2 = local_70;
  if (((local_64 == '\0') || (local_68 != 0)) &&
     ((local_54 == '\0' || ((local_58 != 1 && (pNVar2 = local_60, local_58 != 0)))))) {
    if ((local_64 == '\0') || (local_54 == '\0')) {
      if (local_70 == local_60) {
        uVar3 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
        pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar1 = (Operator *)
                 MachineOperatorBuilder::Word32Equal
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
        local_50 = local_70;
        uStack_48 = uVar3;
        pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,2,&local_50,false);
        pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar1 = (Operator *)
                 MachineOperatorBuilder::Word32Equal
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
        local_50 = pNVar2;
        uStack_48 = uVar3;
        pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,2,&local_50,false);
      }
      else if (local_54 == '\0') {
        pNVar2 = (Node *)0x0;
      }
      else {
        uVar8 = CONCAT13(POPCOUNT((char)(local_58 >> 0x18)),
                         CONCAT12(POPCOUNT((char)(local_58 >> 0x10)),
                                  CONCAT11(POPCOUNT((char)(local_58 >> 8)),POPCOUNT((char)local_58))
                                 ));
        uVar7 = NEON_uaddlv((ulong)uVar8,1);
        if (CONCAT22((short)(uVar8 >> 0x10),uVar7) == 1) {
          uVar8 = (local_58 & 0xaaaaaaaa) >> 1 | (local_58 & 0x55555555) << 1;
          uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          this_00 = (Node *)MachineGraph::Int32Constant
                                      (*(MachineGraph **)(this + 0x10),
                                       (int)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10));
          pNVar2 = param_1 + 0x20;
          pNVar6 = pNVar2;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar6 = (Node *)(*(long *)pNVar2 + 0x10);
          }
          this_01 = *(Node **)(pNVar6 + 8);
          if (this_01 != this_00) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar5 = (Use *)(*(long *)pNVar2 + -0x30);
            }
            else {
              pUVar5 = (Use *)(param_1 + -0x30);
            }
            if (this_01 != (Node *)0x0) {
              Node::RemoveUse(this_01,pUVar5);
            }
            *(Node **)(pNVar6 + 8) = this_00;
            if (this_00 != (Node *)0x0) {
              Node::AppendUse(this_00,pUVar5);
            }
          }
          Node::TrimInputCount(param_1,2);
          pOVar1 = (Operator *)
                   MachineOperatorBuilder::Word32Shr
                             (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          NodeProperties::ChangeOp(param_1,pOVar1);
          pNVar2 = param_1;
        }
        else {
          pNVar2 = (Node *)Uint32Div(this,local_70,local_58);
        }
      }
    }
    else {
      if (local_58 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (local_58 != 0) {
          uVar8 = local_68 / local_58;
        }
      }
      pNVar2 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),uVar8);
    }
  }
  return pNVar2;
}

