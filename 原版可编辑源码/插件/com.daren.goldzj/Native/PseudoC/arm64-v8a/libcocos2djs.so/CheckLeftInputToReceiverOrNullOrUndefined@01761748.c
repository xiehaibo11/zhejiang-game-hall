
/* v8::internal::compiler::JSBinopReduction::CheckLeftInputToReceiverOrNullOrUndefined() */

void __thiscall
v8::internal::compiler::JSBinopReduction::CheckLeftInputToReceiverOrNullOrUndefined
          (JSBinopReduction *this)

{
  long *plVar1;
  uint uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *this_00;
  long lVar6;
  Graph *this_01;
  long *plVar7;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  this_01 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::CheckReceiverOrNullOrUndefined
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f]);
  pNVar4 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 8),0);
  uVar5 = NodeProperties::GetEffectInput(*(Node **)(this + 8),0);
  local_48 = NodeProperties::GetControlInput(*(Node **)(this + 8),0);
  local_58 = pNVar4;
  uStack_50 = uVar5;
  pNVar4 = (Node *)Graph::NewNode(this_01,pOVar3,3,&local_58,false);
  lVar6 = *(long *)(this + 8);
  plVar1 = (long *)(lVar6 + 0x20);
  uVar2 = *(uint *)(lVar6 + 0x14) & 0xf000000;
  plVar7 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar7 = (long *)(*plVar1 + 0x10);
  }
  this_00 = (Node *)*plVar7;
  if (this_00 != pNVar4) {
    if (uVar2 == 0xf000000) {
      lVar6 = *plVar1;
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,(Use *)(lVar6 + -0x18));
    }
    *plVar7 = (long)pNVar4;
    if (pNVar4 != (Node *)0x0) {
      Node::AppendUse(pNVar4,(Use *)(lVar6 + -0x18));
    }
  }
  NodeProperties::ReplaceEffectInput(*(Node **)(this + 8),pNVar4,0);
  return;
}

