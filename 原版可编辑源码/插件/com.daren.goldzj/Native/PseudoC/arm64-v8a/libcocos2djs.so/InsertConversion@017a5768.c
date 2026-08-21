
/* v8::internal::compiler::RepresentationChanger::InsertConversion(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::RepresentationChanger::InsertConversion
          (RepresentationChanger *this,Node *param_1,Operator *param_2,Node *param_3)

{
  undefined8 uVar1;
  Node *pNVar2;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = param_1;
  if (*(int *)(param_2 + 0x1c) < 1) {
    pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),param_2,1,&local_58,false);
  }
  else {
    uVar1 = NodeProperties::GetEffectInput(param_3,0);
    local_48 = NodeProperties::GetControlInput(param_3,0);
    uStack_50 = uVar1;
    pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),param_2,3,&local_58,false);
    NodeProperties::ReplaceEffectInput(param_3,pNVar2,0);
  }
  return pNVar2;
}

