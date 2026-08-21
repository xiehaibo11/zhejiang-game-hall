
/* v8::internal::compiler::JSTypedLowering::ReduceJSResolvePromise(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSResolvePromise(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  Operator *pOVar3;
  long local_18;
  
  lVar1 = NodeProperties::GetValueInput(param_1,1);
  local_18 = *(long *)(lVar1 + 8);
  if ((local_18 == 0x8007fff) ||
     (uVar2 = Type::SlowIs((Type *)&local_18,0x8007fff), (uVar2 & 1) != 0)) {
    Node::RemoveInput(param_1,3);
    pOVar3 = (Operator *)
             JSOperatorBuilder::FulfillPromise
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar3);
  }
  else {
    param_1 = (Node *)0x0;
  }
  return param_1;
}

