
/* v8::internal::compiler::WasmGraphBuilder::Error() */

void __thiscall v8::internal::compiler::WasmGraphBuilder::Error(WasmGraphBuilder *this)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Node *local_28;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar3[0x2c] == 0) {
    this_00 = (Graph *)*puVar3;
    pOVar1 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar3[1]);
    local_28 = (Node *)0x0;
    uVar2 = Graph::NewNode(this_00,pOVar1,0,&local_28,false);
    puVar3[0x2c] = uVar2;
  }
  return;
}

