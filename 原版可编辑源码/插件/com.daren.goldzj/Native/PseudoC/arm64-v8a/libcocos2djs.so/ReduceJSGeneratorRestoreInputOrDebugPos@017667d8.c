
/* v8::internal::compiler::JSTypedLowering::ReduceJSGeneratorRestoreInputOrDebugPos(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSGeneratorRestoreInputOrDebugPos
          (JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  Operator *pOVar3;
  FieldAccess aFStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  AccessBuilder::ForJSGeneratorObjectInputOrDebugPos((AccessBuilder *)this);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::LoadField
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178),aFStack_70);
  iVar2 = NodeProperties::PastValueIndex(param_1);
  Node::RemoveInput(param_1,iVar2);
  NodeProperties::ChangeOp(param_1,pOVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

