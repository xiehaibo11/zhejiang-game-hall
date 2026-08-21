
/* v8::internal::compiler::JSIntrinsicLowering::ReduceCall(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceCall(JSIntrinsicLowering *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  Operator *pOVar3;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = CallRuntimeParametersOf(*(Operator **)param_1);
  local_50[0] = 0x7fc00000;
  local_48 = 0;
  local_40 = 0xffffffff;
  pOVar3 = (Operator *)
           JSOperatorBuilder::Call
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                      *(undefined8 *)(lVar2 + 8),local_50,&local_48,2,1,1);
  NodeProperties::ChangeOp(param_1,pOVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

