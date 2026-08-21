
/* v8::internal::compiler::InstructionSelector::VisitWord32Equal(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32Equal
          (InstructionSelector *this,Node *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  Node *pNVar5;
  ulong uVar6;
  Node *pNVar7;
  Node *pNVar8;
  long lVar9;
  Use *pUVar10;
  long *plVar11;
  long local_e8;
  Node *local_e0;
  Node *local_d0;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_c0 [8];
  Node *local_b8;
  Node *local_a8;
  int local_a0;
  char local_9c;
  ulong local_98 [2];
  undefined8 local_88;
  undefined4 local_80;
  Node *local_78;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_98[0] = 5;
  local_88 = 0;
  local_80 = 0xffffffff;
  local_78 = param_1;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_c0,param_1);
  if (((local_9c == '\0') || (local_a0 != 0)) ||
     (uVar4 = CanCover(this,param_1,local_b8), (uVar4 & 1) == 0)) goto switchD_01623970_caseD_128;
  switch(*(undefined2 *)(*(long *)local_b8 + 0x10)) {
  default:
    uVar4 = GetVirtualRegister(this,local_b8);
    MarkAsUsed(this,local_b8);
    uVar6 = GetVirtualRegister(this,local_b8);
    MarkAsUsed(this,local_b8);
    EmitWithContinuation
              (this,0x6d,(uVar4 & 0xffffffff) << 3 | 0x5800000001,
               (uVar6 & 0xffffffff) << 3 | 0x5800000001,local_98);
    break;
  case 0x131:
    FUN_01622744(this,local_b8,0x69,local_98,0);
    break;
  case 0x14b:
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_e8,local_b8);
    pNVar8 = param_1 + 0x20;
    pNVar7 = pNVar8;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    pNVar5 = *(Node **)pNVar7;
    if (pNVar5 != local_e0) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar8 + -0x18);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x18);
      }
      if (pNVar5 != (Node *)0x0) {
        Node::RemoveUse(pNVar5,pUVar10);
      }
      *(Node **)pNVar7 = local_e0;
      if (local_e0 != (Node *)0x0) {
        Node::AppendUse(local_e0,pUVar10);
      }
    }
    pNVar7 = pNVar8;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    pNVar5 = *(Node **)(pNVar7 + 8);
    if (pNVar5 != local_d0) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar8 + -0x30);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x30);
      }
      if (pNVar5 != (Node *)0x0) {
        Node::RemoveUse(pNVar5,pUVar10);
      }
      *(Node **)(pNVar7 + 8) = local_d0;
      if (local_d0 != (Node *)0x0) {
        Node::AppendUse(local_d0,pUVar10);
      }
    }
    pNVar8 = local_a8;
    local_98[0] = local_98[0] ^ 0x100000000;
    plVar1 = (long *)(local_e8 + 0x20);
    uVar2 = *(uint *)(local_e8 + 0x14) & 0xf000000;
    plVar11 = plVar1;
    if (uVar2 == 0xf000000) {
      plVar11 = (long *)(*plVar1 + 0x10);
    }
    pNVar7 = (Node *)*plVar11;
    if (pNVar7 != local_a8) {
      lVar9 = local_e8;
      if (uVar2 == 0xf000000) {
        lVar9 = *plVar1;
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,(Use *)(lVar9 + -0x18));
      }
      *plVar11 = (long)pNVar8;
      if (pNVar8 != (Node *)0x0) {
        Node::AppendUse(pNVar8,(Use *)(lVar9 + -0x18));
      }
    }
    plVar1 = (long *)(local_e8 + 0x20);
    uVar2 = *(uint *)(local_e8 + 0x14) & 0xf000000;
    plVar11 = plVar1;
    if (uVar2 == 0xf000000) {
      plVar11 = (long *)(*plVar1 + 0x10);
    }
    pNVar8 = (Node *)plVar11[1];
    if (pNVar8 != local_a8) {
      if (uVar2 == 0xf000000) {
        local_e8 = *plVar1;
      }
      if (pNVar8 != (Node *)0x0) {
        Node::RemoveUse(pNVar8,(Use *)(local_e8 + -0x30));
      }
      plVar11[1] = (long)local_a8;
      if (local_a8 != (Node *)0x0) {
        Node::AppendUse(local_a8,(Use *)(local_e8 + -0x30));
      }
    }
  case 0x128:
  case 0x12f:
switchD_01623970_caseD_128:
    FUN_01622314(this,param_1,local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

