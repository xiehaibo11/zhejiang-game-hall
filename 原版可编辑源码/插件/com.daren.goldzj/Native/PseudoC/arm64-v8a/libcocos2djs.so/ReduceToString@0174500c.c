
/* v8::internal::compiler::JSIntrinsicLowering::ReduceToString(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceToString(JSIntrinsicLowering *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  Operator *pOVar3;
  ObjectRef local_40 [16];
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  if (*(short *)(*(long *)pNVar1 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef
              (local_40,*(undefined8 *)(this + 0x18),*(undefined8 *)(*(long *)pNVar1 + 0x30),0);
    uVar2 = ObjectRef::IsHeapObject(local_40);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar2 = ObjectRef::IsString(local_40);
    if ((uVar2 & 1) != 0) {
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar1,0,0);
      return pNVar1;
    }
  }
  pOVar3 = (Operator *)
           JSOperatorBuilder::ToString(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  NodeProperties::ChangeOp(param_1,pOVar3);
  return param_1;
}

