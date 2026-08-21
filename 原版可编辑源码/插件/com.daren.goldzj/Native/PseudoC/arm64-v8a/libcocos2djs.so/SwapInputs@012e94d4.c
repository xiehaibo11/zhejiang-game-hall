
/* v8::internal::compiler::BinopMatcher<v8::internal::compiler::IntMatcher<int,
   (v8::internal::compiler::IrOpcode::Value)23>, v8::internal::compiler::IntMatcher<int,
   (v8::internal::compiler::IrOpcode::Value)23> >::SwapInputs() */

void __thiscall
v8::internal::compiler::
BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
::SwapInputs(BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
             *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  long lVar5;
  long lVar6;
  Node *pNVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar9 = *(undefined8 *)(this + 8);
  uStack_58 = (undefined5)*(undefined8 *)(this + 0x10);
  uStack_5b = (undefined3)((ulong)uVar9 >> 0x28);
  *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0xd) = *(undefined8 *)(this + 0x1d);
  lVar6 = *(long *)this;
  pNVar7 = *(Node **)(this + 8);
  *(ulong *)(this + 0x1d) = CONCAT53(uStack_58,uStack_5b);
  *(undefined8 *)(this + 0x18) = uVar9;
  plVar1 = (long *)(lVar6 + 0x20);
  uVar2 = *(uint *)(lVar6 + 0x14) & 0xf000000;
  plVar8 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar8 = (long *)(*plVar1 + 0x10);
  }
  pNVar4 = (Node *)*plVar8;
  if (pNVar4 != pNVar7) {
    if (uVar2 == 0xf000000) {
      lVar6 = *plVar1;
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,(Use *)(lVar6 + -0x18));
    }
    *plVar8 = (long)pNVar7;
    if (pNVar7 != (Node *)0x0) {
      Node::AppendUse(pNVar7,(Use *)(lVar6 + -0x18));
    }
  }
  lVar6 = *(long *)this;
  pNVar7 = *(Node **)(this + 0x18);
  plVar1 = (long *)(lVar6 + 0x20);
  uVar2 = *(uint *)(lVar6 + 0x14) & 0xf000000;
  plVar8 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar8 = (long *)(*plVar1 + 0x10);
  }
  pNVar4 = (Node *)plVar8[1];
  if (pNVar4 != pNVar7) {
    if (uVar2 == 0xf000000) {
      lVar6 = *plVar1;
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,(Use *)(lVar6 + -0x30));
    }
    plVar8[1] = (long)pNVar7;
    if (pNVar7 != (Node *)0x0) {
      Node::AppendUse(pNVar7,(Use *)(lVar6 + -0x30));
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

