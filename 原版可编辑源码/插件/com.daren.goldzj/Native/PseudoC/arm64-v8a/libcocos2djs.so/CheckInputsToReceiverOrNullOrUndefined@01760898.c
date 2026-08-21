
/* v8::internal::compiler::JSBinopReduction::CheckInputsToReceiverOrNullOrUndefined() */

void __thiscall
v8::internal::compiler::JSBinopReduction::CheckInputsToReceiverOrNullOrUndefined
          (JSBinopReduction *this)

{
  uint uVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *this_00;
  long *plVar6;
  long lVar7;
  Graph *this_01;
  long *plVar8;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar6 = (long *)(*(long *)(this + 8) + 0x20);
  if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
    plVar6 = (long *)(*plVar6 + 0x10);
  }
  local_58 = *(Node **)(*plVar6 + 8);
  if ((local_58 != (Node *)0x47f0181) &&
     (uVar2 = Type::SlowIs((Type *)&local_58,0x47f0181), (uVar2 & 1) == 0)) {
    CheckLeftInputToReceiverOrNullOrUndefined(this);
  }
  plVar6 = (long *)(*(long *)(this + 8) + 0x20);
  if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
    plVar6 = (long *)(*plVar6 + 0x10);
  }
  local_58 = *(Node **)(plVar6[1] + 8);
  if ((local_58 != (Node *)0x47f0181) &&
     (uVar2 = Type::SlowIs((Type *)&local_58,0x47f0181), (uVar2 & 1) == 0)) {
    this_01 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckReceiverOrNullOrUndefined
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f])
    ;
    pNVar4 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 8),1);
    uVar5 = NodeProperties::GetEffectInput(*(Node **)(this + 8),0);
    local_48 = NodeProperties::GetControlInput(*(Node **)(this + 8),0);
    local_58 = pNVar4;
    uStack_50 = uVar5;
    pNVar4 = (Node *)Graph::NewNode(this_01,pOVar3,3,&local_58,false);
    lVar7 = *(long *)(this + 8);
    plVar6 = (long *)(lVar7 + 0x20);
    uVar1 = *(uint *)(lVar7 + 0x14) & 0xf000000;
    plVar8 = plVar6;
    if (uVar1 == 0xf000000) {
      plVar8 = (long *)(*plVar6 + 0x10);
    }
    this_00 = (Node *)plVar8[1];
    if (this_00 != pNVar4) {
      if (uVar1 == 0xf000000) {
        lVar7 = *plVar6;
      }
      if (this_00 != (Node *)0x0) {
        Node::RemoveUse(this_00,(Use *)(lVar7 + -0x30));
      }
      plVar8[1] = (long)pNVar4;
      if (pNVar4 != (Node *)0x0) {
        Node::AppendUse(pNVar4,(Use *)(lVar7 + -0x30));
      }
    }
    NodeProperties::ReplaceEffectInput(*(Node **)(this + 8),pNVar4,0);
  }
  return;
}

