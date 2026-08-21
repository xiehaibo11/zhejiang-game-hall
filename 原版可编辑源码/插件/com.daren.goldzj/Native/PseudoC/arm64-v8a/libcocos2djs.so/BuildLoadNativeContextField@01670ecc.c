
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLoadNativeContextField(int) */

Node * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildLoadNativeContextField
          (BytecodeGraphBuilder *this,int param_1)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::LoadContext
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0,(long)param_1,true);
  pNVar2 = (Node *)MakeNode(this,pOVar1,0,(Node **)0x0,false);
  uStack_28 = *(undefined8 *)(this + 0x20);
  local_30 = *(undefined8 *)(this + 0x18);
  pNVar3 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)&local_30);
  NodeProperties::ReplaceContextInput(pNVar2,pNVar3);
  return pNVar2;
}

