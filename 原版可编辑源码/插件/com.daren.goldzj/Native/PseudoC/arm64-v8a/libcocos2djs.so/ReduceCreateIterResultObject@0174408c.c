
/* v8::internal::compiler::JSIntrinsicLowering::ReduceCreateIterResultObject(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceCreateIterResultObject
          (JSIntrinsicLowering *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  Operator *pOVar5;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pNVar3 = (Node *)NodeProperties::GetContextInput(param_1);
  pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pOVar5 = (Operator *)
           JSOperatorBuilder::CreateIterResultObject
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  Change(this,param_1,pOVar5,pNVar1,pNVar2,pNVar3,pNVar4);
  return;
}

