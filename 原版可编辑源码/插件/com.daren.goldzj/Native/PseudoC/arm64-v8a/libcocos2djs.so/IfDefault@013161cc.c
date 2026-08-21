
/* v8::internal::compiler::WasmGraphBuilder::IfDefault(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::IfDefault(WasmGraphBuilder *this,Node *param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *local_28;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::IfDefault
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],0);
  local_28 = param_1;
  Graph::NewNode(this_00,pOVar1,1,&local_28,false);
  return;
}

