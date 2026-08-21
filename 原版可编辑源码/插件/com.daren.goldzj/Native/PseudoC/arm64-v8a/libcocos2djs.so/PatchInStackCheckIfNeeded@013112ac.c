
/* v8::internal::compiler::WasmGraphBuilder::PatchInStackCheckIfNeeded() */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::PatchInStackCheckIfNeeded(WasmGraphBuilder *this)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *local_38;
  Node *local_18;
  
  if (this[0x61] != (WasmGraphBuilder)0x0) {
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pNVar3 = *(Node **)(this_00 + 8);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Dead((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1]);
    local_18 = (Node *)0x0;
    pNVar2 = (Node *)Graph::NewNode(this_00,pOVar1,0,&local_18,false);
    local_38 = pNVar2;
    local_18 = pNVar2;
    StackCheck(this,0,&local_38,&local_18);
    if (local_38 != pNVar2) {
      NodeProperties::ReplaceUses(pNVar3,pNVar3,local_38,local_18,(Node *)0x0);
      NodeProperties::ReplaceUses(pNVar2,(Node *)0x0,pNVar3,pNVar3,(Node *)0x0);
    }
  }
  return;
}

