
/* v8::internal::compiler::JSTypedLowering::ReduceJSToNumeric(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSToNumeric(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  long local_28;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  local_28 = *(long *)(lVar1 + 8);
  if ((local_28 == 0x7fff) || (uVar2 = Type::SlowIs((Type *)&local_28,0x7fff), (uVar2 & 1) != 0)) {
    pOVar3 = (Operator *)
             JSOperatorBuilder::ToNumber(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar3);
    pNVar4 = (Node *)ReduceJSToNumber(this,param_1);
    if (pNVar4 != (Node *)0x0) {
      param_1 = pNVar4;
    }
  }
  else {
    param_1 = (Node *)0x0;
  }
  return param_1;
}

