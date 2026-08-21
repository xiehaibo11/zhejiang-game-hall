
/* v8::internal::compiler::JSTypedLowering::ReduceJSToNumber(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSToNumber(JSTypedLowering *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  long local_38;
  
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  pNVar1 = (Node *)ReduceJSToNumberInput(this,pNVar5);
  if (pNVar1 == (Node *)0x0) {
    local_38 = *(long *)(pNVar5 + 8);
    if ((local_38 == 0x5fff) || (uVar2 = Type::SlowIs((Type *)&local_38,0x5fff), (uVar2 & 1) != 0))
    {
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
      Node::TrimInputCount(param_1,1);
      uVar3 = Type::Intersect(*(undefined8 *)(param_1 + 8),0x1c5f,
                              *(undefined8 *)**(undefined8 **)(this + 0x10));
      *(undefined8 *)(param_1 + 8) = uVar3;
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::PlainPrimitiveToNumber
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      NodeProperties::ChangeOp(param_1,pOVar4);
    }
    else {
      param_1 = (Node *)0x0;
    }
  }
  else {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar1,0,0);
    param_1 = pNVar1;
  }
  return param_1;
}

