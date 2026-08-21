
/* v8::internal::compiler::WasmGraphBuilder::S128Zero() */

void __thiscall v8::internal::compiler::WasmGraphBuilder::S128Zero(WasmGraphBuilder *this)

{
  Operator *pOVar1;
  Graph *this_00;
  Node *local_8;
  
  this[0x60] = (WasmGraphBuilder)0x1;
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::S128Zero
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_8 = (Node *)0x0;
  Graph::NewNode(this_00,pOVar1,0,&local_8,false);
  return;
}

