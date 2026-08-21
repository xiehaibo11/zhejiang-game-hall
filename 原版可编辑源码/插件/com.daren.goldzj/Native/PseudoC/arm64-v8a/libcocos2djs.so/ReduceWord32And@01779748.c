
/* v8::internal::compiler::MachineOperatorReducer::ReduceWord32And(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceWord32And
          (MachineOperatorReducer *this,Node *param_1)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  Operator *pOVar7;
  Node *pNVar8;
  undefined8 *puVar9;
  Graph *pGVar10;
  uint uVar11;
  Use *pUVar12;
  Node *local_c8;
  Node *pNStack_c0;
  int local_a8;
  char local_a4;
  Node *local_a0;
  Node *local_98;
  Node *local_88;
  uint local_80;
  char local_7c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_78 [8];
  Node *local_70;
  uint local_68;
  char local_64;
  Node *local_60;
  uint local_58;
  char local_54;
  Node *local_50;
  Node *pNStack_48;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_78,param_1);
  if (local_54 != '\0') {
    if (local_58 == 0xffffffff) {
      return local_70;
    }
    if (local_58 == 0) {
      return local_60;
    }
  }
  uVar3 = NodeMatcher::IsComparison((NodeMatcher *)&local_70);
  if (((local_54 != '\0') && ((uVar3 & 1) != 0)) && (local_58 == 1)) {
    return local_70;
  }
  if ((local_64 != '\0') && (local_54 != '\0')) {
    pNVar4 = (Node *)MachineGraph::Int32Constant
                               (*(MachineGraph **)(this + 0x10),local_58 & local_68);
    return pNVar4;
  }
  if (local_70 == local_60) {
    return local_70;
  }
  if (*(short *)(*(long *)local_70 + 0x10) == 0x128) {
    if (local_54 == '\0') goto LAB_01779920;
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_a0,local_70);
    if (local_7c == '\0') goto LAB_01779914;
    pNVar4 = param_1 + 0x20;
    pNVar8 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar5 = *(Node **)pNVar8;
    if (pNVar5 != local_98) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar12 = (Use *)(*(long *)pNVar4 + -0x18);
      }
      else {
        pUVar12 = (Use *)(param_1 + -0x18);
      }
      if (pNVar5 != (Node *)0x0) {
        Node::RemoveUse(pNVar5,pUVar12);
      }
      *(Node **)pNVar8 = local_98;
      if (local_98 != (Node *)0x0) {
        Node::AppendUse(local_98,pUVar12);
      }
    }
    pNVar5 = (Node *)MachineGraph::Int32Constant
                               (*(MachineGraph **)(this + 0x10),local_80 & local_58);
    pNVar8 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar6 = *(Node **)(pNVar8 + 8);
    if (pNVar6 != pNVar5) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar12 = (Use *)(*(long *)pNVar4 + -0x30);
      }
      else {
        pUVar12 = (Use *)(param_1 + -0x30);
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,pUVar12);
      }
      *(Node **)(pNVar8 + 8) = pNVar5;
      if (pNVar5 != (Node *)0x0) {
        Node::AppendUse(pNVar5,pUVar12);
      }
    }
    pNVar4 = (Node *)ReduceWord32And(this,param_1);
LAB_01779904:
    if (pNVar4 != (Node *)0x0) {
      param_1 = pNVar4;
    }
  }
  else {
LAB_01779914:
    if (((local_54 != '\0') && ((int)local_58 < 0)) &&
       ((uVar11 = 0x80000000, local_58 == 0x80000000 ||
        (uVar11 = -local_58, (uVar11 & (local_58 ^ 0xffffffff)) == 0)))) {
      sVar1 = *(short *)(*(long *)local_70 + 0x10);
      if (sVar1 == 0x133) {
        BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
        ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                        *)&local_a0,local_70);
        if (local_7c != '\0') {
          iVar2 = 0;
          if (uVar11 != 0) {
            iVar2 = (int)local_80 / (int)uVar11;
          }
          if (local_80 == iVar2 * uVar11) {
            return local_a0;
          }
        }
      }
      else {
        if (sVar1 == 0x12f) {
          BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
          ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                          *)&local_a0,local_70);
          if ((local_7c == '\0') || ((local_80 & (local_58 ^ 0xffffffff)) != 0)) {
            if ((*(short *)(*(long *)local_98 + 0x10) == 0x133) &&
               (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                                *)&local_c8,local_98), local_a4 != '\0')) {
              iVar2 = 0;
              if (uVar11 != 0) {
                iVar2 = local_a8 / (int)uVar11;
              }
              if (local_a8 != iVar2 * uVar11) goto LAB_01779afc;
LAB_01779b68:
              puVar9 = *(undefined8 **)(this + 0x10);
            }
            else {
LAB_01779afc:
              if ((*(short *)(*(long *)local_88 + 0x10) == 0x133) &&
                 (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                  ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                                  *)&local_c8,local_88), local_a4 != '\0')) {
                iVar2 = 0;
                if (uVar11 != 0) {
                  iVar2 = local_a8 / (int)uVar11;
                }
                if (local_a8 != iVar2 * uVar11) goto LAB_01779b30;
              }
              else {
LAB_01779b30:
                if (((*(short *)(*(long *)local_98 + 0x10) == 299) &&
                    (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                     ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                                     *)&local_c8,local_98), local_a4 != '\0')) &&
                   (uVar11 = (local_58 & 0xaaaaaaaa) >> 1 | (local_58 & 0x55555555) << 1,
                   uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2,
                   uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4,
                   uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8,
                   local_a8 == (int)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10))) goto LAB_01779b68;
                if (((*(short *)(*(long *)local_88 + 0x10) != 299) ||
                    (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                     ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                                     *)&local_c8,local_88), local_a4 == '\0')) ||
                   (uVar11 = (local_58 & 0xaaaaaaaa) >> 1 | (local_58 & 0x55555555) << 1,
                   uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2,
                   uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4,
                   uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8,
                   local_a8 != (int)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10))) goto LAB_01779920;
              }
              puVar9 = *(undefined8 **)(this + 0x10);
            }
            pGVar10 = (Graph *)*puVar9;
            pOVar7 = (Operator *)
                     MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)puVar9[2]);
            pNStack_48 = local_60;
            pNVar8 = (Node *)Graph::NewNode(pGVar10,pOVar7,2,&local_50,false);
            pNVar5 = (Node *)ReduceWord32And(this,pNVar8);
            pNVar4 = param_1 + 0x20;
            if (pNVar5 != (Node *)0x0) {
              pNVar8 = pNVar5;
            }
            pNVar5 = pNVar4;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar5 = (Node *)(*(long *)pNVar4 + 0x10);
            }
            pNVar6 = *(Node **)pNVar5;
            if (pNVar6 != pNVar8) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar12 = (Use *)(*(long *)pNVar4 + -0x18);
              }
              else {
                pUVar12 = (Use *)(param_1 + -0x18);
              }
              if (pNVar6 != (Node *)0x0) {
                Node::RemoveUse(pNVar6,pUVar12);
              }
              *(Node **)pNVar5 = pNVar8;
              if (pNVar8 != (Node *)0x0) {
                Node::AppendUse(pNVar8,pUVar12);
              }
            }
            uVar11 = *(uint *)(param_1 + 0x14);
            pNVar4 = local_c8;
          }
          else {
            pGVar10 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar7 = (Operator *)
                     MachineOperatorBuilder::Word32And
                               ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
            local_c8 = local_98;
            pNStack_c0 = local_60;
            pNVar8 = (Node *)Graph::NewNode(pGVar10,pOVar7,2,&local_c8,false);
            pNVar5 = (Node *)ReduceWord32And(this,pNVar8);
            pNVar4 = param_1 + 0x20;
            if (pNVar5 != (Node *)0x0) {
              pNVar8 = pNVar5;
            }
            pNVar5 = pNVar4;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar5 = (Node *)(*(long *)pNVar4 + 0x10);
            }
            pNVar6 = *(Node **)pNVar5;
            if (pNVar6 != pNVar8) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar12 = (Use *)(*(long *)pNVar4 + -0x18);
              }
              else {
                pUVar12 = (Use *)(param_1 + -0x18);
              }
              if (pNVar6 != (Node *)0x0) {
                Node::RemoveUse(pNVar6,pUVar12);
              }
              *(Node **)pNVar5 = pNVar8;
              if (pNVar8 != (Node *)0x0) {
                Node::AppendUse(pNVar8,pUVar12);
              }
            }
            uVar11 = *(uint *)(param_1 + 0x14);
            pNVar4 = local_88;
          }
          pNVar5 = param_1 + 0x20;
          pNVar8 = pNVar5;
          if ((uVar11 & 0xf000000) == 0xf000000) {
            pNVar8 = (Node *)(*(long *)pNVar5 + 0x10);
          }
          pNVar6 = *(Node **)(pNVar8 + 8);
          if (pNVar6 != pNVar4) {
            if ((uVar11 & 0xf000000) == 0xf000000) {
              pUVar12 = (Use *)(*(long *)pNVar5 + -0x30);
            }
            else {
              pUVar12 = (Use *)(param_1 + -0x30);
            }
            if (pNVar6 != (Node *)0x0) {
              Node::RemoveUse(pNVar6,pUVar12);
            }
            *(Node **)(pNVar8 + 8) = pNVar4;
            if (pNVar4 != (Node *)0x0) {
              Node::AppendUse(pNVar4,pUVar12);
            }
          }
          pOVar7 = (Operator *)
                   MachineOperatorBuilder::Int32Add
                             (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          NodeProperties::ChangeOp(param_1,pOVar7);
          pNVar4 = (Node *)ReduceInt32Add(this,param_1);
          goto LAB_01779904;
        }
        if (((sVar1 == 299) &&
            (BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
             ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
                             *)&local_a0,local_70), local_7c != '\0')) &&
           (uVar11 = (local_58 & 0xaaaaaaaa) >> 1 | (local_58 & 0x55555555) << 1,
           uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2,
           uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4,
           uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8,
           (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10) <= (local_80 & 0x1f))) {
          return local_a0;
        }
      }
    }
LAB_01779920:
    param_1 = (Node *)0x0;
  }
  return param_1;
}

