
/* v8::internal::compiler::WasmGraphBuilder::Loop(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::WasmGraphBuilder::Loop(WasmGraphBuilder *this,Node *param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *local_28;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Loop((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],1);
  local_28 = param_1;
  Graph::NewNode(this_00,pOVar1,1,&local_28,false);
  return;
}

