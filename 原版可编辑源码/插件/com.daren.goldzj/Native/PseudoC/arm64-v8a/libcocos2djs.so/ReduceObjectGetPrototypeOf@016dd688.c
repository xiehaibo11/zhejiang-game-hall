
/* v8::internal::compiler::JSCallReducer::ReduceObjectGetPrototypeOf(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceObjectGetPrototypeOf(JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    pNVar1 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  ReduceObjectGetPrototype(this,param_1,pNVar1);
  return;
}

