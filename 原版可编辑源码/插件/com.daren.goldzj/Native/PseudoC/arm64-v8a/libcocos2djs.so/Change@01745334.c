
/* v8::internal::compiler::JSIntrinsicLowering::Change(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::Change
          (JSIntrinsicLowering *this,Node *param_1,Operator *param_2,Node *param_3,Node *param_4,
          Node *param_5,Node *param_6)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  Use *pUVar4;
  
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
  pNVar1 = param_1 + 0x20;
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)pNVar3;
  if (pNVar2 != param_3) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar4 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar4 = (Use *)(param_1 + -0x18);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar4);
    }
    *(Node **)pNVar3 = param_3;
    if (param_3 != (Node *)0x0) {
      Node::AppendUse(param_3,pUVar4);
    }
  }
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar3 + 8);
  if (pNVar2 != param_4) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar4 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar4 = (Use *)(param_1 + -0x30);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar4);
    }
    *(Node **)(pNVar3 + 8) = param_4;
    if (param_4 != (Node *)0x0) {
      Node::AppendUse(param_4,pUVar4);
    }
  }
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar3 + 0x10);
  if (pNVar2 != param_5) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar4 = (Use *)(*(long *)pNVar1 + -0x48);
    }
    else {
      pUVar4 = (Use *)(param_1 + -0x48);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar4);
    }
    *(Node **)(pNVar3 + 0x10) = param_5;
    if (param_5 != (Node *)0x0) {
      Node::AppendUse(param_5,pUVar4);
    }
  }
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar3 + 0x18);
  if (pNVar2 != param_6) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar4 = (Use *)(*(long *)pNVar1 + -0x60);
    }
    else {
      pUVar4 = (Use *)(param_1 + -0x60);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar4);
    }
    *(Node **)(pNVar3 + 0x18) = param_6;
    if (param_6 != (Node *)0x0) {
      Node::AppendUse(param_6,pUVar4);
    }
  }
  Node::TrimInputCount(param_1,4);
  NodeProperties::ChangeOp(param_1,param_2);
  return param_1;
}

