
/* v8::internal::compiler::JSBinopReduction::CheckInputsToInternalizedString() */

void __thiscall
v8::internal::compiler::JSBinopReduction::CheckInputsToInternalizedString(JSBinopReduction *this)

{
  uint uVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *pNVar6;
  long lVar7;
  long *plVar8;
  Graph *pGVar9;
  long *plVar10;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar8 = (long *)(*(long *)(this + 8) + 0x20);
  if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
    plVar8 = (long *)(*plVar8 + 0x10);
  }
  local_58 = *(Node **)(*plVar8 + 8);
  if ((local_58 != (Node *)0x6001) &&
     (uVar2 = Type::SlowIs((Type *)&local_58,0x6001), (uVar2 & 1) == 0)) {
    pGVar9 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckInternalizedString
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f])
    ;
    pNVar4 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 8),0);
    uVar5 = NodeProperties::GetEffectInput(*(Node **)(this + 8),0);
    local_48 = NodeProperties::GetControlInput(*(Node **)(this + 8),0);
    local_58 = pNVar4;
    uStack_50 = uVar5;
    pNVar4 = (Node *)Graph::NewNode(pGVar9,pOVar3,3,&local_58,false);
    lVar7 = *(long *)(this + 8);
    plVar8 = (long *)(lVar7 + 0x20);
    uVar1 = *(uint *)(lVar7 + 0x14) & 0xf000000;
    plVar10 = plVar8;
    if (uVar1 == 0xf000000) {
      plVar10 = (long *)(*plVar8 + 0x10);
    }
    pNVar6 = (Node *)*plVar10;
    if (pNVar6 != pNVar4) {
      if (uVar1 == 0xf000000) {
        lVar7 = *plVar8;
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,(Use *)(lVar7 + -0x18));
      }
      *plVar10 = (long)pNVar4;
      if (pNVar4 != (Node *)0x0) {
        Node::AppendUse(pNVar4,(Use *)(lVar7 + -0x18));
      }
    }
    NodeProperties::ReplaceEffectInput(*(Node **)(this + 8),pNVar4,0);
  }
  plVar8 = (long *)(*(long *)(this + 8) + 0x20);
  if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
    plVar8 = (long *)(*plVar8 + 0x10);
  }
  local_58 = *(Node **)(plVar8[1] + 8);
  if ((local_58 != (Node *)0x6001) &&
     (uVar2 = Type::SlowIs((Type *)&local_58,0x6001), (uVar2 & 1) == 0)) {
    pGVar9 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckInternalizedString
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f])
    ;
    pNVar4 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 8),1);
    uVar5 = NodeProperties::GetEffectInput(*(Node **)(this + 8),0);
    local_48 = NodeProperties::GetControlInput(*(Node **)(this + 8),0);
    local_58 = pNVar4;
    uStack_50 = uVar5;
    pNVar4 = (Node *)Graph::NewNode(pGVar9,pOVar3,3,&local_58,false);
    lVar7 = *(long *)(this + 8);
    plVar8 = (long *)(lVar7 + 0x20);
    uVar1 = *(uint *)(lVar7 + 0x14) & 0xf000000;
    plVar10 = plVar8;
    if (uVar1 == 0xf000000) {
      plVar10 = (long *)(*plVar8 + 0x10);
    }
    pNVar6 = (Node *)plVar10[1];
    if (pNVar6 != pNVar4) {
      if (uVar1 == 0xf000000) {
        lVar7 = *plVar8;
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,(Use *)(lVar7 + -0x30));
      }
      plVar10[1] = (long)pNVar4;
      if (pNVar4 != (Node *)0x0) {
        Node::AppendUse(pNVar4,(Use *)(lVar7 + -0x30));
      }
    }
    NodeProperties::ReplaceEffectInput(*(Node **)(this + 8),pNVar4,0);
  }
  return;
}

