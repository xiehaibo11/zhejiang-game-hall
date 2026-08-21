
/* v8::internal::compiler::JSCallReducer::WireInLoopEnd(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSCallReducer::WireInLoopEnd
          (JSCallReducer *this,Node *param_1,Node *param_2,Node *param_3,Node *param_4,Node *param_5
          ,Node *param_6)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  
  pNVar1 = param_1 + 0x20;
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar3 + 8);
  if (pNVar2 != param_5) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      param_1 = *(Node **)pNVar1;
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,(Use *)(param_1 + -0x30));
    }
    *(Node **)(pNVar3 + 8) = param_5;
    if (param_5 != (Node *)0x0) {
      Node::AppendUse(param_5,(Use *)(param_1 + -0x30));
    }
  }
  pNVar1 = param_3 + 0x20;
  pNVar3 = pNVar1;
  if ((*(uint *)(param_3 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar3 + 8);
  if (pNVar2 != param_4) {
    if ((*(uint *)(param_3 + 0x14) & 0xf000000) == 0xf000000) {
      param_3 = *(Node **)pNVar1;
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,(Use *)(param_3 + -0x30));
    }
    *(Node **)(pNVar3 + 8) = param_4;
    if (param_4 != (Node *)0x0) {
      Node::AppendUse(param_4,(Use *)(param_3 + -0x30));
    }
  }
  pNVar1 = param_2 + 0x20;
  pNVar3 = pNVar1;
  if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar3 + 8);
  if (pNVar2 != param_6) {
    if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
      param_2 = *(Node **)pNVar1;
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,(Use *)(param_2 + -0x30));
    }
    *(Node **)(pNVar3 + 8) = param_6;
    if (param_6 != (Node *)0x0) {
      Node::AppendUse(param_6,(Use *)(param_2 + -0x30));
      return;
    }
  }
  return;
}

