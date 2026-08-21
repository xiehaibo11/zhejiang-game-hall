
/* v8::internal::compiler::ControlFlowOptimizer::TryBuildSwitch(v8::internal::compiler::Node*) */

undefined4 __thiscall
v8::internal::compiler::ControlFlowOptimizer::TryBuildSwitch
          (ControlFlowOptimizer *this,Node *param_1)

{
  deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  *this_00;
  ulong uVar1;
  int iVar2;
  char cVar3;
  Node *pNVar4;
  long lVar5;
  Node *pNVar6;
  Operator *pOVar7;
  Node *pNVar8;
  __tree_node_base *p_Var9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  undefined4 uVar13;
  Node *pNVar14;
  __tree_node_base *p_Var15;
  Node *this_01;
  __tree_node_base *p_Var16;
  Use *pUVar17;
  Node *pNVar18;
  int iVar19;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_f8 [8];
  Node *local_f0;
  int local_d8;
  char local_d4;
  long local_d0;
  BranchMatcher aBStack_c8 [8];
  Node *local_c0;
  Node *pNStack_b8;
  __tree_node_base *local_b0;
  __tree_node_base *local_a8;
  Zone *local_a0;
  long local_98;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_90 [8];
  Node *local_88;
  int local_70;
  char local_6c;
  
  cVar3 = BranchHintOf(*(Operator **)param_1);
  if (cVar3 == '\0') {
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,0);
    if (*(short *)(*(long *)pNVar4 + 0x10) != 0x14b) {
      return 0;
    }
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher(aBStack_90,pNVar4);
    if (local_6c != '\0') {
      local_a0 = *(Zone **)(this + 0x70);
      local_98 = 0;
      local_a8 = (__tree_node_base *)0x0;
      p_Var15 = *(__tree_node_base **)(local_a0 + 0x10);
      local_b0 = (__tree_node_base *)&local_a8;
      if ((ulong)(*(long *)(local_a0 + 0x18) - (long)p_Var15) < 0x20) {
        p_Var15 = (__tree_node_base *)Zone::NewExpand(local_a0,0x20);
      }
      else {
        *(__tree_node_base **)(local_a0 + 0x10) = p_Var15 + 0x20;
      }
      *(int *)(p_Var15 + 0x1c) = local_70;
      *(undefined8 *)p_Var15 = 0;
      *(undefined8 *)(p_Var15 + 8) = 0;
      *(__tree_node_base **)(p_Var15 + 0x10) = (__tree_node_base *)&local_a8;
      if (*(__tree_node_base **)local_b0 != (__tree_node_base *)0x0) {
        local_b0 = *(__tree_node_base **)local_b0;
      }
      local_a8 = p_Var15;
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (p_Var15,p_Var15);
      local_98 = local_98 + 1;
      this_00 = (deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                 *)(this + 0x18);
      BranchMatcher::BranchMatcher(aBStack_c8,param_1);
      iVar12 = 1;
      local_d0 = *(long *)(pNStack_b8 + 0x18);
      this_01 = pNStack_b8;
      pNVar4 = local_c0;
      pNVar14 = param_1;
      iVar19 = local_70;
      if (local_d0 != 0) {
        while( true ) {
          this_01 = pNStack_b8;
          pNVar4 = local_c0;
          lVar5 = Node::Uses::const_iterator::operator++((const_iterator *)&local_d0,0);
          pNVar18 = (Node *)(lVar5 + (ulong)(*(uint *)(lVar5 + 0x10) >> 1) * 0x18 + 0x18);
          if ((*(uint *)(lVar5 + 0x10) & 1) == 0) {
            pNVar18 = *(Node **)pNVar18;
          }
          if (((*(short *)(*(Operator **)pNVar18 + 0x10) != 2) ||
              (cVar3 = BranchHintOf(*(Operator **)pNVar18), cVar3 != '\0')) || (local_d0 != 0))
          break;
          pNVar8 = pNVar18 + 0x20;
          if ((~*(uint *)(pNVar18 + 0x14) & 0xf000000) == 0) {
            pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
          }
          if (((*(short *)(*(long *)*(Node **)pNVar8 + 0x10) != 0x14b) ||
              (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
               ::BinopMatcher(aBStack_f8,*(Node **)pNVar8), iVar2 = local_d8, local_f0 != local_88))
             || (local_d4 == '\0')) break;
          p_Var15 = (__tree_node_base *)&local_a8;
          p_Var9 = local_a8;
          if (local_a8 != (__tree_node_base *)0x0) {
            do {
              if (local_d8 <= *(int *)(p_Var9 + 0x1c)) {
                p_Var15 = p_Var9;
              }
              p_Var16 = p_Var9 + (ulong)(*(int *)(p_Var9 + 0x1c) < local_d8) * 8;
              p_Var9 = *(__tree_node_base **)p_Var16;
            } while (*(__tree_node_base **)p_Var16 != (__tree_node_base *)0x0);
            if ((p_Var15 != (__tree_node_base *)&local_a8) && (*(int *)(p_Var15 + 0x1c) <= local_d8)
               ) break;
          }
          if (pNVar14 != param_1) {
            Node::NullAllInputs(pNVar14);
            pNVar14 = pNVar4 + 0x20;
            pNVar8 = pNVar14;
            if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar8 = (Node *)(*(long *)pNVar14 + 0x10);
            }
            pNVar6 = *(Node **)pNVar8;
            if (pNVar6 != param_1) {
              if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar17 = (Use *)(*(long *)pNVar14 + -0x18);
              }
              else {
                pUVar17 = (Use *)(pNVar4 + -0x18);
              }
              if (pNVar6 != (Node *)0x0) {
                Node::RemoveUse(pNVar6,pUVar17);
              }
              *(Node **)pNVar8 = param_1;
              Node::AppendUse(param_1,pUVar17);
            }
          }
          pNVar14 = pNVar4 + 0x20;
          pOVar7 = (Operator *)
                   CommonOperatorBuilder::IfValue
                             (*(CommonOperatorBuilder **)(this + 8),iVar19,iVar12,0);
          NodeProperties::ChangeOp(pNVar4,pOVar7);
          Node::NullAllInputs(this_01);
          uVar10 = (byte)pNVar4[0x17] & 0xf;
          if (uVar10 == 0xf) {
            uVar10 = *(uint *)(*(long *)pNVar14 + 8);
            pNVar14 = (Node *)(*(long *)pNVar14 + 0x10);
          }
          p_Var9 = local_a8;
          p_Var15 = (__tree_node_base *)&local_a8;
          if ((((int)uVar10 < 1) || (*(long *)pNVar14 != 0)) &&
             (*(uint *)(pNVar4 + 0x10) <= *(uint *)(this + 0x68))) {
            *(uint *)(pNVar4 + 0x10) = *(uint *)(this + 0x68) + 1;
            lVar5 = *(long *)(this + 0x20);
            uVar1 = 0;
            if (*(long *)(this + 0x28) - lVar5 != 0) {
              uVar1 = (*(long *)(this + 0x28) - lVar5) * 0x40 - 1;
            }
            uVar11 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
            if (uVar1 == uVar11) {
              std::__ndk1::
              deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              ::__add_back_capacity(this_00);
              lVar5 = *(long *)(this + 0x20);
              uVar11 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
            }
            *(Node **)(*(long *)(lVar5 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8)
                 = pNVar4;
            *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
            p_Var9 = local_a8;
          }
          while (p_Var16 = p_Var15, p_Var9 != (__tree_node_base *)0x0) {
            while (p_Var16 = p_Var9, *(int *)(p_Var16 + 0x1c) <= iVar2) {
              if (iVar2 <= *(int *)(p_Var16 + 0x1c)) goto LAB_0169a574;
              p_Var15 = p_Var16 + 8;
              p_Var9 = *(__tree_node_base **)p_Var15;
              if (*(__tree_node_base **)p_Var15 == (__tree_node_base *)0x0) goto LAB_0169a574;
            }
            p_Var15 = p_Var16;
            p_Var9 = *(__tree_node_base **)p_Var16;
          }
LAB_0169a574:
          iVar12 = iVar12 + 1;
          if (*(long *)p_Var15 == 0) {
            p_Var9 = *(__tree_node_base **)(local_a0 + 0x10);
            if ((ulong)(*(long *)(local_a0 + 0x18) - (long)p_Var9) < 0x20) {
              p_Var9 = (__tree_node_base *)Zone::NewExpand(local_a0,0x20);
            }
            else {
              *(__tree_node_base **)(local_a0 + 0x10) = p_Var9 + 0x20;
            }
            *(int *)(p_Var9 + 0x1c) = iVar2;
            *(undefined8 *)p_Var9 = 0;
            *(undefined8 *)(p_Var9 + 8) = 0;
            *(__tree_node_base **)(p_Var9 + 0x10) = p_Var16;
            *(__tree_node_base **)p_Var15 = p_Var9;
            if (*(__tree_node_base **)local_b0 != (__tree_node_base *)0x0) {
              p_Var9 = *(__tree_node_base **)p_Var15;
              local_b0 = *(__tree_node_base **)local_b0;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (local_a8,p_Var9);
            local_98 = local_98 + 1;
          }
          BranchMatcher::BranchMatcher(aBStack_c8,pNVar18);
          local_d0 = *(long *)(pNStack_b8 + 0x18);
          this_01 = pNStack_b8;
          pNVar4 = local_c0;
          pNVar14 = pNVar18;
          iVar19 = iVar2;
          if (local_d0 == 0) break;
        }
      }
      if (pNVar14 == param_1) {
        uVar13 = 0;
      }
      else {
        pNVar18 = param_1 + 0x20;
        pNVar8 = pNVar18;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar8 = (Node *)(*(long *)pNVar18 + 0x10);
        }
        pNVar6 = *(Node **)pNVar8;
        if (pNVar6 != local_88) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar17 = (Use *)(*(long *)pNVar18 + -0x18);
          }
          else {
            pUVar17 = (Use *)(param_1 + -0x18);
          }
          if (pNVar6 != (Node *)0x0) {
            Node::RemoveUse(pNVar6,pUVar17);
          }
          *(Node **)pNVar8 = local_88;
          if (local_88 != (Node *)0x0) {
            Node::AppendUse(local_88,pUVar17);
          }
        }
        pOVar7 = (Operator *)
                 CommonOperatorBuilder::Switch(*(CommonOperatorBuilder **)(this + 8),local_98 + 1);
        NodeProperties::ChangeOp(param_1,pOVar7);
        pNVar18 = pNVar4 + 0x20;
        pNVar8 = pNVar18;
        if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar8 = (Node *)(*(long *)pNVar18 + 0x10);
        }
        pNVar6 = *(Node **)pNVar8;
        if (pNVar6 != param_1) {
          if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar17 = (Use *)(*(long *)pNVar18 + -0x18);
          }
          else {
            pUVar17 = (Use *)(pNVar4 + -0x18);
          }
          if (pNVar6 != (Node *)0x0) {
            Node::RemoveUse(pNVar6,pUVar17);
          }
          *(Node **)pNVar8 = param_1;
          Node::AppendUse(param_1,pUVar17);
        }
        pOVar7 = (Operator *)
                 CommonOperatorBuilder::IfValue
                           (*(CommonOperatorBuilder **)(this + 8),iVar19,iVar12,0);
        NodeProperties::ChangeOp(pNVar4,pOVar7);
        uVar10 = (byte)pNVar4[0x17] & 0xf;
        if (uVar10 == 0xf) {
          uVar10 = *(uint *)(*(long *)pNVar18 + 8);
          pNVar18 = (Node *)(*(long *)pNVar18 + 0x10);
        }
        if ((((int)uVar10 < 1) || (*(long *)pNVar18 != 0)) &&
           (*(uint *)(pNVar4 + 0x10) <= *(uint *)(this + 0x68))) {
          *(uint *)(pNVar4 + 0x10) = *(uint *)(this + 0x68) + 1;
          lVar5 = *(long *)(this + 0x20);
          uVar1 = 0;
          if (*(long *)(this + 0x28) - lVar5 != 0) {
            uVar1 = (*(long *)(this + 0x28) - lVar5) * 0x40 - 1;
          }
          uVar11 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
          if (uVar1 == uVar11) {
            std::__ndk1::
            deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
            ::__add_back_capacity(this_00);
            lVar5 = *(long *)(this + 0x20);
            uVar11 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
          }
          *(Node **)(*(long *)(lVar5 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8) =
               pNVar4;
          *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
        }
        pNVar4 = this_01 + 0x20;
        pNVar18 = pNVar4;
        if ((*(uint *)(this_01 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar18 = (Node *)(*(long *)pNVar4 + 0x10);
        }
        pNVar8 = *(Node **)pNVar18;
        if (pNVar8 != param_1) {
          if ((*(uint *)(this_01 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar17 = (Use *)(*(long *)pNVar4 + -0x18);
          }
          else {
            pUVar17 = (Use *)(this_01 + -0x18);
          }
          if (pNVar8 != (Node *)0x0) {
            Node::RemoveUse(pNVar8,pUVar17);
          }
          *(Node **)pNVar18 = param_1;
          Node::AppendUse(param_1,pUVar17);
        }
        pOVar7 = (Operator *)
                 CommonOperatorBuilder::IfDefault(*(CommonOperatorBuilder **)(this + 8),0);
        NodeProperties::ChangeOp(this_01,pOVar7);
        uVar10 = (byte)this_01[0x17] & 0xf;
        if (uVar10 == 0xf) {
          uVar10 = *(uint *)(*(long *)pNVar4 + 8);
          pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
        }
        if ((((int)uVar10 < 1) || (*(long *)pNVar4 != 0)) &&
           (*(uint *)(this_01 + 0x10) <= *(uint *)(this + 0x68))) {
          *(uint *)(this_01 + 0x10) = *(uint *)(this + 0x68) + 1;
          lVar5 = *(long *)(this + 0x20);
          uVar1 = 0;
          if (*(long *)(this + 0x28) - lVar5 != 0) {
            uVar1 = (*(long *)(this + 0x28) - lVar5) * 0x40 - 1;
          }
          uVar11 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
          if (uVar1 == uVar11) {
            std::__ndk1::
            deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
            ::__add_back_capacity(this_00);
            lVar5 = *(long *)(this + 0x20);
            uVar11 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
          }
          *(Node **)(*(long *)(lVar5 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8) =
               this_01;
          *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
        }
        Node::NullAllInputs(pNVar14);
        uVar13 = 1;
      }
      std::__ndk1::__tree<int,std::__ndk1::less<int>,v8::internal::ZoneAllocator<int>>::destroy
                ((__tree<int,std::__ndk1::less<int>,v8::internal::ZoneAllocator<int>> *)&local_b0,
                 (__tree_node *)local_a8);
      return uVar13;
    }
  }
  return 0;
}

