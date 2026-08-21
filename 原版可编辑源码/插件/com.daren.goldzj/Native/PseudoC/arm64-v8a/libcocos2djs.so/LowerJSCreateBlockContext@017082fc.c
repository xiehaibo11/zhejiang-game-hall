
/* v8::internal::compiler::JSGenericLowering::LowerJSCreateBlockContext(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCreateBlockContext
          (JSGenericLowering *this,Node *param_1)

{
  undefined8 uVar1;
  Node *pNVar2;
  Zone *pZVar3;
  
  uVar1 = ScopeInfoOf(*(Operator **)param_1);
  pZVar3 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),uVar1);
  Node::InsertInput(param_1,pZVar3,0,pNVar2);
  ReplaceWithRuntimeCall(this,param_1,0x13b,0xffffffff);
  return;
}

