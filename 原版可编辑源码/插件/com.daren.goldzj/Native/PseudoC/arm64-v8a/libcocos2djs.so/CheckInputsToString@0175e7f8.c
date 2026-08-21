
/* v8::internal::compiler::JSBinopReduction::CheckInputsToString() */

void __thiscall
v8::internal::compiler::JSBinopReduction::CheckInputsToString(JSBinopReduction *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Node *pNVar7;
  long lVar8;
  long *plVar9;
  Graph *pGVar10;
  long *plVar11;
  Node *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar9 = (long *)(*(long *)(this + 8) + 0x20);
  if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
    plVar9 = (long *)(*plVar9 + 0x10);
  }
  local_70 = *(Node **)(*plVar9 + 8);
  if ((local_70 != (Node *)0x4021) &&
     (uVar3 = Type::SlowIs((Type *)&local_70,0x4021), (uVar3 & 1) == 0)) {
    pGVar10 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    local_58 = 0;
    local_50 = 0xffffffff;
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::CheckString
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f],
                        (FeedbackSource *)&local_58);
    pNVar5 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 8),0);
    uVar6 = NodeProperties::GetEffectInput(*(Node **)(this + 8),0);
    local_60 = NodeProperties::GetControlInput(*(Node **)(this + 8),0);
    local_70 = pNVar5;
    uStack_68 = uVar6;
    pNVar5 = (Node *)Graph::NewNode(pGVar10,pOVar4,3,&local_70,false);
    lVar8 = *(long *)(this + 8);
    plVar9 = (long *)(lVar8 + 0x20);
    uVar1 = *(uint *)(lVar8 + 0x14) & 0xf000000;
    plVar11 = plVar9;
    if (uVar1 == 0xf000000) {
      plVar11 = (long *)(*plVar9 + 0x10);
    }
    pNVar7 = (Node *)*plVar11;
    if (pNVar7 != pNVar5) {
      if (uVar1 == 0xf000000) {
        lVar8 = *plVar9;
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,(Use *)(lVar8 + -0x18));
      }
      *plVar11 = (long)pNVar5;
      if (pNVar5 != (Node *)0x0) {
        Node::AppendUse(pNVar5,(Use *)(lVar8 + -0x18));
      }
    }
    NodeProperties::ReplaceEffectInput(*(Node **)(this + 8),pNVar5,0);
  }
  plVar9 = (long *)(*(long *)(this + 8) + 0x20);
  if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
    plVar9 = (long *)(*plVar9 + 0x10);
  }
  local_70 = *(Node **)(plVar9[1] + 8);
  if ((local_70 != (Node *)0x4021) &&
     (uVar3 = Type::SlowIs((Type *)&local_70,0x4021), (uVar3 & 1) == 0)) {
    pGVar10 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    local_58 = 0;
    local_50 = 0xffffffff;
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::CheckString
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f],
                        (FeedbackSource *)&local_58);
    pNVar5 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 8),1);
    uVar6 = NodeProperties::GetEffectInput(*(Node **)(this + 8),0);
    local_60 = NodeProperties::GetControlInput(*(Node **)(this + 8),0);
    local_70 = pNVar5;
    uStack_68 = uVar6;
    pNVar5 = (Node *)Graph::NewNode(pGVar10,pOVar4,3,&local_70,false);
    lVar8 = *(long *)(this + 8);
    plVar9 = (long *)(lVar8 + 0x20);
    uVar1 = *(uint *)(lVar8 + 0x14) & 0xf000000;
    plVar11 = plVar9;
    if (uVar1 == 0xf000000) {
      plVar11 = (long *)(*plVar9 + 0x10);
    }
    pNVar7 = (Node *)plVar11[1];
    if (pNVar7 != pNVar5) {
      if (uVar1 == 0xf000000) {
        lVar8 = *plVar9;
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,(Use *)(lVar8 + -0x30));
      }
      plVar11[1] = (long)pNVar5;
      if (pNVar5 != (Node *)0x0) {
        Node::AppendUse(pNVar5,(Use *)(lVar8 + -0x30));
      }
    }
    NodeProperties::ReplaceEffectInput(*(Node **)(this + 8),pNVar5,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

