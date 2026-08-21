
/* v8::internal::compiler::WasmGraphBuilder::IfValue(int, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::IfValue(WasmGraphBuilder *this,int param_1,Node *param_2)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *local_28;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::IfValue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],param_1,0,0);
  local_28 = param_2;
  Graph::NewNode(this_00,pOVar1,1,&local_28,false);
  return;
}

