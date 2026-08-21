
/* v8::internal::compiler::JSCallReducer::ReduceDateNow(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceDateNow(JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  Graph *this_00;
  Node *local_50;
  undefined8 uStack_48;
  
  pNVar1 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar2 = NodeProperties::GetControlInput(param_1,0);
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::DateNow
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_50 = pNVar1;
  uStack_48 = uVar2;
  uVar4 = Graph::NewNode(this_00,pOVar3,2,&local_50,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,uVar4,uVar2);
  return uVar4;
}

