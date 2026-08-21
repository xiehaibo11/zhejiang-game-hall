
/* v8::internal::compiler::WasmGraphBuilder::AtomicFence() */

void __thiscall v8::internal::compiler::WasmGraphBuilder::AtomicFence(WasmGraphBuilder *this)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Graph *this_00;
  Node *local_30;
  undefined8 uStack_28;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::MemBarrier
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_28 = **(undefined8 **)(this + 0x18);
  local_30 = (Node *)**(undefined8 **)(this + 0x20);
  uVar2 = Graph::NewNode(this_00,pOVar1,2,&local_30,false);
  **(undefined8 **)(this + 0x20) = uVar2;
  return;
}

