
/* v8::internal::compiler::BinopMatcher<v8::internal::compiler::FloatMatcher<double,
   (v8::internal::compiler::IrOpcode::Value)26>, v8::internal::compiler::FloatMatcher<double,
   (v8::internal::compiler::IrOpcode::Value)26> >::SwapInputs() */

void __thiscall
v8::internal::compiler::
BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
::SwapInputs(BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
             *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  Node *pNVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
  local_50;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(this + 0x18);
  uVar11 = *(undefined8 *)(this + 0x10);
  uVar10 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x20);
  this[0x18] = this[0x30];
  local_50 = SUB81(uVar6,0);
  lVar7 = *(long *)this;
  pNVar8 = *(Node **)(this + 8);
  this[0x30] = local_50;
  *(undefined8 *)(this + 0x28) = uVar11;
  *(undefined8 *)(this + 0x20) = uVar10;
  plVar1 = (long *)(lVar7 + 0x20);
  uVar2 = *(uint *)(lVar7 + 0x14) & 0xf000000;
  plVar9 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar9 = (long *)(*plVar1 + 0x10);
  }
  pNVar4 = (Node *)*plVar9;
  if (pNVar4 != pNVar8) {
    if (uVar2 == 0xf000000) {
      lVar7 = *plVar1;
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,(Use *)(lVar7 + -0x18));
    }
    *plVar9 = (long)pNVar8;
    if (pNVar8 != (Node *)0x0) {
      Node::AppendUse(pNVar8,(Use *)(lVar7 + -0x18));
    }
  }
  lVar7 = *(long *)this;
  pNVar8 = *(Node **)(this + 0x20);
  plVar1 = (long *)(lVar7 + 0x20);
  uVar2 = *(uint *)(lVar7 + 0x14) & 0xf000000;
  plVar9 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar9 = (long *)(*plVar1 + 0x10);
  }
  pNVar4 = (Node *)plVar9[1];
  if (pNVar4 != pNVar8) {
    if (uVar2 == 0xf000000) {
      lVar7 = *plVar1;
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,(Use *)(lVar7 + -0x30));
    }
    plVar9[1] = (long)pNVar8;
    if (pNVar8 != (Node *)0x0) {
      Node::AppendUse(pNVar8,(Use *)(lVar7 + -0x30));
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

