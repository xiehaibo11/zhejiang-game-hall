
/* v8::internal::compiler::JSIntrinsicLowering::ReduceGeneratorClose(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceGeneratorClose
          (JSIntrinsicLowering *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  AccessBuilder *this_00;
  Operator *pOVar6;
  SimplifiedOperatorBuilder *this_01;
  FieldAccess aFStack_a0 [56];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pNVar4 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pNVar5 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),-1.0);
  this_00 = (AccessBuilder *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  this_01 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178);
  AccessBuilder::ForJSGeneratorObjectContinuation(this_00);
  pOVar6 = (Operator *)SimplifiedOperatorBuilder::StoreField(this_01,aFStack_a0);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,this_00,param_1,0);
  *(undefined8 *)(param_1 + 8) = 0;
  Change(this,param_1,pOVar6,pNVar2,pNVar5,pNVar3,pNVar4);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

