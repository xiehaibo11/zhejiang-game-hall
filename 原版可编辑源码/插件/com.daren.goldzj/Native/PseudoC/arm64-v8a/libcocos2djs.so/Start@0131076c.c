
/* v8::internal::compiler::WasmGraphBuilder::Start(unsigned int) */

void __thiscall v8::internal::compiler::WasmGraphBuilder::Start(WasmGraphBuilder *this,uint param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_28;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Start
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],param_1);
  local_28 = (Node *)0x0;
  uVar2 = Graph::NewNode(this_00,pOVar1,0,&local_28,false);
  *(undefined8 *)(**(long **)(this + 8) + 8) = uVar2;
  return;
}

