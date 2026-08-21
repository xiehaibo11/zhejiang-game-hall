
/* v8::internal::compiler::WasmGraphBuilder::Param(unsigned int) */

void __thiscall v8::internal::compiler::WasmGraphBuilder::Param(WasmGraphBuilder *this,uint param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *local_28;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Parameter
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],param_1,(char *)0x0);
  local_28 = *(Node **)(**(long **)(this + 8) + 8);
  Graph::NewNode(this_00,pOVar1,1,&local_28,false);
  return;
}

