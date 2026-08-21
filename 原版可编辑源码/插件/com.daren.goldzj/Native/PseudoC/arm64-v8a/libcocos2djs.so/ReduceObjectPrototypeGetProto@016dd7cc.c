
/* v8::internal::compiler::JSCallReducer::ReduceObjectPrototypeGetProto(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceObjectPrototypeGetProto
          (JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,1);
  ReduceObjectGetPrototype(this,param_1,pNVar1);
  return;
}

