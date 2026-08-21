
/* v8::internal::compiler::JSIntrinsicLowering::ReduceTurbofanStaticAssert(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceTurbofanStaticAssert
          (JSIntrinsicLowering *this,Node *param_1)

{
  Graph *this_00;
  Node *pNVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  Node *local_50;
  undefined8 uStack_48;
  
  if (FLAG_always_opt == '\0') {
    pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
    uVar2 = NodeProperties::GetEffectInput(param_1,0);
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::StaticAssert
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_50 = pNVar1;
    uStack_48 = uVar2;
    uVar2 = Graph::NewNode(this_00,pOVar3,2,&local_50,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,uVar2,0);
  }
  else {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
  }
  JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  return;
}

