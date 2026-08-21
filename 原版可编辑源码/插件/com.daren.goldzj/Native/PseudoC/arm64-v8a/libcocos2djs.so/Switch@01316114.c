
/* v8::internal::compiler::WasmGraphBuilder::Switch(unsigned int, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::Switch(WasmGraphBuilder *this,uint param_1,Node *param_2)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Switch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],(ulong)param_1);
  uStack_38 = **(undefined8 **)(this + 0x18);
  local_40 = param_2;
  Graph::NewNode(this_00,pOVar1,2,&local_40,false);
  return;
}

