
/* v8::internal::compiler::JSIntrinsicLowering::ReduceGeneratorGetResumeMode(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceGeneratorGetResumeMode
          (JSIntrinsicLowering *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  AccessBuilder *this_00;
  Operator *pOVar4;
  SimplifiedOperatorBuilder *this_01;
  FieldAccess aFStack_90 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_00 = (AccessBuilder *)NodeProperties::GetControlInput(param_1,0);
  this_01 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178);
  AccessBuilder::ForJSGeneratorObjectResumeMode(this_00);
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,aFStack_90);
  Change(this,param_1,pOVar4,pNVar2,pNVar3,(Node *)this_00);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

