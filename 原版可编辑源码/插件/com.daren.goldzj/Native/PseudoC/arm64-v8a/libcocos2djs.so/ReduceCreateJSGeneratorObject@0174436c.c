
/* v8::internal::compiler::JSIntrinsicLowering::ReduceCreateJSGeneratorObject(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceCreateJSGeneratorObject
          (JSIntrinsicLowering *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar2 = NodeProperties::GetValueInput(param_1,1);
  uVar3 = NodeProperties::GetContextInput(param_1);
  uVar4 = NodeProperties::GetEffectInput(param_1,0);
  uVar5 = NodeProperties::GetControlInput(param_1,0);
  pOVar6 = (Operator *)
           JSOperatorBuilder::CreateGeneratorObject
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  local_78 = pNVar1;
  uStack_70 = uVar2;
  local_68 = uVar3;
  uStack_60 = uVar4;
  local_58 = uVar5;
  uVar2 = Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar6,5,&local_78,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar2,uVar2,0);
  return uVar2;
}

